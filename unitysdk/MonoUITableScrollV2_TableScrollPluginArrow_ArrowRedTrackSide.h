#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINARROW_ARROWREDTRACKSIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C458F0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginArrow_ArrowRedTrackSide_TypeDefinitionIndex = 40053;

class MonoUITableScrollV2_TableScrollPluginArrow_ArrowRedTrackSide : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::IBENDELLLAO*>* BoundNodes; // 0x10
	::System::Collections::Generic::HashSet_1<::IBENDELLLAO*>* DesiredNodes; // 0x18
	::IBENDELLLAO* ArrowNode; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINARROW_ARROWREDTRACKSIDE__CTOR_OFFSET))(this);
	}
};
