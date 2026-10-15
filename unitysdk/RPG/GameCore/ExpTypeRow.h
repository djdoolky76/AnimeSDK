#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpTypeRow; }

#define RPG_GAMECORE_EXPTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68D2E0)
#define RPG_GAMECORE_EXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68CC80)

namespace RPG::GameCore
{
	class ExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 TypeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
