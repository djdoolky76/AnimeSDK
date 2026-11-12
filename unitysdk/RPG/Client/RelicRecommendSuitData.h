#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RELICRECOMMENDSUITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE938B70)
#define RPG_CLIENT_RELICRECOMMENDSUITDATA_GETMATCHPERCENT_OFFSET UNITYSDK_OFFSET(0xE939D90)
#define RPG_CLIENT_RELICRECOMMENDSUITDATA_ISMATCH_OFFSET UNITYSDK_OFFSET(0xE939890)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendSuitData_TypeDefinitionIndex = 68752;

	class RelicRecommendSuitData : public ::System::Object
	{
	public:
		::System::UInt32 Percent; // 0x10
		::System::UInt32 SetID2; // 0x14
		::System::UInt32 SetID1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUITDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUITDATA_ISMATCH_OFFSET))(this, a1);
		}

		::System::UInt32 GetMatchPercent(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUITDATA_GETMATCHPERCENT_OFFSET))(this, a1);
		}

	};
}
