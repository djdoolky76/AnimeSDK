#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class SphereCollider; }

#define MOLEMOLE_MONOSPHERECOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x135BFA20)
#define MOLEMOLE_MONOSPHERECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x135BFD70)
#define MOLEMOLE_MONOSPHERECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x135BFDD0)
#define MOLEMOLE_MONOSPHERECOLLIDER_HJAMMCMDOIN_OFFSET UNITYSDK_OFFSET(0x135C0130)
#define MOLEMOLE_MONOSPHERECOLLIDER_JLIKKGIONDO_OFFSET UNITYSDK_OFFSET(0x135C0140)
#define MOLEMOLE_MONOSPHERECOLLIDER_KGNCJGKMBBN_OFFSET UNITYSDK_OFFSET(0x135BFF30)
#define MOLEMOLE_MONOSPHERECOLLIDER_OAINLNDJEOH_OFFSET UNITYSDK_OFFSET(0x135C01D0)
#define MOLEMOLE_MONOSPHERECOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x135BFCF0)
#define MOLEMOLE_MONOSPHERECOLLIDER_PKJHDIJLBNE_OFFSET UNITYSDK_OFFSET(0x135BFE60)
#define MOLEMOLE_MONOSPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x135C00D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSphereCollider_TypeDefinitionIndex = 86211;

	class MonoSphereCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		::UnityEngine::SphereCollider* DOOHLLGEEPA; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean KBJJDPHGEDI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_DRAWLINE_OFFSET))(this, KBJJDPHGEDI);
		}

		::System::Void PKJHDIJLBNE(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_PKJHDIJLBNE_OFFSET))(this, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void HJAMMCMDOIN(::MoleMole::Config::ConfigTimeDrivenAttackCollider* MIALFKCCCPI, ::UnityEngine::LayerMask KMGKAIDEIBA, ::MoleMole::LayerMaskStatic_LDGDJLOILCG FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_HJAMMCMDOIN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void JLIKKGIONDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_JLIKKGIONDO_OFFSET))(this);
		}

		::System::Void OAINLNDJEOH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_OAINLNDJEOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KGNCJGKMBBN(::System::Single NCCDJLDKFGA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPHERECOLLIDER_KGNCJGKMBBN_OFFSET))(this, NCCDJLDKFGA);
		}
	};
}
