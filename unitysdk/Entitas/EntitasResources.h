#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ENTITAS_ENTITASRESOURCES_GETVERSION_OFFSET UNITYSDK_OFFSET(0x16759B30)

namespace Entitas
{
	class EntitasResources : public ::System::Object
	{
	public:
		static ::System::String* GetVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ENTITAS_ENTITASRESOURCES_GETVERSION_OFFSET))();
		}

	};
}
