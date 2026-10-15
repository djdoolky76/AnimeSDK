#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG { class IAutoReleaseReferenceObject; }
namespace RPG { class ReferencePool_ReferenceCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG
{
	struct alignas(8) ReferencePool_AutoReleaseReferenceObjectDatas
	{
		::System::Collections::Generic::List_1<::RPG::IAutoReleaseReferenceObject*>* AllocList; // 0x10
		::RPG::ReferencePool_ReferenceCollection* Collection; // 0x18
	};
}
