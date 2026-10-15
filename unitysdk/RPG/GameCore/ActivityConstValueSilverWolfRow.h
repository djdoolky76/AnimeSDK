#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityConstValueSilverWolfRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34F8D0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34F350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstValueSilverWolfRow_TypeDefinitionIndex = 12355;

	class ActivityConstValueSilverWolfRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::System::String* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityConstValueSilverWolfRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityConstValueSilverWolfRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
