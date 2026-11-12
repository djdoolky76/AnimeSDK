#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_GCDMNIGJLFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBE00)
#define JCDJJEDDIMP_GCDMNIGJLFB_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BE350)
#define JCDJJEDDIMP_GCDMNIGJLFB_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BE590)
#define JCDJJEDDIMP_GCDMNIGJLFB_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BE540)

inline static constexpr unsigned int JCDJJEDDIMP_GCDMNIGJLFB_TypeDefinitionIndex = 66128;

	class JCDJJEDDIMP_GCDMNIGJLFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GCDMNIGJLFB_ONEVENT_OFFSET))(this, a1);
		}

	};
