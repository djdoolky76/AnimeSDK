#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJPJIMHIFIP;

#define LJPJIMHIFIP_ICCBADDLFIK_ANNBJAJJENE_OFFSET UNITYSDK_OFFSET(0x13CF8520)
#define LJPJIMHIFIP_ICCBADDLFIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF8510)

inline static constexpr unsigned int LJPJIMHIFIP_ICCBADDLFIK_TypeDefinitionIndex = 55692;

class LJPJIMHIFIP_ICCBADDLFIK : public ::System::Object
{
public:
	::LJPJIMHIFIP* KLHPEBKNIFB; // 0x10
	::System::Boolean DJNKACAKCEI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_ICCBADDLFIK__CTOR_OFFSET))(this);
	}

	::System::Void ANNBJAJJENE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPJIMHIFIP_ICCBADDLFIK_ANNBJAJJENE_OFFSET))(this);
	}
};
