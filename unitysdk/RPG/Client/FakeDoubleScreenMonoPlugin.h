#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FAKEDOUBLESCREENMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCE62800)
#define RPG_CLIENT_FAKEDOUBLESCREENMONOPLUGIN_FORCEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xCE62720)
#define RPG_CLIENT_FAKEDOUBLESCREENMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCE627B0)

namespace RPG::Client
{
	class FakeDoubleScreenMonoPlugin
	{
	public:
		::UnityEngine::Camera* PreviewCamera; // 0x30
		::UnityEngine::GameObject* Target; // 0x38
		::UnityEngine::Vector3 bias; // 0x40
		::UnityEngine::Vector2 ScreenBias; // 0x4C
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* VirtualCam1; // 0x58
		::System::Int32 Stencil; // 0x60
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* Target2; // 0x68
		::UnityEngine::Vector3 bias2; // 0x70
		::UnityEngine::Vector2 ScreenBias2; // 0x7C
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* VirtualCam2; // 0x88
		::System::Int32 Stencil2; // 0x90
		::System::Single FOV; // 0x94
		::UnityEngine::Vector2 ShakeScreen; // 0x98
		::Cinemachine::CinemachineVirtualCamera* CinemachineVCam; // 0xA0
		::UnityEngine::Renderer* BackGround; // 0xA8
		::System::Single SplitRange; // 0xB0
		::System::Boolean UseAutoBackMove; // 0xB4
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector4 BackgroundBias; // 0xB8
		::System::Single Darken; // 0xC8
		::System::Boolean DarkenLeft; // 0xCC
		::System::Boolean DarkenRight; // 0xCD
		::System::Byte _padding4[0x2];
		::System::Single SplitSlope; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FAKEDOUBLESCREENMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void ForceOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FAKEDOUBLESCREENMONOPLUGIN_FORCEOVERRIDE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FAKEDOUBLESCREENMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
