#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_OOGLEEHGJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1693D240)
#define JCDJJEDDIMP_OOGLEEHGJJN_JFHBMMIBBNF_OFFSET UNITYSDK_OFFSET(0x1693CF20)
#define JCDJJEDDIMP_OOGLEEHGJJN_ONENTER_OFFSET UNITYSDK_OFFSET(0x1693CD00)
#define JCDJJEDDIMP_OOGLEEHGJJN_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1693D190)
#define JCDJJEDDIMP_OOGLEEHGJJN_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1693D140)

inline static constexpr unsigned int JCDJJEDDIMP_OOGLEEHGJJN_TypeDefinitionIndex = 66136;

	class JCDJJEDDIMP_OOGLEEHGJJN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_OOGLEEHGJJN_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_OOGLEEHGJJN_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_OOGLEEHGJJN_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_OOGLEEHGJJN_ONEVENT_OFFSET))(this, a1);
		}

		::System::Void JFHBMMIBBNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_OOGLEEHGJJN_JFHBMMIBBNF_OFFSET))(this);
		}

	};
