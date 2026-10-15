#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font; }

inline static constexpr unsigned int MPNCINEOKEJ___O_TypeDefinitionIndex = 72677;

	class MPNCINEOKEJ___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Font*>** StaticGet__0____OnFontTextureRebuilt()
		{
			return (::System::Action_1<::UnityEngine::Font*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x18610);
		}

	};
