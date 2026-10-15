#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54EA70)
#define RPG_GAMECORE_CAKERACEEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D54E6A0)

namespace RPG::GameCore
{
	class CakeRaceEffectRow : public ::System::Object
	{
	public:
		::System::String* EffectIcon; // 0x10
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* AllowRegionTagList; // 0x18
		::System::String* AbilityJson; // 0x20
		::Il2CppArray<::System::UInt32>* AllowSectionIndex; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x30
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* NotAllowRegionTagList; // 0x38
		::RPG::Client::TextID EffectDesc; // 0x40
		::RPG::Client::TextID EffectName; // 0x50
		::System::UInt32 EffectID; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
