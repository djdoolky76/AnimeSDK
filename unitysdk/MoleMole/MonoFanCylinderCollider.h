#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B5B9B0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x12B5BD60)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x12B5BDD0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_HJAMMCMDOIN_OFFSET UNITYSDK_OFFSET(0x12B5C9E0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x12B5C840)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_JLIKKGIONDO_OFFSET UNITYSDK_OFFSET(0x12B5DD30)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_JOKEFHNMAKM_OFFSET UNITYSDK_OFFSET(0x12B5C510)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_KGNCJGKMBBN_OFFSET UNITYSDK_OFFSET(0x12B5C450)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_LNGKHBFBHGC_OFFSET UNITYSDK_OFFSET(0x12B5BA00)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_NNKFAHAJODD_OFFSET UNITYSDK_OFFSET(0x12B5C9F0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_OAINLNDJEOH_OFFSET UNITYSDK_OFFSET(0x12B5C950)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B5BCD0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_PKJHDIJLBNE_OFFSET UNITYSDK_OFFSET(0x12B5C360)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B5C940)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B5C8E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFanCylinderCollider_TypeDefinitionIndex = 73569;

	class MonoFanCylinderCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		static ::System::Int32* StaticGet_COIFELLLJEC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFanCylinderCollider_TypeDefinitionIndex)->GetStaticField(0x122D0);
		}
		::UnityEngine::MeshCollider* KHODBJHLHIO; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean KBJJDPHGEDI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET))(this, KBJJDPHGEDI);
		}

		::System::Void PKJHDIJLBNE(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_PKJHDIJLBNE_OFFSET))(this, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void InitCollider(::UnityEngine::LayerMask LBPIPEAKPDG, ::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 AICBKFLPPJF, ::System::Int32 LDPDCHBHEJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET))(this, LBPIPEAKPDG, NCCDJLDKFGA, KKAMDFNMMJH, AICBKFLPPJF, LDPDCHBHEJA);
		}

		::System::Void OAINLNDJEOH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_OAINLNDJEOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void LNGKHBFBHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_LNGKHBFBHGC_OFFSET))(this);
		}

		::System::Void HJAMMCMDOIN(::MoleMole::Config::ConfigTimeDrivenAttackCollider* MIALFKCCCPI, ::UnityEngine::LayerMask KMGKAIDEIBA, ::MoleMole::LayerMaskStatic_LDGDJLOILCG FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_HJAMMCMDOIN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void JOKEFHNMAKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_JOKEFHNMAKM_OFFSET))(this);
		}

		::System::Void KGNCJGKMBBN(::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 AICBKFLPPJF, ::System::Int32 LDPDCHBHEJA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_KGNCJGKMBBN_OFFSET))(this, NCCDJLDKFGA, KKAMDFNMMJH, AICBKFLPPJF, LDPDCHBHEJA);
		}

		::UnityEngine::Mesh* NNKFAHAJODD(::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 AICBKFLPPJF, ::System::Int32 LDPDCHBHEJA)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_NNKFAHAJODD_OFFSET))(this, NCCDJLDKFGA, KKAMDFNMMJH, AICBKFLPPJF, LDPDCHBHEJA);
		}

		::System::Void JLIKKGIONDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_JLIKKGIONDO_OFFSET))(this);
		}
	};
}
