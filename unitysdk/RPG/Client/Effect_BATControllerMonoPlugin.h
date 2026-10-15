#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD1F630)
#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD1F5E0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_UPDATERENDERERPACKAGES_OFFSET UNITYSDK_OFFSET(0xCD1F2F0)

namespace RPG::Client
{
	class Effect_BATControllerMonoPlugin
	{
	public:
		::Il2CppArray<::System::Object*>* RendererPackages; // 0x30
		::UnityEngine::Texture2D* AnimationTexture; // 0x38
		::System::Int32 FrameIndex; // 0x40
		::System::Int32 NumberOfBones; // 0x44
		::System::Boolean Loop; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 FrameRate; // 0x4C
		::UnityEngine::Vector2Int LoopRange; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void UpdateRendererPackages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_UPDATERENDERERPACKAGES_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
