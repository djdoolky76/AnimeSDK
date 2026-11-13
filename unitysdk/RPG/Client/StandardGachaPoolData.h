#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

#define RPG_CLIENT_STANDARDGACHAPOOLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A909630)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1A909700)
#define RPG_CLIENT_STANDARDGACHAPOOLDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x1A909640)

namespace RPG::Client
{
	inline static constexpr unsigned int StandardGachaPoolData_TypeDefinitionIndex = 65756;

	class StandardGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STANDARDGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

	};
}
