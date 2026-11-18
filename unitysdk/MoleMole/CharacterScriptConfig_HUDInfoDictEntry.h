#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19087B50)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_HUDInfoDictEntry_TypeDefinitionIndex = 51780;

	class CharacterScriptConfig_HUDInfoDictEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICTENTRY__CTOR_OFFSET))(this);
		}
	};
}
