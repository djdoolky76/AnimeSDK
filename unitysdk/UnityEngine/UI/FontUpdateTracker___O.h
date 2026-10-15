#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class Font; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontUpdateTracker___O_TypeDefinitionIndex = 6716;

	class FontUpdateTracker___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___RebuildForFont()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.UI", "<>O")->GetStaticField(0x333D0);
		}

	};
}
