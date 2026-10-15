#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"

#define BLEKOPCKPJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA68520)
#define BLEKOPCKPJP_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xBA67D70)

inline static constexpr unsigned int BLEKOPCKPJP_TypeDefinitionIndex = 64232;

	class BLEKOPCKPJP : public ::RPG::Client::FloorConnectivityData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKOPCKPJP_CTOR_OFFSET))(this);
		}

		::System::Void SetupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKOPCKPJP_SETUPDATA_OFFSET))(this);
		}

	};
