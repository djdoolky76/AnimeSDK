#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class BoxCollider; }

#define MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x135B3230)
#define MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x135B3580)
#define MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x135B3920)
#define MOLEMOLE_MONOBOXCOLLIDER_HJAMMCMDOIN_OFFSET UNITYSDK_OFFSET(0x135B3C80)
#define MOLEMOLE_MONOBOXCOLLIDER_JLIKKGIONDO_OFFSET UNITYSDK_OFFSET(0x135B3BF0)
#define MOLEMOLE_MONOBOXCOLLIDER_KGNCJGKMBBN_OFFSET UNITYSDK_OFFSET(0x135B36C0)
#define MOLEMOLE_MONOBOXCOLLIDER_OAINLNDJEOH_OFFSET UNITYSDK_OFFSET(0x135B3B60)
#define MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x135B3500)
#define MOLEMOLE_MONOBOXCOLLIDER_PKJHDIJLBNE_OFFSET UNITYSDK_OFFSET(0x135B35E0)
#define MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x135B3B00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBoxCollider_TypeDefinitionIndex = 91294;

	class MonoBoxCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::BoxCollider* HFEKLDFFOOP; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PKJHDIJLBNE(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_PKJHDIJLBNE_OFFSET))(this, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean KBJJDPHGEDI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_DRAWLINE_OFFSET))(this, KBJJDPHGEDI);
		}

		::System::Void OAINLNDJEOH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_OAINLNDJEOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void JLIKKGIONDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_JLIKKGIONDO_OFFSET))(this);
		}

		::System::Void HJAMMCMDOIN(::MoleMole::Config::ConfigTimeDrivenAttackCollider* MIALFKCCCPI, ::UnityEngine::LayerMask KMGKAIDEIBA, ::MoleMole::LayerMaskStatic_LDGDJLOILCG FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_HJAMMCMDOIN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void KGNCJGKMBBN(::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::Single BDEDDEGJFKL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBOXCOLLIDER_KGNCJGKMBBN_OFFSET))(this, JBGLCAFPGHK, KKAMDFNMMJH, BDEDDEGJFKL);
		}
	};
}
