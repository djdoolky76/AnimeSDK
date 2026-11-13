#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8B560)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1AD8B730)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AD8B6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int NewbieGachaPoolData_TypeDefinitionIndex = 65758;

	class NewbieGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		::System::UInt32 TotalGachaTime; // 0x90
		::System::UInt32 DoGachaTime; // 0x94
		// static const ::System::String* _TOTAL_GACHCA_TIME_INDEX; // 0x0
		// static const ::System::String* _DISCOUNT_NUM_INDEX; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

	};
}
