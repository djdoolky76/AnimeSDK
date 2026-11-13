#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_CGGDENNIJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x19A85420)
#define JCDJJEDDIMP_CGGDENNIJHA_ONENTER_OFFSET UNITYSDK_OFFSET(0x19A869E0)
#define JCDJJEDDIMP_CGGDENNIJHA_ONEVENT_OFFSET UNITYSDK_OFFSET(0x19A87030)
#define JCDJJEDDIMP_CGGDENNIJHA_ONEXIT_OFFSET UNITYSDK_OFFSET(0x19A86FE0)

inline static constexpr unsigned int JCDJJEDDIMP_CGGDENNIJHA_TypeDefinitionIndex = 66137;

	class JCDJJEDDIMP_CGGDENNIJHA : public ::System::Object
	{
	public:
		::System::Boolean KGLNODBCBFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CGGDENNIJHA_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CGGDENNIJHA_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CGGDENNIJHA_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CGGDENNIJHA_ONEVENT_OFFSET))(this, a1);
		}

	};
