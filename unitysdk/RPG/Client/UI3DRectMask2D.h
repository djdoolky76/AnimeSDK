#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_UI3DRECTMASK2D_CTOR_OFFSET UNITYSDK_OFFSET(0xE3662B0)
#define RPG_CLIENT_UI3DRECTMASK2D_JHNCMJJMGKK_OFFSET UNITYSDK_OFFSET(0xE365D10)
#define RPG_CLIENT_UI3DRECTMASK2D_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE3654B0)
#define RPG_CLIENT_UI3DRECTMASK2D_LDFIOGPLGDM_OFFSET UNITYSDK_OFFSET(0xE365F40)
#define RPG_CLIENT_UI3DRECTMASK2D_ODINKBMOALD_OFFSET UNITYSDK_OFFSET(0xE3656A0)
#define RPG_CLIENT_UI3DRECTMASK2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE366260)
#define RPG_CLIENT_UI3DRECTMASK2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3661B0)
#define RPG_CLIENT_UI3DRECTMASK2D_START_OFFSET UNITYSDK_OFFSET(0xE366160)
#define RPG_CLIENT_UI3DRECTMASK2D_UPDATE_OFFSET UNITYSDK_OFFSET(0xE366210)

namespace RPG::Client
{
	class UI3DRectMask2D : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 IAIOMAAIGNG; // 0x18
		::System::Int32 PJNJNHOJEJC; // 0x1C
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x28
		::UnityEngine::Camera* GLCKFPKNEIM; // 0x30
		::UnityEngine::Vector4 _AABB; // 0x38
		::UnityEngine::Vector4 _SoftAABB; // 0x48
		::UnityEngine::Vector4 Padding; // 0x58
		::UnityEngine::Vector4 Softness; // 0x68
		::System::Boolean NeedRefreshRenderers; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ODINKBMOALD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_ODINKBMOALD_OFFSET))(this);
		}

		::System::Void JHNCMJJMGKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_JHNCMJJMGKK_OFFSET))(this);
		}

		::System::Void LDFIOGPLGDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_LDFIOGPLGDM_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DRECTMASK2D_ONDISABLE_OFFSET))(this);
		}

	};
}
