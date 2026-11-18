#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGLNLIMIHCA;

#define MACDMBOEGJO_IOODLNINMNA_OFFSET UNITYSDK_OFFSET(0x12D4CC90)
#define MACDMBOEGJO_JJDDGOMOALD_OFFSET UNITYSDK_OFFSET(0x12D4CCD0)
#define MACDMBOEGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4CD10)

inline static constexpr unsigned int MACDMBOEGJO_TypeDefinitionIndex = 86201;

class MACDMBOEGJO : public ::System::Object
{
public:
	::JGLNLIMIHCA* AMNIHACKELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACDMBOEGJO__CTOR_OFFSET))(this);
	}

	::System::Void IOODLNINMNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACDMBOEGJO_IOODLNINMNA_OFFSET))(this);
	}

	::System::Void JJDDGOMOALD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACDMBOEGJO_JJDDGOMOALD_OFFSET))(this);
	}
};
