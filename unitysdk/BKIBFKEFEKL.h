#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJILMHOMGP;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define BKIBFKEFEKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA54910)
#define BKIBFKEFEKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA54A60)
#define BKIBFKEFEKL_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0xBA549C0)

inline static constexpr unsigned int BKIBFKEFEKL_TypeDefinitionIndex = 49906;

	class BKIBFKEFEKL : public ::System::Object
	{
	public:
		::RPG::Client::CustomButton_VoidDelegate* MBOEDFCNCJF; // 0x10
		::System::Action_2<::RPG::Client::AnimatorButton*, ::System::Object*>* GBMLHDDJMJM; // 0x18
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x20
		::CBJILMHOMGP* MKKLHFCCCNF; // 0x28
		::System::Void _ctor(::RPG::Client::AnimatorButton* a1, ::CBJILMHOMGP* a2, ::System::Action_2<::RPG::Client::AnimatorButton*, ::System::Object*>* a3, ::System::Action_2<::RPG::Client::AnimatorButton*, ::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*, ::CBJILMHOMGP*, ::System::Action_2<::RPG::Client::AnimatorButton*, ::System::Object*>*, ::System::Action_2<::RPG::Client::AnimatorButton*, ::System::Object*>*))((::PBYTE)hIl2Cpp + BKIBFKEFEKL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JJJJGFJDKOJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BKIBFKEFEKL_JJJJGFJDKOJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBFKEFEKL_DISPOSE_OFFSET))(this);
		}

	};
