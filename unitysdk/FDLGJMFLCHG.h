#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FDLGJMFLCHG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x116A8CC0)
#define FDLGJMFLCHG_EAIHMEFLJFE_OFFSET UNITYSDK_OFFSET(0x116A8D00)
#define FDLGJMFLCHG_IMPMGHCLOAD_OFFSET UNITYSDK_OFFSET(0x116A8C00)
#define FDLGJMFLCHG_NBJDBJIGOGM_OFFSET UNITYSDK_OFFSET(0x116A8DB0)
#define FDLGJMFLCHG_OBJGABMGPOO_OFFSET UNITYSDK_OFFSET(0x116A8D50)
#define FDLGJMFLCHG_OIBBBEFICMD_OFFSET UNITYSDK_OFFSET(0x116A8C10)
#define FDLGJMFLCHG_PDCCOAJHHML_OFFSET UNITYSDK_OFFSET(0x116A8DA0)
#define FDLGJMFLCHG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x116A8C60)
#define FDLGJMFLCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x116A8D90)

inline static constexpr unsigned int FDLGJMFLCHG_TypeDefinitionIndex = 63772;

class FDLGJMFLCHG : public ::System::Object
{
public:
	::UnityEngine::GameObject* _AOPNJFPNPFE_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGJMFLCHG__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* IMPMGHCLOAD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_IMPMGHCLOAD_OFFSET))(this);
	}

	::System::Void OIBBBEFICMD(::System::Boolean HNACDPGAJKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_OIBBBEFICMD_OFFSET))(this, HNACDPGAJKL);
	}

	::System::Void PLPONJAKNEB(::System::Single OGGBPKJBGNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_PLPONJAKNEB_OFFSET))(this, OGGBPKJBGNO);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void EAIHMEFLJFE(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_EAIHMEFLJFE_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void OBJGABMGPOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_OBJGABMGPOO_OFFSET))(this);
	}

	::System::Void PDCCOAJHHML(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_PDCCOAJHHML_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Collider* NBJDBJIGOGM(::UnityEngine::Transform* KMJNCHNAMIO, ::System::String* NNEBDMOLOLB, ::UnityEngine::Collider* JHDFJNBMJGI)
	{
		return ((::UnityEngine::Collider*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FDLGJMFLCHG_NBJDBJIGOGM_OFFSET))(this, KMJNCHNAMIO, NNEBDMOLOLB, JHDFJNBMJGI);
	}
};
