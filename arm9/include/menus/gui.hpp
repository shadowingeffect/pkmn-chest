#ifndef GUI_HPP
#define GUI_HPP

#include "config.hpp"
#include "i18n_ext.hpp"

namespace Gui {
	void prompt(int message, const std::string &confirm = i18n::localize(Config::getLang("lang"), "ok"));
	void prompt(std::string message, const std::string &confirm = i18n::localize(Config::getLang("lang"), "ok"));

	void warn(int message, const std::string &confirm = i18n::localize(Config::getLang("lang"), "ok"));
	void warn(std::string message, const std::string &confirm = i18n::localize(Config::getLang("lang"), "ok"));
}

#endif
