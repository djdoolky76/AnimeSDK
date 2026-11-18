#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDIFFNFEKKD.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define IAJLHMMOHNF_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x16A8EB30)
#define IAJLHMMOHNF_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x16A8EAE0)
#define IAJLHMMOHNF_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x16A8ECB0)
#define IAJLHMMOHNF_GAKJDLOMFOD_OFFSET UNITYSDK_OFFSET(0x16A8EB40)
#define IAJLHMMOHNF_IGLOHAFPPJB_OFFSET UNITYSDK_OFFSET(0x16A8ECA0)
#define IAJLHMMOHNF_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x16A8EC30)
#define IAJLHMMOHNF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8EAD0)

inline static constexpr unsigned int IAJLHMMOHNF_TypeDefinitionIndex = 90456;

class IAJLHMMOHNF : public ::System::Object
{
public:
	::PDIFFNFEKKD PFIHHOACHAB; // 0x10
	::System::Single ECCHCGLGCBA; // 0x18
	::System::Single KKJKPJEGKJC; // 0x1C
	::System::Boolean _IEDHMANDGNO_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single MIMCMAKGELI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHMMOHNF__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHMMOHNF_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHMMOHNF_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Void GAKJDLOMFOD(::System::Single OKPOHIHEJEE, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + IAJLHMMOHNF_GAKJDLOMFOD_OFFSET))(this, OKPOHIHEJEE, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::System::Void IGLOHAFPPJB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAJLHMMOHNF_IGLOHAFPPJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLHMMOHNF_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAJLHMMOHNF_FCFOEJGPDNO_OFFSET))(this, PMNLNNGEIFM);
	}
};
