#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define SUBWAYSCHEDULEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE9991A0)

inline static constexpr unsigned int SubwayScheduleData_TypeDefinitionIndex = 47093;

	class SubwayScheduleData : public ::System::Object
	{
	public:
		::System::Int32 SubwayEnterTime; // 0x10
		::System::Int32 SubwayExitTime; // 0x14
		::Il2CppArray<::System::Object*>* MemberTypeWeightConfigs; // 0x18
		::Il2CppArray<::System::Object*>* MemberAnimWeightConfigs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBWAYSCHEDULEDATA_CTOR_OFFSET))(this);
		}

	};
