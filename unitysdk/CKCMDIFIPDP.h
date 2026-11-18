#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CKCMDIFIPDP__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6370)

inline static constexpr unsigned int CKCMDIFIPDP_TypeDefinitionIndex = 86840;

struct alignas(8) CKCMDIFIPDP
{
	::System::Single MDPPNMIPDMP; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x18
	::System::Single OOCGEGAAMMC; // 0x20
	::System::Single KCMNNCFKPEA; // 0x24
	::System::Single FNKNCDIOLHN; // 0x28
	::System::Single HACJFKBLODH; // 0x2C
	::System::Boolean BAIAHFLFOPM; // 0x30
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 PAPOJDGCJLI; // 0x34

	::System::Void _ctor(::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single OOCGEGAAMMC, ::System::Single KCMNNCFKPEA, ::System::Single FNKNCDIOLHN, ::System::Boolean FABEFKHKOKN, ::UnityEngine::Vector3 GFGEDMLAILI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CKCMDIFIPDP__CTOR_OFFSET))(this, MDPPNMIPDMP, FAJHPKBELMF, OOCGEGAAMMC, KCMNNCFKPEA, FNKNCDIOLHN, FABEFKHKOKN, GFGEDMLAILI);
	}
};
