#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpritePresetRecord; }

#define RPG_GAMECORE_SPRITEPRESETRECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4530)
#define RPG_GAMECORE_SPRITEPRESETRECORD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD4540)
#define RPG_GAMECORE_SPRITEPRESETRECORD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD4390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePresetRecord_TypeDefinitionIndex = 24419;

	class SpritePresetRecord : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETRECORD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpritePresetRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETRECORD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpritePresetRecord* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETRECORD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
