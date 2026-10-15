#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua::TemplateEngine
{
	enum class TokenType : ::System::Int32
	{
		Code = 0,
		Eval = 1,
		Text = 2,
	};
}
