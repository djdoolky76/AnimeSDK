#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentNavigationParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FKDIDBGBGMF.h"
class AGJHAIDADBA;
class MOAAMGJICCD;
class NGLFOJKOKBH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHFEEFFJJJC_APLFKDMICPL_OFFSET UNITYSDK_OFFSET(0xB6AE6F0)
#define LHFEEFFJJJC_BDDPMCBGGLI_OFFSET UNITYSDK_OFFSET(0xB6B0AE0)
#define LHFEEFFJJJC_CLOCFNBJLFE_OFFSET UNITYSDK_OFFSET(0xB6B0AD0)
#define LHFEEFFJJJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AE510)
#define LHFEEFFJJJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6AE5F0)
#define LHFEEFFJJJC_FKKGIAIONOM_OFFSET UNITYSDK_OFFSET(0xB6B0800)
#define LHFEEFFJJJC_FMFIPMDNDOF_OFFSET UNITYSDK_OFFSET(0xB6AEF60)
#define LHFEEFFJJJC_FPHBEPKCANO_OFFSET UNITYSDK_OFFSET(0xB6AEB00)
#define LHFEEFFJJJC_GET_AGENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xB6B0B00)
#define LHFEEFFJJJC_GET_AGENTRADIUS_OFFSET UNITYSDK_OFFSET(0xB6B0AF0)
#define LHFEEFFJJJC_GET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0xB6B0AB0)
#define LHFEEFFJJJC_ILMGEGNIKLC_OFFSET UNITYSDK_OFFSET(0xB6AF300)
#define LHFEEFFJJJC_JDDGOLCOPKG_OFFSET UNITYSDK_OFFSET(0xB6AF440)
#define LHFEEFFJJJC_JGGMBAKHOIC_OFFSET UNITYSDK_OFFSET(0xB6B0B60)
#define LHFEEFFJJJC_KCLKFLBNFIP_OFFSET UNITYSDK_OFFSET(0xB6B0B10)
#define LHFEEFFJJJC_KLEOOGEHDKN_OFFSET UNITYSDK_OFFSET(0xB6AEEA0)
#define LHFEEFFJJJC_LEKNNKAOIKM_OFFSET UNITYSDK_OFFSET(0xB6AEEF0)
#define LHFEEFFJJJC_NOIIDIBKOBK_OFFSET UNITYSDK_OFFSET(0xB6AEB90)
#define LHFEEFFJJJC_OGGCBJKOJIK_OFFSET UNITYSDK_OFFSET(0xB6AF2A0)
#define LHFEEFFJJJC_OOCNHBAAHOK_OFFSET UNITYSDK_OFFSET(0xB6AF0F0)
#define LHFEEFFJJJC_SET_ISPOSTSMOOTH_OFFSET UNITYSDK_OFFSET(0xB6B0AC0)

	class LHFEEFFJJJC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MOAAMGJICCD*>* OINCGJJMAEF; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IMDMBCFBKKE; // 0x18
		::AGJHAIDADBA* DHOBMFLDLAN; // 0x20
		::Il2CppArray<::NGLFOJKOKBH*>* IOFHPGIJANO; // 0x28
		::RPGTools::Octree::Agent::AgentNavigationParams IJIHPGHKLIF; // 0x30
		::System::Single _AgentRadius_k__BackingField; // 0x34
		::System::Boolean _IsPostSmooth_k__BackingField; // 0x38
		::System::Boolean AFLJILDNMHA; // 0x39
		::System::Boolean HHBGOBMFMML; // 0x3A
		::System::Byte _padding0[0x1];
		::System::Int32 ECMGHKJIKNL; // 0x3C
		::UnityEngine::Vector3 GLDEBFOKEMJ; // 0x40
		::UnityEngine::Vector3 DEIMGIGLHLK; // 0x4C
		::UnityEngine::LayerMask _AgentLayerMask_k__BackingField; // 0x58
		::System::Void _ctor(::System::Single a1, ::UnityEngine::LayerMask a2, ::Il2CppArray<::NGLFOJKOKBH*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::LayerMask, ::Il2CppArray<::NGLFOJKOKBH*>*))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_DISPOSE_OFFSET))(this);
		}

		::System::Boolean APLFKDMICPL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPGTools::Octree::Agent::AgentNavigationParams a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPGTools::Octree::Agent::AgentNavigationParams))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_APLFKDMICPL_OFFSET))(this, a1, a2, a3);
		}

		::FKDIDBGBGMF NOIIDIBKOBK(::UnityEngine::Vector3 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_NOIIDIBKOBK_OFFSET))(this, a1);
		}

		::System::Void FPHBEPKCANO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_FPHBEPKCANO_OFFSET))(this);
		}

		::System::Void FMFIPMDNDOF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_FMFIPMDNDOF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OOCNHBAAHOK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_OOCNHBAAHOK_OFFSET))(this, a1);
		}

		::System::Void OGGCBJKOJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_OGGCBJKOJIK_OFFSET))(this);
		}

		::System::Void ILMGEGNIKLC(::System::Collections::Generic::List_1<::MOAAMGJICCD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MOAAMGJICCD*>*))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_ILMGEGNIKLC_OFFSET))(this, a1);
		}

		::System::Void JDDGOLCOPKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_JDDGOLCOPKG_OFFSET))(this);
		}

		::System::Void FKKGIAIONOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_FKKGIAIONOM_OFFSET))(this);
		}

		::System::Void KLEOOGEHDKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_KLEOOGEHDKN_OFFSET))(this);
		}

		::System::Void LEKNNKAOIKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_LEKNNKAOIKM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPostSmooth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_GET_ISPOSTSMOOTH_OFFSET))(this);
		}

		::System::Void set_IsPostSmooth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_SET_ISPOSTSMOOTH_OFFSET))(this, a1);
		}

		::System::Boolean CLOCFNBJLFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_CLOCFNBJLFE_OFFSET))(this);
		}

		::System::Boolean BDDPMCBGGLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_BDDPMCBGGLI_OFFSET))(this);
		}

		::System::Single get_AgentRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_GET_AGENTRADIUS_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_AgentLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_GET_AGENTLAYERMASK_OFFSET))(this);
		}

		::System::Single KCLKFLBNFIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_KCLKFLBNFIP_OFFSET))(this);
		}

		::System::Single JGGMBAKHOIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHFEEFFJJJC_JGGMBAKHOIC_OFFSET))(this);
		}

	};
