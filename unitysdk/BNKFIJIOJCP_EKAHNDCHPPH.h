#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNKFIJIOJCP;
class KINMNJGBFLP;

#define BNKFIJIOJCP_EKAHNDCHPPH_CHMNILOOKCK_OFFSET UNITYSDK_OFFSET(0x11602330)
#define BNKFIJIOJCP_EKAHNDCHPPH__CTOR_OFFSET UNITYSDK_OFFSET(0x11602320)

inline static constexpr unsigned int BNKFIJIOJCP_EKAHNDCHPPH_TypeDefinitionIndex = 69992;

class BNKFIJIOJCP_EKAHNDCHPPH : public ::System::Object
{
public:
	::BNKFIJIOJCP* KLHPEBKNIFB; // 0x10
	::KINMNJGBFLP* IPMMCGDMODG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKFIJIOJCP_EKAHNDCHPPH__CTOR_OFFSET))(this);
	}

	::System::Void CHMNILOOKCK(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BNKFIJIOJCP_EKAHNDCHPPH_CHMNILOOKCK_OFFSET))(this, PIIPCLCCOIG);
	}
};
