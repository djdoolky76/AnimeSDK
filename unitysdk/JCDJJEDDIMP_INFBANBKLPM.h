#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_INFBANBKLPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBE10)
#define JCDJJEDDIMP_INFBANBKLPM_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BEE80)
#define JCDJJEDDIMP_INFBANBKLPM_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BF220)
#define JCDJJEDDIMP_INFBANBKLPM_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BF1D0)

inline static constexpr unsigned int JCDJJEDDIMP_INFBANBKLPM_TypeDefinitionIndex = 66132;

	class JCDJJEDDIMP_INFBANBKLPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_INFBANBKLPM_ONEVENT_OFFSET))(this, a1);
		}

	};
