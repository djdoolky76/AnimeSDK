#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399810)
#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D399610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterFloatingConfig_TypeDefinitionIndex = 17487;

	class AdventureCharacterFloatingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ForceUseWorldUp; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Height; // 0x14
		::System::Single Offset; // 0x18
		::System::Single LoopDuration; // 0x1C
		::System::String* CurveName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterFloatingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterFloatingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
