#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/IRIClusterBuilder/IRIMeshClusterItem.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEMRUNTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1652D120)

namespace IRIClusterBuilder
{
	class IRIMeshClusterItemRuntime : public ::IRIClusterBuilder::IRIMeshClusterItem
	{
	public:
		::IRI2::ClusterMeshLodInfo Mesh; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEMRUNTIME_CTOR_OFFSET))(this);
		}

	};
}
