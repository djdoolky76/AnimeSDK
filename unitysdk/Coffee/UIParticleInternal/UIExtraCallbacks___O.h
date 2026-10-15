#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Canvas_WillRenderCanvases; }

namespace Coffee::UIParticleInternal
{
	class UIExtraCallbacks___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet__0___OnAfterCanvasRebuild()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)UnitySDK::FromName("Coffee.UIParticleInternal", "<>O")->GetStaticField(0x1110);
		}

	};
}
