#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJILMHOMGP;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AJLKMKLPPBI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC5630)
#define AJLKMKLPPBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC5780)
#define AJLKMKLPPBI_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0x12CC56E0)

inline static constexpr unsigned int AJLKMKLPPBI_TypeDefinitionIndex = 49906;

	class AJLKMKLPPBI : public ::System::Object
	{
	public:
		::System::Action* GBMLHDDJMJM; // 0x10
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x18
		::CBJILMHOMGP* MKKLHFCCCNF; // 0x20
		::RPG::Client::CustomButton_VoidDelegate* MBOEDFCNCJF; // 0x28
		::System::Void _ctor(::RPG::Client::AnimatorButton* a1, ::CBJILMHOMGP* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*, ::CBJILMHOMGP*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + AJLKMKLPPBI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JJJJGFJDKOJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AJLKMKLPPBI_JJJJGFJDKOJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLKMKLPPBI_DISPOSE_OFFSET))(this);
		}

	};
