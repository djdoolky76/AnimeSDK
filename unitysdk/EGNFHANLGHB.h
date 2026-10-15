#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DrinkMakerCheersPerformanceRow; }

#define EGNFHANLGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1451BBC0)
#define EGNFHANLGHB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1451BBF0)
#define EGNFHANLGHB_GET_ISFIRSTDRINKONDAY_OFFSET UNITYSDK_OFFSET(0x1451BC10)
#define EGNFHANLGHB_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1451BC30)
#define EGNFHANLGHB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1451BC00)
#define EGNFHANLGHB_SET_ISFIRSTDRINKONDAY_OFFSET UNITYSDK_OFFSET(0x1451BC20)
#define EGNFHANLGHB_SET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1451BC40)

inline static constexpr unsigned int EGNFHANLGHB_TypeDefinitionIndex = 63624;

	class EGNFHANLGHB : public ::System::Object
	{
	public:
		::System::UInt32 _PerformanceId_k__BackingField; // 0x10
		::System::UInt32 _GroupId_k__BackingField; // 0x14
		::System::Boolean _IsFirstDrinkOnDay_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::DrinkMakerCheersPerformanceRow* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerCheersPerformanceRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGNFHANLGHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNFHANLGHB_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGNFHANLGHB_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstDrinkOnDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNFHANLGHB_GET_ISFIRSTDRINKONDAY_OFFSET))(this);
		}

		::System::Void set_IsFirstDrinkOnDay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGNFHANLGHB_SET_ISFIRSTDRINKONDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_PerformanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNFHANLGHB_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::Void set_PerformanceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGNFHANLGHB_SET_PERFORMANCEID_OFFSET))(this, a1);
		}

	};
