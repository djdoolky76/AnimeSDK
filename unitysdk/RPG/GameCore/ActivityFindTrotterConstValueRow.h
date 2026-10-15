#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFindTrotterConstValueRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D366510)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D365F90)

namespace RPG::GameCore
{
	class ActivityFindTrotterConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFindTrotterConstValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFindTrotterConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
