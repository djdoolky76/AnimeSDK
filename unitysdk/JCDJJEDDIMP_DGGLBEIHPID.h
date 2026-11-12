#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_DGGLBEIHPID_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBE20)
#define JCDJJEDDIMP_DGGLBEIHPID_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BDC90)
#define JCDJJEDDIMP_DGGLBEIHPID_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BE250)
#define JCDJJEDDIMP_DGGLBEIHPID_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BE200)

inline static constexpr unsigned int JCDJJEDDIMP_DGGLBEIHPID_TypeDefinitionIndex = 66134;

	class JCDJJEDDIMP_DGGLBEIHPID : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DGGLBEIHPID_ONEVENT_OFFSET))(this, a1);
		}

	};
