#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	enum class StackTrace_TraceFormat : ::System::Int32
	{
		Normal = 0,
		TrailingNewLine = 1,
		NoResourceLookup = 2,
	};
}
