#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimFluteEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFluteConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D691C30)
#define RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D691740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteConfigRow_TypeDefinitionIndex = 14116;

	class FiveDimFluteConfigRow : public ::System::Object
	{
	public:
		::System::String* Code; // 0x10
		::System::String* GPName; // 0x18
		::Il2CppArray<::System::UInt32>* KeepContentIDList; // 0x20
		::RPG::Client::TextID TeleAreaName; // 0x28
		::System::UInt32 EntranceID; // 0x38
		::System::UInt32 ContainerID; // 0x3C
		::System::UInt32 GroupID; // 0x40
		::System::UInt32 TeleAnchorID; // 0x44
		::RPG::Client::TextID AutoPlayChangeGPFailTextmapKey; // 0x48
		::System::UInt32 FiveDimAnchorID; // 0x58
		::System::UInt32 ID; // 0x5C
		::RPG::GameCore::FiveDimFluteEffectType Type; // 0x60
		::System::Int16 GPValue; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFluteConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFluteConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
