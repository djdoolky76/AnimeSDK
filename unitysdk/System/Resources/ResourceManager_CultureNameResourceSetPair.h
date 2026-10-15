#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_RESOURCEMANAGER_CULTURENAMERESOURCESETPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B7F70)

namespace System::Resources
{
	class ResourceManager_CultureNameResourceSetPair : public ::System::Object
	{
	public:
		::System::Resources::ResourceSet* lastResourceSet; // 0x10
		::System::String* lastCultureName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_CULTURENAMERESOURCESETPAIR_CTOR_OFFSET))(this);
		}

	};
}
