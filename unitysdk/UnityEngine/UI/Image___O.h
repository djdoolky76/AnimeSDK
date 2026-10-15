#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine::U2D { class SpriteAtlas; }

namespace UnityEngine::UI
{
	class Image___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___RebuildImage()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.UI", "<>O")->GetStaticField(0x359A0);
		}

	};
}
