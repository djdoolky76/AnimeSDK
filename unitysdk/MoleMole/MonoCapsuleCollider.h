#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class CapsuleCollider; }

#define MOLEMOLE_MONOCAPSULECOLLIDER_AGMACLCJFDG_OFFSET UNITYSDK_OFFSET(0x180F8D70)
#define MOLEMOLE_MONOCAPSULECOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x180F8610)
#define MOLEMOLE_MONOCAPSULECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x180F8970)
#define MOLEMOLE_MONOCAPSULECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x180F89D0)
#define MOLEMOLE_MONOCAPSULECOLLIDER_HJAMMCMDOIN_OFFSET UNITYSDK_OFFSET(0x180F8E70)
#define MOLEMOLE_MONOCAPSULECOLLIDER_JLIKKGIONDO_OFFSET UNITYSDK_OFFSET(0x180F8F10)
#define MOLEMOLE_MONOCAPSULECOLLIDER_OAINLNDJEOH_OFFSET UNITYSDK_OFFSET(0x180F8E80)
#define MOLEMOLE_MONOCAPSULECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x180F88F0)
#define MOLEMOLE_MONOCAPSULECOLLIDER_PKJHDIJLBNE_OFFSET UNITYSDK_OFFSET(0x180F8BF0)
#define MOLEMOLE_MONOCAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x180F8E10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCapsuleCollider_TypeDefinitionIndex = 68822;

	class MonoCapsuleCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::CapsuleCollider* AKGAGMPANLB; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean KBJJDPHGEDI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_DRAWLINE_OFFSET))(this, KBJJDPHGEDI);
		}

		::System::Void PKJHDIJLBNE(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_PKJHDIJLBNE_OFFSET))(this, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void AGMACLCJFDG(::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_AGMACLCJFDG_OFFSET))(this, NCCDJLDKFGA, KKAMDFNMMJH);
		}

		::System::Void HJAMMCMDOIN(::MoleMole::Config::ConfigTimeDrivenAttackCollider* MIALFKCCCPI, ::UnityEngine::LayerMask KMGKAIDEIBA, ::MoleMole::LayerMaskStatic_LDGDJLOILCG FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_HJAMMCMDOIN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void OAINLNDJEOH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_OAINLNDJEOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void JLIKKGIONDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULECOLLIDER_JLIKKGIONDO_OFFSET))(this);
		}
	};
}
