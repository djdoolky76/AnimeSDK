#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;

#define JCDJJEDDIMP_HDGMOBABNJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B6F50)
#define JCDJJEDDIMP_HDGMOBABNJB_ONENTER_OFFSET UNITYSDK_OFFSET(0xB8BED90)
#define JCDJJEDDIMP_HDGMOBABNJB_ONEVENT_OFFSET UNITYSDK_OFFSET(0xB8BEE30)
#define JCDJJEDDIMP_HDGMOBABNJB_ONEXIT_OFFSET UNITYSDK_OFFSET(0xB8BEDE0)

inline static constexpr unsigned int JCDJJEDDIMP_HDGMOBABNJB_TypeDefinitionIndex = 66122;

	class JCDJJEDDIMP_HDGMOBABNJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HDGMOBABNJB_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HDGMOBABNJB_ONENTER_OFFSET))(this, a1);
		}

		::System::Void OnExit(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HDGMOBABNJB_ONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnEvent(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HDGMOBABNJB_ONEVENT_OFFSET))(this, a1);
		}

	};
