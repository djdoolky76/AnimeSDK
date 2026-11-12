#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_AGOPFOHJNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BBDF0)
#define JCDJJEDDIMP_AGOPFOHJNIJ_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BCB60)
#define JCDJJEDDIMP_AGOPFOHJNIJ_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BCDB0)
#define JCDJJEDDIMP_AGOPFOHJNIJ_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BCD60)

inline static constexpr unsigned int JCDJJEDDIMP_AGOPFOHJNIJ_TypeDefinitionIndex = 66125;

	class JCDJJEDDIMP_AGOPFOHJNIJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ_ONEVENT_OFFSET))(this, a1);
		}

	};
