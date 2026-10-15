#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class EGDGOMKKEJI;
class PNECKGBKMEL;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LPCFIHKFKLM_PIJAKOPCIFE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C743460)
#define LPCFIHKFKLM_PIJAKOPCIFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C743370)
#define LPCFIHKFKLM_PIJAKOPCIFE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7434A0)
#define LPCFIHKFKLM_PIJAKOPCIFE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7429A0)

	class LPCFIHKFKLM_PIJAKOPCIFE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LPCFIHKFKLM_PIJAKOPCIFE_CTOR_OFFSET))(this, a1, a2);
		}

		::PNECKGBKMEL* Invoke(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::PNECKGBKMEL*(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + LPCFIHKFKLM_PIJAKOPCIFE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig* a1, ::EGDGOMKKEJI* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig*, ::EGDGOMKKEJI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LPCFIHKFKLM_PIJAKOPCIFE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::PNECKGBKMEL* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::PNECKGBKMEL*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LPCFIHKFKLM_PIJAKOPCIFE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
