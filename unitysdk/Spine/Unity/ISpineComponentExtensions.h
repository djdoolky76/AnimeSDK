#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Spine::Unity { class ISpineComponent; }

#define SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET UNITYSDK_OFFSET(0x1ED07110)

namespace Spine::Unity
{
	class ISpineComponentExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullOrDestroyed(::Spine::Unity::ISpineComponent* a1)
		{
			return ((::System::Boolean(*)(::Spine::Unity::ISpineComponent*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET))(a1);
		}

	};
}
