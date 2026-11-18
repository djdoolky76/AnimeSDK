#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8C640)
#define FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS6_0__LOAD_B__0_OFFSET UNITYSDK_OFFSET(0x18A8C650)

namespace Foundation
{
	inline static constexpr unsigned int TextAssetLoader___c__DisplayClass6_0_TypeDefinitionIndex = 8457;

	class TextAssetLoader___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Il2CppArray<::System::Byte>*>* complete; // 0x10
		::System::String* filename; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _Load_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTASSETLOADER___C__DISPLAYCLASS6_0__LOAD_B__0_OFFSET))(this, asset, requestHandle);
		}
	};
}
