#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CeilingType.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaCeilingConfigRow; }

#define RPG_GAMECORE_GACHACEILINGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FAF90)
#define RPG_GAMECORE_GACHACEILINGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FA970)

namespace RPG::GameCore
{
	class GachaCeilingConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CeilingItemList; // 0x10
		::RPG::GameCore::GachaType GachaType; // 0x18
		::System::UInt32 CeilingNum; // 0x1C
		::RPG::GameCore::CeilingType CeilingType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GachaCeilingConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GachaCeilingConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACEILINGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
