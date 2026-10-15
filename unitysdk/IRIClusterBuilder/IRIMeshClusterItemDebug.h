#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRIClusterBuilder/IRIMeshClusterItem.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEMDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0x1652D090)

namespace IRIClusterBuilder
{
	class IRIMeshClusterItemDebug : public ::IRIClusterBuilder::IRIMeshClusterItem
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* meshClusters; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* boundsList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEMDEBUG_CTOR_OFFSET))(this);
		}

	};
}
