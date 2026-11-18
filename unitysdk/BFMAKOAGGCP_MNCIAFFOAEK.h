#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBPBNMALPHD;

#define BFMAKOAGGCP_MNCIAFFOAEK_KMFHFOGLHJB_OFFSET UNITYSDK_OFFSET(0x15073F90)
#define BFMAKOAGGCP_MNCIAFFOAEK__CTOR_OFFSET UNITYSDK_OFFSET(0x15073F80)

inline static constexpr unsigned int BFMAKOAGGCP_MNCIAFFOAEK_TypeDefinitionIndex = 56146;

class BFMAKOAGGCP_MNCIAFFOAEK : public ::System::Object
{
public:
	::System::Int32 CBKMKCHAPNC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_MNCIAFFOAEK__CTOR_OFFSET))(this);
	}

	::System::Boolean KMFHFOGLHJB(::GBPBNMALPHD* JEGBBOJPEHL)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBPBNMALPHD*))((::PBYTE)hIl2Cpp + BFMAKOAGGCP_MNCIAFFOAEK_KMFHFOGLHJB_OFFSET))(this, JEGBBOJPEHL);
	}
};
