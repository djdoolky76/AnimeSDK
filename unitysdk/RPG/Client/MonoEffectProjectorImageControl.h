#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class TextureReplaceItem; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPROJECTORIMAGECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD810E60)

namespace RPG::Client
{
	class MonoEffectProjectorImageControl
	{
	public:
		::System::Single SwitchSpeed; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* swithProgress; // 0x38
		::Il2CppArray<::UnityEngine::Texture2D*>* ImageTexture2Ds; // 0x40
		::Il2CppArray<::RPG::Client::TextureReplaceItem*>* MaleTextureReplaceArr; // 0x48
		::UnityEngine::Renderer* ImageRenderer; // 0x50
		::System::Int32 ImageSetNum; // 0x58
		::System::Byte _padding1[0x4];
		::System::String* EvSwitchPage; // 0x60
		::System::Single Progress; // 0x68
		::System::Single Timer; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPROJECTORIMAGECONTROL_CTOR_OFFSET))(this);
		}

	};
}
