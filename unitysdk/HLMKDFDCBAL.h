#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/MoleMole/CustomDamperUtility_DampingType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace System { template <typename T> class Func_1; }

#define HLMKDFDCBAL_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x14958390)
#define HLMKDFDCBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x14958340)

inline static constexpr unsigned int HLMKDFDCBAL_TypeDefinitionIndex = 71433;

class HLMKDFDCBAL : public ::HOAAKHNGJJI
{
public:
	::System::Func_1<::UnityEngine::Vector3>* ONDCKLPCBOA; // 0x20
	::UnityEngine::Vector3 NPKBJNHGJFC; // 0x28
	::System::Single JNMEGBLPIOF; // 0x34
	::MoleMole::CustomDamperUtility_DampingType BCODOJDFGKK; // 0x38
	::UnityEngine::Vector3 DLDPEODKMCI; // 0x3C
	::System::Single MDFMBODCHIN; // 0x48

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Boolean NNIODGODLBN, ::MoleMole::UICameraAtom DADJGKEIIGL, ::MoleMole::CustomDamperUtility_DampingType DOFBHABAPAJ, ::System::Func_1<::UnityEngine::Vector3>* GCJMICGNOEB, ::System::Single GIANFEBHPCI, ::System::Single DFDHNBFGMFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::MoleMole::UICameraAtom, ::MoleMole::CustomDamperUtility_DampingType, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HLMKDFDCBAL__CTOR_OFFSET))(this, NNMFMPBGFFB, NNIODGODLBN, DADJGKEIIGL, DOFBHABAPAJ, GCJMICGNOEB, GIANFEBHPCI, DFDHNBFGMFM);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + HLMKDFDCBAL_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}
};
