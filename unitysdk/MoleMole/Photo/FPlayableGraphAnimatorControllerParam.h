#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANPGKEABNNI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

namespace System { class String; }
namespace UnityEngine { class AnimatorControllerParameter; }

#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKBOOL_OFFSET UNITYSDK_OFFSET(0x770820)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKFLOAT_OFFSET UNITYSDK_OFFSET(0x770600)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKINTEGER_OFFSET UNITYSDK_OFFSET(0x770710)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKTRIGGER_OFFSET UNITYSDK_OFFSET(0x770930)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECK_OFFSET UNITYSDK_OFFSET(0x770500)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETBOOL_OFFSET UNITYSDK_OFFSET(0x770900)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x7706E0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x7707F0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x770A10)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_OFFSET UNITYSDK_OFFSET(0x7705E0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x770A80)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x770A40)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15AD1000)
#define MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x7704A0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int FPlayableGraphAnimatorControllerParam_TypeDefinitionIndex = 42407;

	struct alignas(8) FPlayableGraphAnimatorControllerParam
	{
		::System::Int32 _parameterHash; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* parameterName; // 0x18

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_SET_VALUE_OFFSET))(this, value);
		}

		::ANPGKEABNNI Check(::UnityEngine::AnimatorControllerParameter* param, ::UnityEngine::AnimatorControllerParameterType paramType)
		{
			return ((::ANPGKEABNNI(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*, ::UnityEngine::AnimatorControllerParameterType))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECK_OFFSET))(this, param, paramType);
		}

		::UnityEngine::AnimatorControllerParameter* Get(::UnityEngine::Animations::AnimatorControllerPlayable playable, ::UnityEngine::AnimatorControllerParameterType paramType)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable, ::UnityEngine::AnimatorControllerParameterType))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GET_OFFSET))(this, playable, paramType);
		}

		::ANPGKEABNNI CheckFloat(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::ANPGKEABNNI(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKFLOAT_OFFSET))(this, param);
		}

		::UnityEngine::AnimatorControllerParameter* GetFloat(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETFLOAT_OFFSET))(this, playable);
		}

		::ANPGKEABNNI CheckInteger(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::ANPGKEABNNI(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKINTEGER_OFFSET))(this, param);
		}

		::UnityEngine::AnimatorControllerParameter* GetInteger(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETINTEGER_OFFSET))(this, playable);
		}

		::ANPGKEABNNI CheckBool(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::ANPGKEABNNI(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKBOOL_OFFSET))(this, param);
		}

		::UnityEngine::AnimatorControllerParameter* GetBool(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETBOOL_OFFSET))(this, playable);
		}

		::ANPGKEABNNI CheckTrigger(::UnityEngine::AnimatorControllerParameter* param)
		{
			return ((::ANPGKEABNNI(*)(::PVOID, ::UnityEngine::AnimatorControllerParameter*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_CHECKTRIGGER_OFFSET))(this, param);
		}

		::UnityEngine::AnimatorControllerParameter* GetTrigger(::UnityEngine::Animations::AnimatorControllerPlayable playable)
		{
			return ((::UnityEngine::AnimatorControllerParameter*(*)(::PVOID, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_GETTRIGGER_OFFSET))(this, playable);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		/*
		static ::System::Int32 op_Implicit(::MoleMole::Photo::FPlayableGraphAnimatorControllerParam& param)
		{
			return ((::System::Int32(*)(::MoleMole::Photo::FPlayableGraphAnimatorControllerParam&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_FPLAYABLEGRAPHANIMATORCONTROLLERPARAM_OP_IMPLICIT_OFFSET))(param);
		}
		*/
	};
}
