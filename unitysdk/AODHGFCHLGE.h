#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectAnimatorParameter; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define AODHGFCHLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A840470)
#define AODHGFCHLGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8404A0)
#define AODHGFCHLGE_MKDKHHCLGJM_OFFSET UNITYSDK_OFFSET(0x1A840680)
#define AODHGFCHLGE_OLKILDAGBFM_OFFSET UNITYSDK_OFFSET(0x1A840900)
#define AODHGFCHLGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8404E0)
#define AODHGFCHLGE_PEEGABFAFBO_OFFSET UNITYSDK_OFFSET(0x1A840B80)

inline static constexpr unsigned int AODHGFCHLGE_TypeDefinitionIndex = 56675;

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
