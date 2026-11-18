#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define MOLEMOLE_MONOCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x135B3E00)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x135B41B0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x135B4220)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_HJAMMCMDOIN_OFFSET UNITYSDK_OFFSET(0x135B4DA0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x135B4C90)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_JLIKKGIONDO_OFFSET UNITYSDK_OFFSET(0x135B6180)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_JOKEFHNMAKM_OFFSET UNITYSDK_OFFSET(0x135B4960)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_KGNCJGKMBBN_OFFSET UNITYSDK_OFFSET(0x135B48A0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_LNGKHBFBHGC_OFFSET UNITYSDK_OFFSET(0x135B3E50)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_NNKFAHAJODD_OFFSET UNITYSDK_OFFSET(0x135B4DB0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_OAINLNDJEOH_OFFSET UNITYSDK_OFFSET(0x135B60F0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x135B4120)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_PKJHDIJLBNE_OFFSET UNITYSDK_OFFSET(0x135B47B0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x135B4D90)
#define MOLEMOLE_MONOCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x135B4D30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCylinderCollider_TypeDefinitionIndex = 86785;

	class MonoCylinderCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		static ::System::Int32* StaticGet_COIFELLLJEC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCylinderCollider_TypeDefinitionIndex)->GetStaticField(0x131D0);
		}
		::UnityEngine::MeshCollider* KHODBJHLHIO; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean KBJJDPHGEDI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_DRAWLINE_OFFSET))(this, KBJJDPHGEDI);
		}

		::System::Void PKJHDIJLBNE(::MoleMole::Config::ConfigTimeDrivenAttackCollider* DFMKILICPFB, ::UnityEngine::LayerMask FBNGKPGLADH, ::MoleMole::LayerMaskStatic_LDGDJLOILCG BBFAJBKOAOB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_PKJHDIJLBNE_OFFSET))(this, DFMKILICPFB, FBNGKPGLADH, BBFAJBKOAOB);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void InitCollider(::UnityEngine::LayerMask LBPIPEAKPDG, ::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 AICBKFLPPJF, ::System::Int32 LDPDCHBHEJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_INITCOLLIDER_OFFSET))(this, LBPIPEAKPDG, NCCDJLDKFGA, KKAMDFNMMJH, AICBKFLPPJF, LDPDCHBHEJA);
		}

		::System::Void HJAMMCMDOIN(::MoleMole::Config::ConfigTimeDrivenAttackCollider* MIALFKCCCPI, ::UnityEngine::LayerMask KMGKAIDEIBA, ::MoleMole::LayerMaskStatic_LDGDJLOILCG FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_HJAMMCMDOIN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void LNGKHBFBHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_LNGKHBFBHGC_OFFSET))(this);
		}

		::System::Void KGNCJGKMBBN(::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 AICBKFLPPJF, ::System::Int32 LDPDCHBHEJA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_KGNCJGKMBBN_OFFSET))(this, NCCDJLDKFGA, KKAMDFNMMJH, AICBKFLPPJF, LDPDCHBHEJA);
		}

		::UnityEngine::Mesh* NNKFAHAJODD(::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::System::Int32 AICBKFLPPJF, ::System::Int32 LDPDCHBHEJA)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_NNKFAHAJODD_OFFSET))(this, NCCDJLDKFGA, KKAMDFNMMJH, AICBKFLPPJF, LDPDCHBHEJA);
		}

		::System::Void JOKEFHNMAKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_JOKEFHNMAKM_OFFSET))(this);
		}

		::System::Void OAINLNDJEOH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_OAINLNDJEOH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void JLIKKGIONDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_JLIKKGIONDO_OFFSET))(this);
		}
	};
}
