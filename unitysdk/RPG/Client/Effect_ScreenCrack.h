#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define RPG_CLIENT_EFFECT_SCREENCRACK_AENBMEGIGLB_OFFSET UNITYSDK_OFFSET(0xCD66500)
#define RPG_CLIENT_EFFECT_SCREENCRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xCD66890)
#define RPG_CLIENT_EFFECT_SCREENCRACK_EFBCIMCABLC_OFFSET UNITYSDK_OFFSET(0xCD66690)
#define RPG_CLIENT_EFFECT_SCREENCRACK_FANKOLBNJDE_OFFSET UNITYSDK_OFFSET(0xCD65E80)
#define RPG_CLIENT_EFFECT_SCREENCRACK_JNEBFJDGHMD_OFFSET UNITYSDK_OFFSET(0xCD66350)
#define RPG_CLIENT_EFFECT_SCREENCRACK_OICHBKFOPKO_OFFSET UNITYSDK_OFFSET(0xCD66560)
#define RPG_CLIENT_EFFECT_SCREENCRACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD662C0)
#define RPG_CLIENT_EFFECT_SCREENCRACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD66100)
#define RPG_CLIENT_EFFECT_SCREENCRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD65E20)

namespace RPG::Client
{
	class Effect_ScreenCrack : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* MatTexMapping; // 0x18
		::System::Boolean IsFrameCapture; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 IGJIBAIEPCK; // 0x24
		::System::Boolean OJGMDHEHCMM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void FANKOLBNJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_FANKOLBNJDE_OFFSET))(this);
		}

		::System::Boolean OICHBKFOPKO(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_OICHBKFOPKO_OFFSET))(this, a1, a2);
		}

		::System::Void AENBMEGIGLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_AENBMEGIGLB_OFFSET))(this);
		}

		::System::Void EFBCIMCABLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_EFBCIMCABLC_OFFSET))(this);
		}

		::System::Void JNEBFJDGHMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SCREENCRACK_JNEBFJDGHMD_OFFSET))(this);
		}

	};
}
