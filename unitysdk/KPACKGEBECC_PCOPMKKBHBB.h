#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig_ConfigCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Collider; }

#define KPACKGEBECC_PCOPMKKBHBB_GLEDCLKFAIC_OFFSET UNITYSDK_OFFSET(0x129AE120)
#define KPACKGEBECC_PCOPMKKBHBB_KKAKEJNLCJE_OFFSET UNITYSDK_OFFSET(0x129AE240)
#define KPACKGEBECC_PCOPMKKBHBB_LDIBNHJCNPF_OFFSET UNITYSDK_OFFSET(0x129AE1A0)
#define KPACKGEBECC_PCOPMKKBHBB_LICEJHDJIFJ_OFFSET UNITYSDK_OFFSET(0x129AE310)
#define KPACKGEBECC_PCOPMKKBHBB_OPJNGMDHIPP_OFFSET UNITYSDK_OFFSET(0x129ADFF0)
#define KPACKGEBECC_PCOPMKKBHBB_PGOCECMAJHK_OFFSET UNITYSDK_OFFSET(0x129AE5A0)
#define KPACKGEBECC_PCOPMKKBHBB__CTOR_OFFSET UNITYSDK_OFFSET(0x129ADFE0)

inline static constexpr unsigned int KPACKGEBECC_PCOPMKKBHBB_TypeDefinitionIndex = 51122;

class KPACKGEBECC_PCOPMKKBHBB : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* KJMLBEHMBJK; // 0x10
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* DFMKILICPFB; // 0x18
	::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* AAFKCGEMGGP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB__CTOR_OFFSET))(this);
	}

	::System::Void OPJNGMDHIPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_OPJNGMDHIPP_OFFSET))(this);
	}

	::System::Collections::IEnumerator* GLEDCLKFAIC()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_GLEDCLKFAIC_OFFSET))(this);
	}

	::System::Void LDIBNHJCNPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_LDIBNHJCNPF_OFFSET))(this);
	}

	::System::Void KKAKEJNLCJE(::ABLJDBEJNNI CCPCOIEDNEE)
	{
		return ((::System::Void(*)(::PVOID, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_KKAKEJNLCJE_OFFSET))(this, CCPCOIEDNEE);
	}

	::System::Void LICEJHDJIFJ(::System::UInt32 NJNCGJLHLKC, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* HOGCDJNHHPC, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* JEFGFMFKALA, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* AONNJBMOCOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider*, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>*, ::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_LICEJHDJIFJ_OFFSET))(this, NJNCGJLHLKC, HOGCDJNHHPC, JEFGFMFKALA, AONNJBMOCOH);
	}

	::System::Void PGOCECMAJHK(::MoleMole::Battle::ColliderEventDispatcher* ICILGJFKNDB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_PGOCECMAJHK_OFFSET))(this, ICILGJFKNDB);
	}
};
