#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BuffType.h"
#include "unitysdk/RPG/GameCore/MapSubEffect.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyMapEffectRow; }

#define RPG_GAMECORE_ALLEYMAPEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8E10)
#define RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B8670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapEffectRow_TypeDefinitionIndex = 12602;

	class AlleyMapEffectRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MapEffectTitle; // 0x10
		::RPG::GameCore::MapSubEffect MapEffectSubType; // 0x20
		::System::Single Param2; // 0x24
		::System::UInt32 MapEffectID; // 0x28
		::RPG::GameCore::BuffType BuffOrDebuff; // 0x2C
		::System::Single Param1; // 0x30
		::System::Single Param3; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyMapEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyMapEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
