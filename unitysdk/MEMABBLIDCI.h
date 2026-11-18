#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ENBEPNDMDEE.h"
#include "unitysdk/GOGALMLABHE.h"
#include "unitysdk/MoleMole/Battle/MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo.h"
#include "unitysdk/NAMNHMDMFHE.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }

#define MEMABBLIDCI_BACBOBJPLBG_OFFSET UNITYSDK_OFFSET(0x1404EBB0)
#define MEMABBLIDCI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1404DCC0)
#define MEMABBLIDCI_GPPMADKADDJ_OFFSET UNITYSDK_OFFSET(0x1404E820)
#define MEMABBLIDCI_HHABDLIOFPG_OFFSET UNITYSDK_OFFSET(0x1404E010)
#define MEMABBLIDCI_OLIGFLGICNI_OFFSET UNITYSDK_OFFSET(0x1404F9C0)

inline static constexpr unsigned int MEMABBLIDCI_TypeDefinitionIndex = 46441;

class MEMABBLIDCI : public ::System::Object
{
public:
	static ::ENBEPNDMDEE COKNIICCODC(::UnityEngine::BoxCollider*& EHHHMFKHNAI, ::MoleMole::Interaction::AxisSign& PGDOLLLEGEC, ::System::Single DIJADIGAGCA)
	{
		return ((::ENBEPNDMDEE(*)(::UnityEngine::BoxCollider*&, ::MoleMole::Interaction::AxisSign&, ::System::Single))((::PBYTE)hIl2Cpp + MEMABBLIDCI_COKNIICCODC_OFFSET))(EHHHMFKHNAI, PGDOLLLEGEC, DIJADIGAGCA);
	}

	static ::System::Boolean GPPMADKADDJ(::UnityEngine::BoxCollider*& EHHHMFKHNAI, ::MoleMole::Battle::MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo& JAEFDGOKGKM)
	{
		return ((::System::Boolean(*)(::UnityEngine::BoxCollider*&, ::MoleMole::Battle::MonoLinearStepStairEnvironmentFeatureProvider_StairStepUnityProviderInfo&))((::PBYTE)hIl2Cpp + MEMABBLIDCI_GPPMADKADDJ_OFFSET))(EHHHMFKHNAI, JAEFDGOKGKM);
	}

	static ::System::Boolean BACBOBJPLBG(::UnityEngine::Vector3& GBIGCEPKHJP, ::UnityEngine::Matrix4x4& NHKIHGLELGE, ::UnityEngine::Vector3& LFEKLKFOIIP, ::MoleMole::Interaction::AxisSign& PGDOLLLEGEC, ::Il2CppArray<::UnityEngine::Vector3>*& OPENGAEMFCB)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::MoleMole::Interaction::AxisSign&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + MEMABBLIDCI_BACBOBJPLBG_OFFSET))(GBIGCEPKHJP, NHKIHGLELGE, LFEKLKFOIIP, PGDOLLLEGEC, OPENGAEMFCB);
	}

	static ::System::Boolean HHABDLIOFPG(::UnityEngine::BoxCollider*& HFEKLDFFOOP, ::MoleMole::Interaction::AxisSign& PGDOLLLEGEC, ::GOGALMLABHE& PPIKGNJHCKH)
	{
		return ((::System::Boolean(*)(::UnityEngine::BoxCollider*&, ::MoleMole::Interaction::AxisSign&, ::GOGALMLABHE&))((::PBYTE)hIl2Cpp + MEMABBLIDCI_HHABDLIOFPG_OFFSET))(HFEKLDFFOOP, PGDOLLLEGEC, PPIKGNJHCKH);
	}

	static ::System::Boolean OLIGFLGICNI(::UnityEngine::BoxCollider*& JAEFDGOKGKM, ::NAMNHMDMFHE& EIJMGEOCMGC)
	{
		return ((::System::Boolean(*)(::UnityEngine::BoxCollider*&, ::NAMNHMDMFHE&))((::PBYTE)hIl2Cpp + MEMABBLIDCI_OLIGFLGICNI_OFFSET))(JAEFDGOKGKM, EIJMGEOCMGC);
	}
};
