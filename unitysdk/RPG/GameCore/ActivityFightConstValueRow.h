#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFightConstValueRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3635F0)
#define RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3634E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightConstValueRow_TypeDefinitionIndex = 11602;

	class ActivityFightConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFightConstValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFightConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
