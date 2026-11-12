#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_KKOPJDDGLKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BF930)
#define JCDJJEDDIMP_KKOPJDDGLKJ_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BF340)
#define JCDJJEDDIMP_KKOPJDDGLKJ_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BF8E0)
#define JCDJJEDDIMP_KKOPJDDGLKJ_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BF890)

inline static constexpr unsigned int JCDJJEDDIMP_KKOPJDDGLKJ_TypeDefinitionIndex = 66130;

	class JCDJJEDDIMP_KKOPJDDGLKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KKOPJDDGLKJ_ONEVENT_OFFSET))(this, a1);
		}

	};
