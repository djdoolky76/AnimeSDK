#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHJIFGMNNPP.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/System/Object.h"
class CBIKMJHGEDE;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class NOOHPODHIAA;
class PEEDLCHFAFL;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ConfigurableJoint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define POHNBOACDHB_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0xC35F1E0)
#define POHNBOACDHB_BGBJGJMDABI_OFFSET UNITYSDK_OFFSET(0xC35EF00)
#define POHNBOACDHB_CLEAR_OFFSET UNITYSDK_OFFSET(0xC35CD00)
#define POHNBOACDHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC35FC70)
#define POHNBOACDHB_DPKLPMANKJF_OFFSET UNITYSDK_OFFSET(0xC35F8E0)
#define POHNBOACDHB_EAILPILLKJH_OFFSET UNITYSDK_OFFSET(0xC35D0C0)
#define POHNBOACDHB_EEJLMGDOIOC_OFFSET UNITYSDK_OFFSET(0xC35D690)
#define POHNBOACDHB_EMHDHINLCOP_OFFSET UNITYSDK_OFFSET(0xC35DA90)
#define POHNBOACDHB_GET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC35FA60)
#define POHNBOACDHB_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0xC35F9C0)
#define POHNBOACDHB_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC35FC50)
#define POHNBOACDHB_GET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0xC35FA20)
#define POHNBOACDHB_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC35F9E0)
#define POHNBOACDHB_GET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0xC35FA80)
#define POHNBOACDHB_GET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0xC35FA00)
#define POHNBOACDHB_GET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0xC35FAA0)
#define POHNBOACDHB_GET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC35FA40)
#define POHNBOACDHB_GET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0xC35FAC0)
#define POHNBOACDHB_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xC35F9A0)
#define POHNBOACDHB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC35DC60)
#define POHNBOACDHB_IELPIDDIKKN_OFFSET UNITYSDK_OFFSET(0xC35F940)
#define POHNBOACDHB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC35CF30)
#define POHNBOACDHB_MIFICMPJNIK_OFFSET UNITYSDK_OFFSET(0xC35FB00)
#define POHNBOACDHB_NJCMDMFEHLE_OFFSET UNITYSDK_OFFSET(0xC35F110)
#define POHNBOACDHB_OABJIFMOLIH_OFFSET UNITYSDK_OFFSET(0xC35F6C0)
#define POHNBOACDHB_OCGPMLABLLF_OFFSET UNITYSDK_OFFSET(0xC35F5A0)
#define POHNBOACDHB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC35EBC0)
#define POHNBOACDHB_PBAHNFEPAID_OFFSET UNITYSDK_OFFSET(0xC35CD70)
#define POHNBOACDHB_PBHCHOBFBLB_OFFSET UNITYSDK_OFFSET(0xC35DD40)
#define POHNBOACDHB_SET_CONSTRAINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC35FA70)
#define POHNBOACDHB_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0xC35F9D0)
#define POHNBOACDHB_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC35FC60)
#define POHNBOACDHB_SET_ISPROXYREADY_OFFSET UNITYSDK_OFFSET(0xC35FA30)
#define POHNBOACDHB_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC35F9F0)
#define POHNBOACDHB_SET_PROXYBODY_OFFSET UNITYSDK_OFFSET(0xC35FA90)
#define POHNBOACDHB_SET_PROXYENTITY_OFFSET UNITYSDK_OFFSET(0xC35FA10)
#define POHNBOACDHB_SET_PROXYJOINT_OFFSET UNITYSDK_OFFSET(0xC35FAB0)
#define POHNBOACDHB_SET_PROXYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC35FA50)
#define POHNBOACDHB_SET_SCALABLECONSTS_OFFSET UNITYSDK_OFFSET(0xC35FAE0)
#define POHNBOACDHB_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xC35F9B0)

inline static constexpr unsigned int POHNBOACDHB_TypeDefinitionIndex = 77013;

	class POHNBOACDHB : public ::System::Object
	{
	public:
		::HIOEAKHGILF* _ProxyEntity_k__BackingField; // 0x10
		::UnityEngine::Transform* _ConstraintTransform_k__BackingField; // 0x18
		::CBIKMJHGEDE* OCJIOHEOJKA; // 0x20
		::NDDFLGNNMDK* _Contexts_k__BackingField; // 0x28
		::UnityEngine::ConfigurableJoint* _ProxyJoint_k__BackingField; // 0x30
		::UnityEngine::Rigidbody* _ProxyBody_k__BackingField; // 0x38
		::HIOEAKHGILF* _OwnerEntity_k__BackingField; // 0x40
		::PEEDLCHFAFL* _Services_k__BackingField; // 0x48
		::UnityEngine::Transform* _ProxyTransform_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FiveDim::PropMoveState, ::CBIKMJHGEDE*>* PFNCFHNGHAG; // 0x58
		::RPG::Client::LittleGame::FiveDim::PropMoveState _CurrentState_k__BackingField; // 0x60
		::EHJIFGMNNPP _ScalableConsts_k__BackingField; // 0x64
		::System::Boolean _IsProxyReady_k__BackingField; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PEEDLCHFAFL* a1, ::NDDFLGNNMDK* a2, ::HIOEAKHGILF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*, ::NDDFLGNNMDK*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + POHNBOACDHB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EMHDHINLCOP(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + POHNBOACDHB_EMHDHINLCOP_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void BGBJGJMDABI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_BGBJGJMDABI_OFFSET))(this);
		}

		::System::Void NJCMDMFEHLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_NJCMDMFEHLE_OFFSET))(this);
		}

		::System::Void AJAMJDIIFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_AJAMJDIIFDO_OFFSET))(this);
		}

		::System::Void OABJIFMOLIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_OABJIFMOLIH_OFFSET))(this);
		}

		::System::Void EAILPILLKJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_EAILPILLKJH_OFFSET))(this);
		}

		::System::Void EEJLMGDOIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_EEJLMGDOIOC_OFFSET))(this);
		}

		::System::Void PBAHNFEPAID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_PBAHNFEPAID_OFFSET))(this);
		}

		::System::Void PBHCHOBFBLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_PBHCHOBFBLB_OFFSET))(this);
		}

		::System::Boolean OCGPMLABLLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_OCGPMLABLLF_OFFSET))(this);
		}

		::PEEDLCHFAFL* get_Services()
		{
			return ((::PEEDLCHFAFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::PEEDLCHFAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_SERVICES_OFFSET))(this, a1);
		}

		::NDDFLGNNMDK* get_Contexts()
		{
			return ((::NDDFLGNNMDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_CONTEXTS_OFFSET))(this);
		}

		::System::Void set_Contexts(::NDDFLGNNMDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_CONTEXTS_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* get_OwnerEntity()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* get_ProxyEntity()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_PROXYENTITY_OFFSET))(this);
		}

		::System::Void set_ProxyEntity(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_PROXYENTITY_OFFSET))(this, a1);
		}

		::NOOHPODHIAA* IELPIDDIKKN()
		{
			return ((::NOOHPODHIAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_IELPIDDIKKN_OFFSET))(this);
		}

		::System::Boolean get_IsProxyReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_ISPROXYREADY_OFFSET))(this);
		}

		::System::Void set_IsProxyReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_ISPROXYREADY_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_ProxyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_PROXYTRANSFORM_OFFSET))(this);
		}

		::System::Void set_ProxyTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_PROXYTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_ConstraintTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_CONSTRAINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_ConstraintTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_CONSTRAINTTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Rigidbody* get_ProxyBody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_PROXYBODY_OFFSET))(this);
		}

		::System::Void set_ProxyBody(::UnityEngine::Rigidbody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_PROXYBODY_OFFSET))(this, a1);
		}

		::UnityEngine::ConfigurableJoint* get_ProxyJoint()
		{
			return ((::UnityEngine::ConfigurableJoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_PROXYJOINT_OFFSET))(this);
		}

		::System::Void set_ProxyJoint(::UnityEngine::ConfigurableJoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ConfigurableJoint*))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_PROXYJOINT_OFFSET))(this, a1);
		}

		::EHJIFGMNNPP get_ScalableConsts()
		{
			return ((::EHJIFGMNNPP(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_SCALABLECONSTS_OFFSET))(this);
		}

		::System::Void set_ScalableConsts(::EHJIFGMNNPP a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHJIFGMNNPP))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_SCALABLECONSTS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimPropMoveConfig* DPKLPMANKJF()
		{
			return ((::RPG::GameCore::FiveDimPropMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_DPKLPMANKJF_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimPropBakedMoveConfig* MIFICMPJNIK()
		{
			return ((::RPG::GameCore::FiveDimPropBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_MIFICMPJNIK_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState get_CurrentState()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + POHNBOACDHB_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + POHNBOACDHB_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

	};
