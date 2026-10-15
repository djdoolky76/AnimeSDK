#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_KaleidoscopeAnimatorMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xCD3E1A0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD414B0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD3E660)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD414A0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xCD40C80)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD40C00)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xCD3E780)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD3E6A0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD3E0E0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD3E620)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD3E6E0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD3E150)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PKNCLABKIHP_OFFSET UNITYSDK_OFFSET(0xCD40DA0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD3E720)

namespace RPG::Client
{
	class Effect_KaleidoscopeAnimatorBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _Matrices; // 0x38
		::Il2CppArray<::UnityEngine::Vector4>* _Colors; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::System::Int32 _HeightAmount; // 0x50
		::System::Int32 _CircleAmount; // 0x54
		::System::Int32 _ThicknessAmount; // 0x58
		::System::Int32 _TotalAmount; // 0x5C
		static ::System::Int32* StaticGet__InstanceColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_KaleidoscopeAnimatorBehavior")->GetStaticField(0xC420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void APIDHHKLGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_APIDHHKLGEJ_OFFSET))(this);
		}

		::System::Void PKNCLABKIHP(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PKNCLABKIHP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single get_TotalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET_TOTALTIME_OFFSET))(this);
		}

		::RPG::Client::Effect_KaleidoscopeAnimatorMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_KaleidoscopeAnimatorMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
