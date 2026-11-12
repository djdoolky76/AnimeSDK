#pragma once
#include "unitysdk/unitysdk.h"

#define JCDJJEDDIMP_BATTLERESULTCLOSEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BD3B0)
#define JCDJJEDDIMP_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB8BC930)
#define JCDJJEDDIMP_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSTAGEHINT_OFFSET UNITYSDK_OFFSET(0xB8BC590)

inline static constexpr unsigned int JCDJJEDDIMP_BattleResultClosedEvent_TypeDefinitionIndex = 66114;

	class JCDJJEDDIMP_BattleResultClosedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BATTLERESULTCLOSEDEVENT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedShowStageHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSTAGEHINT_OFFSET))(this);
		}

		::System::Boolean get_NeedShowSettleResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_BATTLERESULTCLOSEDEVENT_GET_NEEDSHOWSETTLERESULT_OFFSET))(this);
		}

	};
