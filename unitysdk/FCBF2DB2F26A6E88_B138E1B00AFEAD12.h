#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }

#define FCBF2DB2F26A6E88_B138E1B00AFEAD12_AC4C6B78470040A4_OFFSET UNITYSDK_OFFSET(0x3DB8960)
#define FCBF2DB2F26A6E88_B138E1B00AFEAD12__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCBF2DB2F26A6E88_B138E1B00AFEAD12_TypeDefinitionIndex = 18893;

class FCBF2DB2F26A6E88_B138E1B00AFEAD12 : public ::System::Object
{
public:
	::PampelGames::RoadConstructor::IntersectionObject* A9A60A97D0B25DB3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBF2DB2F26A6E88_B138E1B00AFEAD12__CTOR_OFFSET))(this);
	}

	::System::Boolean AC4C6B78470040A4(::PampelGames::RoadConstructor::IntersectionObject* AED4E8B903CFBAFD)
	{
		return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::IntersectionObject*))((::PBYTE)hIl2Cpp + FCBF2DB2F26A6E88_B138E1B00AFEAD12_AC4C6B78470040A4_OFFSET))(this, AED4E8B903CFBAFD);
	}
};
