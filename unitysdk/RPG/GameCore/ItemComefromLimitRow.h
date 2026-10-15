#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComefromOpenType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemComefromLimitRow; }

#define RPG_GAMECORE_ITEMCOMEFROMLIMITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D790C70)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78FE40)

namespace RPG::GameCore
{
	class ItemComefromLimitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OpenParaList; // 0x10
		::System::UInt32 ComefromID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::ComefromOpenType OpenType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemComefromLimitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemComefromLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
