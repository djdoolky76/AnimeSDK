#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MFOOJKCBAFI.h"

class AGOFJMFOFLG;
class FJMEEBEBDML;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_EGNKCEAIOCO_OFFSET UNITYSDK_OFFSET(0x17C3BD80)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17C3B220)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_JLKMKMEHMPD_OFFSET UNITYSDK_OFFSET(0x17C3C4C0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_MLKGJKBIFAD_OFFSET UNITYSDK_OFFSET(0x17C3B980)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_OCALBKAFLKG_OFFSET UNITYSDK_OFFSET(0x17C3BEB0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17C3B410)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17C3B4A0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17C3B230)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17C3B3C0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEINANDLOOPANIM_OFFSET UNITYSDK_OFFSET(0x17C3B730)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x17C3BAB0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_POJANJFHPOF_OFFSET UNITYSDK_OFFSET(0x17C3BA30)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_STOPALLANIM_OFFSET UNITYSDK_OFFSET(0x17C3B5F0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_SYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17C3BF40)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3C320)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17C3C400)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17C3C490)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17C3C4A0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17C3C4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTvSelect3DModelController_TypeDefinitionIndex = 45541;

	class UIHollowTvSelect3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::UnityEngine::Camera* IPFOPMDGALH; // 0x368
		::FJMEEBEBDML* ENCAFBFBKEF; // 0x370
		::UnityEngine::AnimationState* LLEELJFLIBD; // 0x378
		::Foundation::Coroutine::CoroutineHandle CLJKIGGMJOO; // 0x380
		::System::Byte _padding0[0x4];
		::UnityEngine::Coroutine* EOGKJHMLABJ; // 0x388
		::System::String* LCLHMIPGJGC; // 0x390
		::System::String* OEIPKOAPMKA; // 0x398
		::AGOFJMFOFLG* _view; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void StopAllAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_STOPALLANIM_OFFSET))(this);
		}

		::System::Void PlayFadeInAndLoopAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEINANDLOOPANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void PlayFadeOutAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void SyncTransform(::MFOOJKCBAFI hudTransform)
		{
			return ((::System::Void(*)(::PVOID, ::MFOOJKCBAFI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_SYNCTRANSFORM_OFFSET))(this, hudTransform);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EGNKCEAIOCO(::System::Single AHAFNGEDPLI, ::System::Action* NPGNIDNMBIF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_EGNKCEAIOCO_OFFSET))(this, AHAFNGEDPLI, NPGNIDNMBIF);
		}

		::System::Void OCALBKAFLKG(::System::Action* NPGNIDNMBIF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_OCALBKAFLKG_OFFSET))(this, NPGNIDNMBIF);
		}

		::System::Boolean JLKMKMEHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_JLKMKMEHMPD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* POJANJFHPOF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_POJANJFHPOF_OFFSET))(this);
		}

		::System::Void MLKGJKBIFAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_MLKGJKBIFAD_OFFSET))(this);
		}
	};
}
