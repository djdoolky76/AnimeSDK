#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class ACINBMKPHEJ;
class MonoUITableScrollV2;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_POINTERCLICKFORWARDER_AIIBCHCIEGA_OFFSET UNITYSDK_OFFSET(0x131161E0)
#define MOLEMOLE_POINTERCLICKFORWARDER_ATTACHTOSCROLLVIEWVIEWPORT_OFFSET UNITYSDK_OFFSET(0x131154C0)
#define MOLEMOLE_POINTERCLICKFORWARDER_BAABNHJJLGD_OFFSET UNITYSDK_OFFSET(0x13115C70)
#define MOLEMOLE_POINTERCLICKFORWARDER_DMMCEFJKDAE_OFFSET UNITYSDK_OFFSET(0x13115F90)
#define MOLEMOLE_POINTERCLICKFORWARDER_LIHKNCOFJOC_OFFSET UNITYSDK_OFFSET(0x131162F0)
#define MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x131151B0)
#define MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x13115210)
#define MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x13115260)
#define MOLEMOLE_POINTERCLICKFORWARDER__CTOR_OFFSET UNITYSDK_OFFSET(0x131162A0)

namespace MoleMole
{
	inline static constexpr unsigned int PointerClickForwarder_TypeDefinitionIndex = 50436;

	class PointerClickForwarder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnClick; // 0x18
		::System::Boolean JABDABLOCFL; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		static ::ACINBMKPHEJ* AttachToScrollViewViewport(::MonoUITableScrollV2* FAMGIABLFPH, ::System::Action* BFOMBFMONJG)
		{
			return ((::ACINBMKPHEJ*(*)(::MonoUITableScrollV2*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_ATTACHTOSCROLLVIEWVIEWPORT_OFFSET))(FAMGIABLFPH, BFOMBFMONJG);
		}

		static ::System::Void LIHKNCOFJOC(::UnityEngine::Transform* IMLLDOHDCNC, ::UnityEngine::Transform* GCHPCAJIMHB, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_LIHKNCOFJOC_OFFSET))(IMLLDOHDCNC, GCHPCAJIMHB, DJLOKMMLFJC);
		}

		static ::MoleMole::PointerClickForwarder* DMMCEFJKDAE(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Action* BFOMBFMONJG)
		{
			return ((::MoleMole::PointerClickForwarder*(*)(::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_DMMCEFJKDAE_OFFSET))(NJOAJLDJCCJ, BFOMBFMONJG);
		}

		static ::System::Boolean BAABNHJJLGD(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_BAABNHJJLGD_OFFSET))(NJOAJLDJCCJ);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AIIBCHCIEGA(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Transform* NGHLLDAJJJE)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_POINTERCLICKFORWARDER_AIIBCHCIEGA_OFFSET))(IAPKABMDJNF, NGHLLDAJJJE);
		}
	};
}
