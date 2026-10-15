#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_UI3DCANVASFITTER_AACCNFIIOKG_OFFSET UNITYSDK_OFFSET(0xE353CA0)
#define RPG_CLIENT_UI3DCANVASFITTER_BFFNKDLBHHK_OFFSET UNITYSDK_OFFSET(0xE3541D0)
#define RPG_CLIENT_UI3DCANVASFITTER_CNFBLNNNLHJ_OFFSET UNITYSDK_OFFSET(0xE354820)
#define RPG_CLIENT_UI3DCANVASFITTER_COOGLDNKAIO_OFFSET UNITYSDK_OFFSET(0xE353D50)
#define RPG_CLIENT_UI3DCANVASFITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE354880)
#define RPG_CLIENT_UI3DCANVASFITTER_DAHKNKALNLB_OFFSET UNITYSDK_OFFSET(0xE353510)
#define RPG_CLIENT_UI3DCANVASFITTER_EOMDKJCDAGD_OFFSET UNITYSDK_OFFSET(0xE353A20)
#define RPG_CLIENT_UI3DCANVASFITTER_IBBMLNMMPIM_OFFSET UNITYSDK_OFFSET(0xE354430)
#define RPG_CLIENT_UI3DCANVASFITTER_KFCOCGHBIOD_OFFSET UNITYSDK_OFFSET(0xE353ED0)
#define RPG_CLIENT_UI3DCANVASFITTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE353990)
#define RPG_CLIENT_UI3DCANVASFITTER_LBCFBOJFOOE_OFFSET UNITYSDK_OFFSET(0xE353F30)
#define RPG_CLIENT_UI3DCANVASFITTER_LPEPFNCAJGE_OFFSET UNITYSDK_OFFSET(0xE353E70)
#define RPG_CLIENT_UI3DCANVASFITTER_OBDOMNEDBNB_OFFSET UNITYSDK_OFFSET(0xE353720)
#define RPG_CLIENT_UI3DCANVASFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE353840)
#define RPG_CLIENT_UI3DCANVASFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3533A0)
#define RPG_CLIENT_UI3DCANVASFITTER_ONHEGLIINBB_OFFSET UNITYSDK_OFFSET(0xE3540C0)
#define RPG_CLIENT_UI3DCANVASFITTER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE353DE0)
#define RPG_CLIENT_UI3DCANVASFITTER_PBOCPEMIFNH_OFFSET UNITYSDK_OFFSET(0xE353670)
#define RPG_CLIENT_UI3DCANVASFITTER___UPDATERUNTIMETARGETCAMERA_B__7_0_OFFSET UNITYSDK_OFFSET(0xE3548A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DCanvasFitter_TypeDefinitionIndex = 69049;

	class UI3DCanvasFitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsTickingToFollowCamera; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Camera* UI3DCamera; // 0x20
		::System::Single DistanceToCamera; // 0x28
		::System::Boolean UseCanvasScaler; // 0x2C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 PCResolution; // 0x30
		::UnityEngine::Vector2 PhoneResolution; // 0x38
		::System::Boolean ScaleZ; // 0x40
		::System::Byte _padding2[0x7];
		::UnityEngine::Camera* OAKJEDJBPIJ; // 0x48
		::System::Boolean JAIEFBBAAFP; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void COOGLDNKAIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_COOGLDNKAIO_OFFSET))(this, a1);
		}

		::System::Void KFCOCGHBIOD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_KFCOCGHBIOD_OFFSET))(this, a1);
		}

		::System::Void LPEPFNCAJGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_LPEPFNCAJGE_OFFSET))(this, a1);
		}

		::System::Void DAHKNKALNLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_DAHKNKALNLB_OFFSET))(this);
		}

		::System::Void EOMDKJCDAGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_EOMDKJCDAGD_OFFSET))(this);
		}

		::System::Void AACCNFIIOKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_AACCNFIIOKG_OFFSET))(this);
		}

		::System::Void PBOCPEMIFNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_PBOCPEMIFNH_OFFSET))(this);
		}

		::System::Void ONHEGLIINBB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONHEGLIINBB_OFFSET))(this, a1, a2);
		}

		::System::Void BFFNKDLBHHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_BFFNKDLBHHK_OFFSET))(this, a1);
		}

		::System::Void IBBMLNMMPIM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_IBBMLNMMPIM_OFFSET))(this, a1, a2);
		}

		::System::Void LBCFBOJFOOE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_LBCFBOJFOOE_OFFSET))(this, a1, a2);
		}

		::System::Void OBDOMNEDBNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_OBDOMNEDBNB_OFFSET))(this);
		}

		::UnityEngine::Vector2 CNFBLNNNLHJ(::System::Boolean a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_CNFBLNNNLHJ_OFFSET))(this, a1);
		}

		::System::Void __UpdateRuntimeTargetCamera_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER___UPDATERUNTIMETARGETCAMERA_B__7_0_OFFSET))(this);
		}

	};
}
