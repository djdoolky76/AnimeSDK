#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFHCMCGAMJL;

#define BHABNCIEILJ_AMBOOPCFAPC_DMFBOOHFEPL_OFFSET UNITYSDK_OFFSET(0x18569DC0)
#define BHABNCIEILJ_AMBOOPCFAPC__CTOR_OFFSET UNITYSDK_OFFSET(0x18565DF0)

inline static constexpr unsigned int BHABNCIEILJ_AMBOOPCFAPC_TypeDefinitionIndex = 59799;

class BHABNCIEILJ_AMBOOPCFAPC : public ::System::Object
{
public:
	::System::Int32 INFEECDNHKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHABNCIEILJ_AMBOOPCFAPC__CTOR_OFFSET))(this);
	}

	::System::Boolean DMFBOOHFEPL(::LFHCMCGAMJL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LFHCMCGAMJL*))((::PBYTE)hIl2Cpp + BHABNCIEILJ_AMBOOPCFAPC_DMFBOOHFEPL_OFFSET))(this, HAAEBCOBKFF);
	}
};
