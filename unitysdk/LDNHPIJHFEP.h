#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPPGNEDDCEO.h"
#include "unitysdk/System/Object.h"

class OCLLKJMICKK;

#define LDNHPIJHFEP_FCMCANCHPNJ_OFFSET UNITYSDK_OFFSET(0x1F62A090)
#define LDNHPIJHFEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F62A080)

inline static constexpr unsigned int LDNHPIJHFEP_TypeDefinitionIndex = 94833;

class LDNHPIJHFEP : public ::System::Object
{
public:
	::OPPGNEDDCEO FEOKCKPMGAJ; // 0x10
	::System::Int32 FJPBKADAMGC; // 0x14
	::System::Int32 GJCNAJOLAKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNHPIJHFEP__CTOR_OFFSET))(this);
	}

	::System::Boolean FCMCANCHPNJ(::OCLLKJMICKK* KMHICJLIECP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCLLKJMICKK*))((::PBYTE)hIl2Cpp + LDNHPIJHFEP_FCMCANCHPNJ_OFFSET))(this, KMHICJLIECP);
	}
};
