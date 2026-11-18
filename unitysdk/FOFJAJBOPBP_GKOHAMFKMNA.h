#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class FOFJAJBOPBP;

#define FOFJAJBOPBP_GKOHAMFKMNA_NNOHFNICHPL_OFFSET UNITYSDK_OFFSET(0x116C3DE0)
#define FOFJAJBOPBP_GKOHAMFKMNA__CTOR_OFFSET UNITYSDK_OFFSET(0x116C3DD0)

inline static constexpr unsigned int FOFJAJBOPBP_GKOHAMFKMNA_TypeDefinitionIndex = 92078;

class FOFJAJBOPBP_GKOHAMFKMNA : public ::System::Object
{
public:
	::FOFJAJBOPBP* KLHPEBKNIFB; // 0x10
	::System::Int32 NACGJJKHEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_GKOHAMFKMNA__CTOR_OFFSET))(this);
	}

	::System::Void NNOHFNICHPL(::ALDOKCCIFNB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + FOFJAJBOPBP_GKOHAMFKMNA_NNOHFNICHPL_OFFSET))(this, LJBPECKCCEA);
	}
};
