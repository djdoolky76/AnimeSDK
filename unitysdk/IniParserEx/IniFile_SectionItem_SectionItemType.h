#pragma once
#include "unitysdk/unitysdk.h"

namespace IniParserEx
{
	enum class IniFile_SectionItem_SectionItemType : ::System::Int32
	{
		None = 0,
		String = 1,
		Single = 2,
		List = 3,
		Map = 4,
	};
}
