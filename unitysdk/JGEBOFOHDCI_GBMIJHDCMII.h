#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGEBOFOHDCI;
namespace UnityEngine { class Transform; }

#define JGEBOFOHDCI_GBMIJHDCMII_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x18A13D50)
#define JGEBOFOHDCI_GBMIJHDCMII_ONDROP_OFFSET UNITYSDK_OFFSET(0x18A13DF0)
#define JGEBOFOHDCI_GBMIJHDCMII__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13D40)

inline static constexpr unsigned int JGEBOFOHDCI_GBMIJHDCMII_TypeDefinitionIndex = 70276;

class JGEBOFOHDCI_GBMIJHDCMII : public ::System::Object
{
public:
	::JGEBOFOHDCI* FEFFFPGCIIO; // 0x10

	::System::Void _ctor(::JGEBOFOHDCI* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::JGEBOFOHDCI*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_GBMIJHDCMII__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Boolean CanAcceptDrop(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_GBMIJHDCMII_CANACCEPTDROP_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void OnDrop(::System::Object* MFHBPIBHAOB, ::UnityEngine::Transform* JHDOMODPOPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_GBMIJHDCMII_ONDROP_OFFSET))(this, MFHBPIBHAOB, JHDOMODPOPO);
	}
};
