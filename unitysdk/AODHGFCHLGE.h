#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectAnimatorParameter; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define AODHGFCHLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x158A6950)
#define AODHGFCHLGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158A6980)
#define AODHGFCHLGE_MKDKHHCLGJM_OFFSET UNITYSDK_OFFSET(0x158A6B60)
#define AODHGFCHLGE_OLKILDAGBFM_OFFSET UNITYSDK_OFFSET(0x158A6DE0)
#define AODHGFCHLGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A69C0)
#define AODHGFCHLGE_PEEGABFAFBO_OFFSET UNITYSDK_OFFSET(0x158A7060)

	class AODHGFCHLGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorParameter*))((::PBYTE)hIl2Cpp + AODHGFCHLGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODHGFCHLGE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODHGFCHLGE_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void MKDKHHCLGJM(::UnityEngine::GameObject* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2, ::RPG::GameCore::TaskContext* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::GameCore::SetEffectAnimatorParameter*, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + AODHGFCHLGE_MKDKHHCLGJM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PEEGABFAFBO(::UnityEngine::Animator* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animator*, ::RPG::GameCore::SetEffectAnimatorParameter*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AODHGFCHLGE_PEEGABFAFBO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OLKILDAGBFM(::UnityEngine::Animator* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::RPG::GameCore::SetEffectAnimatorParameter*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AODHGFCHLGE_OLKILDAGBFM_OFFSET))(a1, a2, a3);
		}

	};
