#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityConstantGSRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYCONSTANTGSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3506B0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D350130)

namespace RPG::GameCore
{
	class ActivityConstantGSRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityConstantGSRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityConstantGSRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
