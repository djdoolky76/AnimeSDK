#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace System { class Object; }

#define OKLNFDLFBIH_GJHMJMHPMPN_OFFSET UNITYSDK_OFFSET(0x1844BB60)
#define OKLNFDLFBIH_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x1844B4E0)
#define OKLNFDLFBIH_PKNPDIHDEIH_OFFSET UNITYSDK_OFFSET(0x1844BB50)
#define OKLNFDLFBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1844B340)

inline static constexpr unsigned int OKLNFDLFBIH_TypeDefinitionIndex = 89936;

class OKLNFDLFBIH : public ::HOAAKHNGJJI
{
public:
	::System::Object* _MPNNDIFAJNH_k__BackingField; // 0x20
	::System::Object* _BELAHIMCDMJ_k__BackingField; // 0x28
	::UnityEngine::Vector3 NDLBFGNOFGI; // 0x30
	::System::Single AIHMPALHMBB; // 0x3C

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Object* GDDIMKGELFA, ::System::Object* IMDKKBNNGHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + OKLNFDLFBIH__CTOR_OFFSET))(this, NNMFMPBGFFB, GDDIMKGELFA, IMDKKBNNGHM);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + OKLNFDLFBIH_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}

	::System::Object* PKNPDIHDEIH()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLNFDLFBIH_PKNPDIHDEIH_OFFSET))(this);
	}

	::System::Object* GJHMJMHPMPN()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLNFDLFBIH_GJHMJMHPMPN_OFFSET))(this);
	}
};
