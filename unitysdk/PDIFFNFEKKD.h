#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define PDIFFNFEKKD_DDIEDENALLF_OFFSET UNITYSDK_OFFSET(0x7A0120)
#define PDIFFNFEKKD_EDDPJJHMGIC_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define PDIFFNFEKKD_JPGIHLMJPNF_OFFSET UNITYSDK_OFFSET(0x16F9EB20)

inline static constexpr unsigned int PDIFFNFEKKD_TypeDefinitionIndex = 52724;

struct alignas(8) PDIFFNFEKKD
{
	::UnityEngine::AnimationCurve* CHIBLBPDKAL; // 0x10

	::System::Boolean EDDPJJHMGIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIFFNFEKKD_EDDPJJHMGIC_OFFSET))(this);
	}

	::System::Single DDIEDENALLF(::System::Single FNIOPKPHDEH, ::System::Single MDPPNMIPDMP, ::System::Boolean& JKBLDFBGBPK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + PDIFFNFEKKD_DDIEDENALLF_OFFSET))(this, FNIOPKPHDEH, MDPPNMIPDMP, JKBLDFBGBPK);
	}

	static ::System::Single JPGIHLMJPNF(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single FNIOPKPHDEH, ::System::Single MDPPNMIPDMP, ::System::Boolean HHJGGLLKACG, ::System::Boolean& JKBLDFBGBPK)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + PDIFFNFEKKD_JPGIHLMJPNF_OFFSET))(FAJHPKBELMF, FNIOPKPHDEH, MDPPNMIPDMP, HHJGGLLKACG, JKBLDFBGBPK);
	}
};
