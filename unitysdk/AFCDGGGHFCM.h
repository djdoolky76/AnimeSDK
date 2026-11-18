#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AFCDGGGHFCM_IOEEAOJNFJG_OFFSET UNITYSDK_OFFSET(0x17CBD3A0)
#define AFCDGGGHFCM_OPPOBELKEFC_OFFSET UNITYSDK_OFFSET(0x17CBD850)

inline static constexpr unsigned int AFCDGGGHFCM_TypeDefinitionIndex = 43345;

class AFCDGGGHFCM : public ::System::Object
{
public:
	static ::System::Boolean IOEEAOJNFJG(::System::Int32 KNMKKPECCKK, ::System::Int32& BOHMJNMLAKO)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AFCDGGGHFCM_IOEEAOJNFJG_OFFSET))(KNMKKPECCKK, BOHMJNMLAKO);
	}

	static ::System::Boolean OPPOBELKEFC(::System::Int32 KNMKKPECCKK, ::System::Int64& PENCLEDOJLL)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + AFCDGGGHFCM_OPPOBELKEFC_OFFSET))(KNMKKPECCKK, PENCLEDOJLL);
	}
};
