#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine::UI { class CustomUIVectot4EqualityComparer; }

#define UNITYENGINE_UI_SETPROPERTYUTILITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F54C970)
#define UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1F5102E0)

namespace UnityEngine::UI
{
	class SetPropertyUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::CustomUIVectot4EqualityComparer** StaticGet_vectot4EqualityComparer()
		{
			return (::UnityEngine::UI::CustomUIVectot4EqualityComparer**)UnitySDK::FromName("UnityEngine.UI", "SetPropertyUtility")->GetStaticField(0x1F8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY_CCTOR_OFFSET))();
		}

		static ::System::Boolean SetColor(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SETPROPERTYUTILITY_SETCOLOR_OFFSET))(a1, a2);
		}

	};
}
