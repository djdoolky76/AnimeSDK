#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_TEXTUREREPLACEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE226AF0)

namespace RPG::Client
{
	class TextureReplaceItem : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* Tex2D; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTUREREPLACEITEM_CTOR_OFFSET))(this);
		}

	};
}
