#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_CLEHGIMCPCP_OFFSET UNITYSDK_OFFSET(0xD728D40)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_COIPPJBHKHJ_OFFSET UNITYSDK_OFFSET(0xD728C70)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD7296E0)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_JNPLKDGJJMC_OFFSET UNITYSDK_OFFSET(0xD7291B0)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD728BE0)
#define RPG_CLIENT_MONOBODYCONTROLIK_JAOHHHGCDLJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xD7295C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyControlIK_JAOHHHGCDLJ_TypeDefinitionIndex = 68533;

	class MonoBodyControlIK_JAOHHHGCDLJ : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* JGHAOCCGGPD; // 0x10
		::UnityEngine::Quaternion HCNDNPHHMCO; // 0x18
		::System::Single IEHPFADHJFD; // 0x28
		::System::Single MINCCILIJNN; // 0x2C
		::System::Single GAFENHHEBPG; // 0x30
		::UnityEngine::Vector3 COBDKOEFAOC; // 0x34
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
