#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_BNADAHPLNLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBDE0)
#define JCDJJEDDIMP_BNADAHPLNLE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BD100)
#define JCDJJEDDIMP_BNADAHPLNLE_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BD320)
#define JCDJJEDDIMP_BNADAHPLNLE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BD2D0)

inline static constexpr unsigned int JCDJJEDDIMP_BNADAHPLNLE_TypeDefinitionIndex = 66123;

	class JCDJJEDDIMP_BNADAHPLNLE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BNADAHPLNLE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BNADAHPLNLE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BNADAHPLNLE_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BNADAHPLNLE_ONEVENT_OFFSET))(this, a1);
		}

	};
