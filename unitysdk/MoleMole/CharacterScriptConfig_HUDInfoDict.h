#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICT__CTOR_OFFSET UNITYSDK_OFFSET(0x19222DF0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_HUDInfoDict_TypeDefinitionIndex = 51774;

	class CharacterScriptConfig_HUDInfoDict
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_HUDINFODICT__CTOR_OFFSET))(this);
		}
	};
}
