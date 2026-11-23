#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F88E2236814BE60B_A8C0C8C96FDB2167_OFFSET UNITYSDK_OFFSET(0x1E90E20)
#define F88E2236814BE60B_EDD9A23AD98346B6_OFFSET UNITYSDK_OFFSET(0x1E90E00)

inline static constexpr unsigned int F88E2236814BE60B_TypeDefinitionIndex = 19689;

class F88E2236814BE60B : public ::System::Object
{
public:
	static ::System::Int32 EDD9A23AD98346B6(::System::Int32 B8A243EF3616E270)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + F88E2236814BE60B_EDD9A23AD98346B6_OFFSET))(B8A243EF3616E270);
	}

	static ::System::Void A8C0C8C96FDB2167(::System::Object* E29EC3FF210915A2)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + F88E2236814BE60B_A8C0C8C96FDB2167_OFFSET))(E29EC3FF210915A2);
	}
};
