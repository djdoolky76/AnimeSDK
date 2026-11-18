#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tweener; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class FixedJoint2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class TargetJoint2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIRIGIDBODY_AACMLLOJCJH_OFFSET UNITYSDK_OFFSET(0x17BDCF60)
#define MOLEMOLE_UIRIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x17BD9C60)
#define MOLEMOLE_UIRIGIDBODY_APGOGAJMBIJ_OFFSET UNITYSDK_OFFSET(0x17BDB2B0)
#define MOLEMOLE_UIRIGIDBODY_AWAKE_OFFSET UNITYSDK_OFFSET(0x17BDDCB0)
#define MOLEMOLE_UIRIGIDBODY_BEGINDRAGLOGIC_OFFSET UNITYSDK_OFFSET(0x17BDAA60)
#define MOLEMOLE_UIRIGIDBODY_BGMFOMGMNHE_OFFSET UNITYSDK_OFFSET(0x17BDD0F0)
#define MOLEMOLE_UIRIGIDBODY_CDGBOJGGNEJ_OFFSET UNITYSDK_OFFSET(0x17BD9A90)
#define MOLEMOLE_UIRIGIDBODY_CLPPAGHDCNB_OFFSET UNITYSDK_OFFSET(0x17BDDB40)
#define MOLEMOLE_UIRIGIDBODY_DISABLEMUSIC_OFFSET UNITYSDK_OFFSET(0x17BDF480)
#define MOLEMOLE_UIRIGIDBODY_DRAGLOGIC_OFFSET UNITYSDK_OFFSET(0x17BDC5B0)
#define MOLEMOLE_UIRIGIDBODY_EMNNLHKGKMG_OFFSET UNITYSDK_OFFSET(0x17BE1730)
#define MOLEMOLE_UIRIGIDBODY_ENDDRAGLOGIC_OFFSET UNITYSDK_OFFSET(0x17BDA250)
#define MOLEMOLE_UIRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17BDE7D0)
#define MOLEMOLE_UIRIGIDBODY_GETMASS_OFFSET UNITYSDK_OFFSET(0x17BD9CE0)
#define MOLEMOLE_UIRIGIDBODY_GET_DRAGING_OFFSET UNITYSDK_OFFSET(0x17BD9800)
#define MOLEMOLE_UIRIGIDBODY_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x17BE1C70)
#define MOLEMOLE_UIRIGIDBODY_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x17BE1D90)
#define MOLEMOLE_UIRIGIDBODY_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x17BE1BE0)
#define MOLEMOLE_UIRIGIDBODY_IMKOLDMOMAI_OFFSET UNITYSDK_OFFSET(0x17BE1D00)
#define MOLEMOLE_UIRIGIDBODY_INGFNBAFJMH_OFFSET UNITYSDK_OFFSET(0x17BE1740)
#define MOLEMOLE_UIRIGIDBODY_KBOIDHMAHKK_OFFSET UNITYSDK_OFFSET(0x17BDD1A0)
#define MOLEMOLE_UIRIGIDBODY_KLEPFIPGHIJ_OFFSET UNITYSDK_OFFSET(0x17BDBE00)
#define MOLEMOLE_UIRIGIDBODY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17BDDC20)
#define MOLEMOLE_UIRIGIDBODY_LHMILCHBJAN_OFFSET UNITYSDK_OFFSET(0x17BE05E0)
#define MOLEMOLE_UIRIGIDBODY_MIOLKIOBHOE_OFFSET UNITYSDK_OFFSET(0x17BDF200)
#define MOLEMOLE_UIRIGIDBODY_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x17BDDBC0)
#define MOLEMOLE_UIRIGIDBODY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x17BDA880)
#define MOLEMOLE_UIRIGIDBODY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17BDFDF0)
#define MOLEMOLE_UIRIGIDBODY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17BDFD70)
#define MOLEMOLE_UIRIGIDBODY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x17BDC3C0)
#define MOLEMOLE_UIRIGIDBODY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x17BDDC60)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x17BD9810)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x17BD9D40)
#define MOLEMOLE_UIRIGIDBODY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x17BDA1F0)
#define MOLEMOLE_UIRIGIDBODY_RESETANGLE_OFFSET UNITYSDK_OFFSET(0x17BE0060)
#define MOLEMOLE_UIRIGIDBODY_SETDRAGANCHOR_OFFSET UNITYSDK_OFFSET(0x17BD9F50)
#define MOLEMOLE_UIRIGIDBODY_TRYTRIGGERCLICK_OFFSET UNITYSDK_OFFSET(0x17BD9870)
#define MOLEMOLE_UIRIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE03E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_TypeDefinitionIndex = 91372;

	class UIRigidbody : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Single ClickForceMax; // 0x18
		::System::Single ClickForceMin; // 0x1C
		::System::Single ClickForceLeftOrRight; // 0x20
		::System::Single ClickCD; // 0x24
		::System::Single GKBKDEGHHFG; // 0x28
		::System::Boolean EnableDrag; // 0x2C
		::System::Boolean SimpleDrag; // 0x2D
		::System::Boolean MIENEHBEAPF; // 0x2E
		::System::Boolean MFFINIBGFMJ; // 0x2F
		::System::Single DragFrequency; // 0x30
		::System::Single DragMaxRadius; // 0x34
		::System::Boolean DragAdapterScreen; // 0x38
		::System::Boolean EnableDragAngleRange; // 0x39
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 DragAngleRange; // 0x3C
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* DragAnimationClip; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* ExDragAnimationClip; // 0x50
		::System::Single MaxAnimationLength; // 0x58
		::System::Byte _padding2[0x4];
		::System::String* PlayAnimationInfoTag; // 0x60
		::System::Int32 JHMPEKJDCLB; // 0x68
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::BoxCollider2D*>* DFFNFPNEFOK; // 0x70
		::System::Single BOHHNCJBPNB; // 0x78
		::System::Single HMCELIPDPCK; // 0x7C
		::UnityEngine::Transform* DragFixedTransform; // 0x80
		::MoleMole::UIRigidbody* RootRigidbody; // 0x88
		::UnityEngine::Transform* DragAnchorTransform; // 0x90
		::System::Single DefaultFixFrequency; // 0x98
		::System::Int32 FrequencyCount; // 0x9C
		::UnityEngine::AnimationCurve* FixedDampingCurve; // 0xA0
		::System::Single FixedDampingDuration; // 0xA8
		::System::Byte _padding4[0x4];
		::UnityEngine::TargetJoint2D* BELJOGHEJMB; // 0xB0
		::UnityEngine::FixedJoint2D* LEMDDJGBMKP; // 0xB8
		::UnityEngine::Vector2 LFPIDNMNEAL; // 0xC0
		::UnityEngine::Vector3 NPGLCEHBMHN; // 0xC8
		::System::Single BHHMOCBFHNG; // 0xD4
		::UnityEngine::Coroutine* DDCNMKPGHCF; // 0xD8
		::UnityEngine::TargetJoint2D* EOOHLGECIEP; // 0xE0
		::System::String* ClickAudioEventName; // 0xE8
		::System::String* DragStartAudioEventName; // 0xF0
		::System::String* DragEndAudioEventName; // 0xF8
		::System::String* DragProcessAudioRTPCName; // 0x100
		::System::UInt32 CGALOFHBCKA; // 0x108
		::System::Boolean Interactable; // 0x10C
		::System::Byte _padding5[0x3];
		::DG::Tweening::Tweener* AFFLFMEJEPG; // 0x110
		::UnityEngine::Rigidbody2D* PMBOGIPHJHB; // 0x118
		::System::Collections::Generic::List_1<::MoleMole::UIRigidbody*>* CFFCFCLEPJP; // 0x120
		::Il2CppArray<::UnityEngine::Vector3>* MLBJNGDKAPN; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Draging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GET_DRAGING_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Boolean TryTriggerClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_TRYTRIGGERCLICK_OFFSET))(this);
		}

		::System::Void AddForce(::UnityEngine::Vector2 NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ADDFORCE_OFFSET))(this, NPPMJEIPMFC);
		}

		::System::Single GetMass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GETMASS_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void SetDragAnchor(::UnityEngine::Vector2 AEFBPLEGCJJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_SETDRAGANCHOR_OFFSET))(this, AEFBPLEGCJJ);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONPOINTERUP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void BeginDragLogic(::UnityEngine::Vector3 AKAGDEFAGJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_BEGINDRAGLOGIC_OFFSET))(this, AKAGDEFAGJA);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::UnityEngine::Vector3 DragLogic(::UnityEngine::Vector3 LFLJMBPFLDI)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DRAGLOGIC_OFFSET))(this, LFLJMBPFLDI);
		}

		::System::Void EndDragLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ENDDRAGLOGIC_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean CAICAGDDIMN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONAPPLICATIONFOCUS_OFFSET))(this, CAICAGDDIMN);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void DisableMusic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DISABLEMUSIC_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetAngle(::System::Single ELHMOANKHFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_RESETANGLE_OFFSET))(this, ELHMOANKHFM);
		}

		::System::Single LHMILCHBJAN(::UnityEngine::Vector3 BAECLPHLLHO)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_LHMILCHBJAN_OFFSET))(this, BAECLPHLLHO);
		}

		::System::Collections::IEnumerator* CLPPAGHDCNB()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLPPAGHDCNB_OFFSET))(this);
		}

		::System::Void EMNNLHKGKMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_EMNNLHKGKMG_OFFSET))(this);
		}

		::UnityEngine::Vector3 KLEPFIPGHIJ(::UnityEngine::Vector3 BAECLPHLLHO, ::System::Boolean NJBBIIOALMJ)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_KLEPFIPGHIJ_OFFSET))(this, BAECLPHLLHO, NJBBIIOALMJ);
		}

		::System::Void INGFNBAFJMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_INGFNBAFJMH_OFFSET))(this);
		}

		::System::Single BGMFOMGMNHE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_BGMFOMGMNHE_OFFSET))(this);
		}

		::System::Boolean MIOLKIOBHOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_MIOLKIOBHOE_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_ILHIIDBCNEC_OFFSET))(this);
		}

		::UnityEngine::TargetJoint2D* AACMLLOJCJH()
		{
			return ((::UnityEngine::TargetJoint2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_AACMLLOJCJH_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* CDGBOJGGNEJ()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CDGBOJGGNEJ_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void KBOIDHMAHKK(::System::Single FOIKIGDJLKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_KBOIDHMAHKK_OFFSET))(this, FOIKIGDJLKN);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void APGOGAJMBIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_APGOGAJMBIJ_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IMKOLDMOMAI(::System::Single KMKBJKOEBMF)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_IMKOLDMOMAI_OFFSET))(this, KMKBJKOEBMF);
		}
	};
}
