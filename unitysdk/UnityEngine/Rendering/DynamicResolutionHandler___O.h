#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Rendering { class PerformDynamicRes; }

namespace UnityEngine::Rendering
{
	class DynamicResolutionHandler___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::PerformDynamicRes** StaticGet__0___DefaultDynamicResMethod()
		{
			return (::UnityEngine::Rendering::PerformDynamicRes**)UnitySDK::FromName("UnityEngine.Rendering", "<>O")->GetStaticField(0x48850);
		}

	};
}
