#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_FDGCHLAOCDF_OFFSET UNITYSDK_OFFSET(0x1A70D310)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_HJJMLKLCCOA_OFFSET UNITYSDK_OFFSET(0x1A70D080)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_KNGBPGILEDD_OFFSET UNITYSDK_OFFSET(0x1A70BE00)
#define MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70BD90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorFxAutoLayout_TypeDefinitionIndex = 42487;

	class MonoLevelDoorFxAutoLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single yOffset; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* fx_jinzhitongxiong; // 0x20
		::System::Single fx_jinzhitongxing_width; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* fx_jinzhi; // 0x30
		::System::Single fx_jinzhi_width; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::GameObject* fx_cha; // 0x40
		::System::Single fx_cha_width; // 0x48
		::System::Byte _padding3[0x4];
		::UnityEngine::GameObject* fx_dian; // 0x50
		::UnityEngine::GameObject* fx_screenEffect; // 0x58
		::UnityEngine::GameObject* fx_Light; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void KNGBPGILEDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_KNGBPGILEDD_OFFSET))(this);
		}

		::UnityEngine::GameObject* HJJMLKLCCOA(::UnityEngine::GameObject* JBFHKFGEKJJ, ::UnityEngine::Vector3 GADABMPMNEM)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_HJJMLKLCCOA_OFFSET))(this, JBFHKFGEKJJ, GADABMPMNEM);
		}

		::System::Void FDGCHLAOCDF(::UnityEngine::ParticleSystem* OMLGMJACMAB, ::System::Int32 JHFKDGBCOBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORFXAUTOLAYOUT_FDGCHLAOCDF_OFFSET))(this, OMLGMJACMAB, JHFKDGBCOBA);
		}
	};
}
