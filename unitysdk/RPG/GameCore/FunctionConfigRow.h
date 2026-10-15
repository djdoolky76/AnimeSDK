#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEBCIMFFFJF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class FunctionConfigRow; }

#define RPG_GAMECORE_FUNCTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F8890)
#define RPG_GAMECORE_FUNCTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F8690)

namespace RPG::GameCore
{
	class FunctionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::EEBCIMFFFJF*>* OverrideGotoID; // 0x10
		::Il2CppArray<::EEBCIMFFFJF*>* OverrideUnlockID; // 0x18
		::System::UInt32 GotoID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FunctionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
