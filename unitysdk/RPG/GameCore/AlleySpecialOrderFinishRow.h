#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpecialOrderFinishTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleySpecialOrderFinishRow; }

#define RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ECED0)
#define RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3ECC70)

namespace RPG::GameCore
{
	class AlleySpecialOrderFinishRow : public ::System::Object
	{
	public:
		::System::UInt32 Param1; // 0x10
		::System::UInt32 Param2; // 0x14
		::System::UInt32 Param3; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SpecialOrderFinishDesc; // 0x20
		::RPG::GameCore::SpecialOrderFinishTypeEnum SpecialOrderFinishType; // 0x30
		::System::UInt32 SpecialOrderFinishID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleySpecialOrderFinishRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleySpecialOrderFinishRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
