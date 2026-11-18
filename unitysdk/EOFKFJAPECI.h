#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace UnityEngine { class AnimationCurve; }

#define EOFKFJAPECI_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x1355B4E0)
#define EOFKFJAPECI__CTOR_OFFSET UNITYSDK_OFFSET(0x1355B4B0)

inline static constexpr unsigned int EOFKFJAPECI_TypeDefinitionIndex = 44563;

class EOFKFJAPECI : public ::HOAAKHNGJJI
{
public:
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x20
	::System::Single PPELJIHKBBD; // 0x28
	::System::Single MLMHBGOBNIN; // 0x2C

	::System::Void _ctor(::System::Single MLMHBGOBNIN, ::System::Single PPELJIHKBBD, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + EOFKFJAPECI__CTOR_OFFSET))(this, MLMHBGOBNIN, PPELJIHKBBD, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + EOFKFJAPECI_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}
};
