#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowStateEvent;
class JCDJJEDDIMP_ITransitionRule;

#define JCDJJEDDIMP___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BC1C0)
#define JCDJJEDDIMP___C__DISPLAYCLASS54_0___TRIGGERTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0xB8BCA60)

inline static constexpr unsigned int JCDJJEDDIMP___c__DisplayClass54_0_TypeDefinitionIndex = 66142;

	class JCDJJEDDIMP___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::JCDJJEDDIMP_IFlowStateEvent* event; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TriggerTransition_b__0(::JCDJJEDDIMP_ITransitionRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCDJJEDDIMP_ITransitionRule*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP___C__DISPLAYCLASS54_0___TRIGGERTRANSITION_B__0_OFFSET))(this, a1);
		}

	};
