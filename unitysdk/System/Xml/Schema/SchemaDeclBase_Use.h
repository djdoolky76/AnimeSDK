#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	enum class SchemaDeclBase_Use : ::System::Int32
	{
		Default = 0,
		Required = 1,
		Implied = 2,
		Fixed = 3,
		RequiredFixed = 4,
	};
}
