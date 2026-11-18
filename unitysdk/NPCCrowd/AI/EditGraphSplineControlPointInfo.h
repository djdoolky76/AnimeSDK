#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_EDITGRAPHSPLINECONTROLPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xEE721F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EditGraphSplineControlPointInfo_TypeDefinitionIndex = 74873;

	class EditGraphSplineControlPointInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_EDITGRAPHSPLINECONTROLPOINTINFO__CTOR_OFFSET))(this);
		}
	};
}
