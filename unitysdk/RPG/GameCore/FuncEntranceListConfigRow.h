#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FuncEntranceListConfigRow; }

#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6E80)
#define RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F6740)

namespace RPG::GameCore
{
	class FuncEntranceListConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockGotoTypeList; // 0x10
		::Il2CppArray<::System::UInt32>* FuncEntranceIDList; // 0x18
		::Il2CppArray<::System::UInt32>* HudFuncEntranceIDList; // 0x20
		::Il2CppArray<::System::UInt32>* LeftHudFuncEntranceIDList; // 0x28
		::Il2CppArray<::System::UInt32>* BottomFuncEntranceIDList; // 0x30
		::System::Boolean WheelSupport; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FuncEntranceListConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FuncEntranceListConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCENTRANCELISTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
