#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0xDC66310)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDC65F80)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_EEFBKDNCPBD_OFFSET UNITYSDK_OFFSET(0xDC66000)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xDC65FF0)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0xDC664E0)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_KLBLNHJIBHM_OFFSET UNITYSDK_OFFSET(0xDC66060)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_PJNFGPPINAI_OFFSET UNITYSDK_OFFSET(0xDC66190)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW__DITHEROUT_B__10_0_OFFSET UNITYSDK_OFFSET(0xDC665B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNpcModelView_TypeDefinitionIndex = 78335;

	class ChimeraDuelNpcModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* _Animator; // 0x18
		::RPG::Client::BaseShaderPropertyTransition* _DitherCtrl; // 0x20
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* _VfxPlayer; // 0x28
		::UnityEngine::Transform* TalkAnchor; // 0x30
		::UnityEngine::Transform* LookAtTarget; // 0x38
		::UnityEngine::AnimationClip* TurnClip; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void EEFBKDNCPBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_EEFBKDNCPBD_OFFSET))(this, a1);
		}

		::System::Void KLBLNHJIBHM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_KLBLNHJIBHM_OFFSET))(this, a1);
		}

		::System::Void PJNFGPPINAI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_PJNFGPPINAI_OFFSET))(this, a1);
		}

		::System::Void BGEBEKMJIPD(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_BGEBEKMJIPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IIOIBAAMBHL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_IIOIBAAMBHL_OFFSET))(this, a1);
		}

		::System::Void _DitherOut_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW__DITHEROUT_B__10_0_OFFSET))(this);
		}

	};
}
