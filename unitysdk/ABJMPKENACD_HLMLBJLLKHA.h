#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABJMPKENACD;
namespace UnityEngine { class Animator; }

#define ABJMPKENACD_HLMLBJLLKHA_EBLNIAICEKJ_OFFSET UNITYSDK_OFFSET(0x14394F00)
#define ABJMPKENACD_HLMLBJLLKHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14394EF0)

inline static constexpr unsigned int ABJMPKENACD_HLMLBJLLKHA_TypeDefinitionIndex = 88629;

class ABJMPKENACD_HLMLBJLLKHA : public ::System::Object
{
public:
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_HLMLBJLLKHA__CTOR_OFFSET))(this);
	}

	::System::Boolean EBLNIAICEKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_HLMLBJLLKHA_EBLNIAICEKJ_OFFSET))(this);
	}
};
