#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityReCollectionItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRECOLLECTIONITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58BBD0)
#define RPG_GAMECORE_ACTIVITYRECOLLECTIONITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E58B970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityReCollectionItemRow_TypeDefinitionIndex = 12387;

	class ActivityReCollectionItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::String* TabIconPath; // 0x18
		::System::UInt32 ActivityID; // 0x20
		::System::UInt32 ReCollectionID; // 0x24
		::System::UInt32 Param3; // 0x28
		::System::UInt32 Param1; // 0x2C
		::System::UInt32 Param2; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRECOLLECTIONITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityReCollectionItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityReCollectionItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRECOLLECTIONITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
