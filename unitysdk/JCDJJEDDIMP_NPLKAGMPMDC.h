#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_NPLKAGMPMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1693CCF0)
#define JCDJJEDDIMP_NPLKAGMPMDC_ONENTER_OFFSET UNITYSDK_OFFSET(0x1693C160)
#define JCDJJEDDIMP_NPLKAGMPMDC_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1693CB50)
#define JCDJJEDDIMP_NPLKAGMPMDC_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1693CB00)

inline static constexpr unsigned int JCDJJEDDIMP_NPLKAGMPMDC_TypeDefinitionIndex = 66124;

	class JCDJJEDDIMP_NPLKAGMPMDC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_NPLKAGMPMDC_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_NPLKAGMPMDC_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_NPLKAGMPMDC_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_NPLKAGMPMDC_ONEVENT_OFFSET))(this, a1);
		}

	};
