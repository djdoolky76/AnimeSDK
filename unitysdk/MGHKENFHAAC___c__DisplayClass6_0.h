#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGHKENFHAAC;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define MGHKENFHAAC___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB91EF80)
#define MGHKENFHAAC___C__DISPLAYCLASS6_0__REPLACETEXTURE_B__0_OFFSET UNITYSDK_OFFSET(0xB91FC20)

	class MGHKENFHAAC___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* textureKey; // 0x10
		::System::String* texturePath; // 0x18
		::System::String* nodeName; // 0x20
		::MGHKENFHAAC* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _ReplaceTexture_b__0(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MGHKENFHAAC___C__DISPLAYCLASS6_0__REPLACETEXTURE_B__0_OFFSET))(this, a1);
		}

	};
