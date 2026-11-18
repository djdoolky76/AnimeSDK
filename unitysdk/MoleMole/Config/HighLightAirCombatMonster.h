#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x190B4E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HighLightAirCombatMonster_TypeDefinitionIndex = 60048;

	class HighLightAirCombatMonster : public ::System::Object
	{
	public:
		::System::String* nodeName; // 0x10
		::System::Int32 id; // 0x18
		::System::Int32 level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATMONSTER__CTOR_OFFSET))(this);
		}
	};
}
