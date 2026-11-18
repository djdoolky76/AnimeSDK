#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"

class JIOPHFNBDJK_JGGNDNBJFAO;

#define JIOPHFNBDJK_GAKFNKJAFAD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1557F070)
#define JIOPHFNBDJK_GAKFNKJAFAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1557F060)

inline static constexpr unsigned int JIOPHFNBDJK_GAKFNKJAFAD_TypeDefinitionIndex = 44532;

class JIOPHFNBDJK_GAKFNKJAFAD : public ::System::Object
{
public:
	::JIOPHFNBDJK_JGGNDNBJFAO* FGBNBFHOKAA; // 0x10
	::System::Boolean ILGBBIMEBDA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOPHFNBDJK_GAKFNKJAFAD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32> IJKOLMELBBC)
	{
		return ((::System::Void(*)(::PVOID, ::ELFDOCCOFLJ_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + JIOPHFNBDJK_GAKFNKJAFAD_LIDNPLMPHAL_OFFSET))(this, IJKOLMELBBC);
	}
};
