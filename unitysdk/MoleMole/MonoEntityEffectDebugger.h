#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMIOIJEMKDM.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_MONOENTITYEFFECTDEBUGGER_CIFJJBGEOKP_OFFSET UNITYSDK_OFFSET(0x146901F0)
#define MOLEMOLE_MONOENTITYEFFECTDEBUGGER_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x1468FF90)
#define MOLEMOLE_MONOENTITYEFFECTDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x14690170)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityEffectDebugger_TypeDefinitionIndex = 41904;

	class MonoEntityEffectDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single MNGLMFFLDAJ; // 0x0
		::MoleMole::Battle::Entity* entity; // 0x18
		::System::String* _effectName; // 0x20
		::System::String* _attachPointName; // 0x28
		::System::Single _deltaTime; // 0x30
		::UnityEngine::Vector3 posOffset; // 0x34
		::NMIOIJEMKDM posRelativeOption; // 0x40
		::UnityEngine::Vector3 angleOffset; // 0x44
		::NMIOIJEMKDM angleRelativeOption; // 0x50
		::System::Boolean showCords; // 0x54
		::System::Boolean showAngleCords; // 0x55
		::System::Byte _padding0[0x2];
		::UnityEngine::Color NLCPAHGKIJH; // 0x58
		::UnityEngine::Color JGFMONPCNPB; // 0x68
		::UnityEngine::Color FODANMNDEFO; // 0x78
		::System::Boolean FOBHALIGGIK; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYEFFECTDEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void PlayEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYEFFECTDEBUGGER_PLAYEFFECT_OFFSET))(this);
		}

		::System::Void CIFJJBGEOKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYEFFECTDEBUGGER_CIFJJBGEOKP_OFFSET))(this);
		}
	};
}
