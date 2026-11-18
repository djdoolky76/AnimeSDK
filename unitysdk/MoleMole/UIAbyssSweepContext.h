#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KOIDMLPJGML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIABYSSSWEEPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C102D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssSweepContext_TypeDefinitionIndex = 87699;

	class UIAbyssSweepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* rewardList; // 0x28
		::UnityEngine::Events::UnityAction* closeAction; // 0x30
		::UnityEngine::Events::UnityAction* goGetAction; // 0x38
		::System::String* title; // 0x40
		::UnityEngine::Events::UnityAction* sweepAction; // 0x48
		::System::String* rewardTitle; // 0x50
		::System::String* taskName; // 0x58
		::System::Boolean canSweep; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 itemID; // 0x64
		::System::Int32 itemConsume; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
