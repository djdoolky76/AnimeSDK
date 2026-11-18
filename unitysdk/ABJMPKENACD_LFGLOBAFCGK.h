#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABJMPKENACD;
namespace UnityEngine { class Animator; }

#define ABJMPKENACD_LFGLOBAFCGK_EMFGJLBDHMP_OFFSET UNITYSDK_OFFSET(0x143950A0)
#define ABJMPKENACD_LFGLOBAFCGK__CTOR_OFFSET UNITYSDK_OFFSET(0x14395090)

inline static constexpr unsigned int ABJMPKENACD_LFGLOBAFCGK_TypeDefinitionIndex = 88638;

class ABJMPKENACD_LFGLOBAFCGK : public ::System::Object
{
public:
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LFGLOBAFCGK__CTOR_OFFSET))(this);
	}

	::System::Boolean EMFGJLBDHMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LFGLOBAFCGK_EMFGJLBDHMP_OFFSET))(this);
	}
};
