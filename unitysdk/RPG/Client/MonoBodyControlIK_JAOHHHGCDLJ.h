#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_CLEHGIMCPCP_OFFSET UNITYSDK_OFFSET(0xE1C5900)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_COIPPJBHKHJ_OFFSET UNITYSDK_OFFSET(0xE1C5830)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C6290)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_JNPLKDGJJMC_OFFSET UNITYSDK_OFFSET(0xE1C5D70)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE1C57A0)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE1C6180)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyControlIK_JAOHHHGCDLJ_TypeDefinitionIndex = 70481;

	class MonoBodyControlIK_JAOHHHGCDLJ : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* JGHAOCCGGPD; // 0x10
		::System::Single MINCCILIJNN; // 0x18
		::System::Single GAFENHHEBPG; // 0x1C
		::UnityEngine::Vector3 COBDKOEFAOC; // 0x20
		::System::Single IEHPFADHJFD; // 0x2C
		::UnityEngine::Quaternion HCNDNPHHMCO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 COIPPJBHKHJ(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_COIPPJBHKHJ_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion CLEHGIMCPCP(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_CLEHGIMCPCP_OFFSET))(this, a1);
		}

		::System::Void JNPLKDGJJMC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_JNPLKDGJJMC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
}
