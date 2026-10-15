#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainShapeType.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainCollection.h"
namespace RPG::Client::ElectricChainV2 { class Constraint; }
namespace RPG::Client::ElectricChainV2 { class Effect_ElectricChainV2; }
namespace RPG::Client::ElectricChainV2 { class Effect_ElectricChainV2Behavior_SubChain; }
namespace RPG::Client::ElectricChainV2 { class Line; }
namespace RPG::Client::ElectricChainV2 { class RandomUpdater; }
namespace RPG::Client::ElectricChainV2 { class Shape; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xCD7CB50)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD7D660)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD81F30)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_DDGHJDFBFND_OFFSET UNITYSDK_OFFSET(0xCD7F000)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_DFKGGPKMDGL_OFFSET UNITYSDK_OFFSET(0xCD7FC60)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_DIEEHAACECP_OFFSET UNITYSDK_OFFSET(0xCD80F80)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GBAHDJFPPBC_OFFSET UNITYSDK_OFFSET(0xCD7D610)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__DISPLACEMENT_OFFSET UNITYSDK_OFFSET(0xCD815A0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD7D910)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_HFNOKGPJEOO_OFFSET UNITYSDK_OFFSET(0xCD7E9C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xCD7DC40)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_JDMCMCGILJF_OFFSET UNITYSDK_OFFSET(0xCD809C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_JFJCECGCJIL_OFFSET UNITYSDK_OFFSET(0xCD818A0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD7D6C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xCD7D070)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD7CFB0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD7DBE0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_LDOAGKNILFC_OFFSET UNITYSDK_OFFSET(0xCD7E6C0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD7D5B0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD7DB80)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_NOJPFFBMLNG_OFFSET UNITYSDK_OFFSET(0xCD80E00)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD7D990)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_OMILLJFFGPC_1_OFFSET UNITYSDK_OFFSET(0xCD81680)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_OMILLJFFGPC_OFFSET UNITYSDK_OFFSET(0xCD7EEE0)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD7D020)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD7DB40)
#define RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_PPKNKHBHFCG_OFFSET UNITYSDK_OFFSET(0xCD7CB00)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior_TypeDefinitionIndex = 73581;

	class Effect_ElectricChainV2Behavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _MainChainPoints; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _SubChains; // 0x40
		::System::Int32 _SubChainProportionSum; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* _SubChainsPointsNumberList; // 0x50
		::System::Int32 _TotalPointNumbers; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void AODAHAFDMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_AODAHAFDMKM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void PPKNKHBHFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_PPKNKHBHFCG_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void DDGHJDFBFND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_DDGHJDFBFND_OFFSET))(this);
		}

		::System::Void DFKGGPKMDGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_DFKGGPKMDGL_OFFSET))(this, a1);
		}

		::RPG::Client::ElectricChainV2::Shape* JDMCMCGILJF(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain* a1, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType a2, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection a3)
		{
			return ((::RPG::Client::ElectricChainV2::Shape*(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_JDMCMCGILJF_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ElectricChainV2::Shape* DIEEHAACECP(::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain* a1, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection a2)
		{
			return ((::RPG::Client::ElectricChainV2::Shape*(*)(::PVOID, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChain*, ::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainCollection))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_DIEEHAACECP_OFFSET))(this, a1, a2);
		}

		::System::Void GBAHDJFPPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GBAHDJFPPBC_OFFSET))(this);
		}

		::System::Void LDOAGKNILFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_LDOAGKNILFC_OFFSET))(this);
		}

		::UnityEngine::Transform* HFNOKGPJEOO()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_HFNOKGPJEOO_OFFSET))(this);
		}

		::UnityEngine::Vector3 NOJPFFBMLNG(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_NOJPFFBMLNG_OFFSET))(this, a1);
		}

		::System::Single get__Displacement()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__DISPLACEMENT_OFFSET))(this);
		}

		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2* get__Owner()
		{
			return ((::RPG::Client::ElectricChainV2::Effect_ElectricChainV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void OMILLJFFGPC(::System::Object* a1, ::RPG::Client::ElectricChainV2::Line* a2, ::RPG::Client::ElectricChainV2::RandomUpdater* a3, ::RPG::Client::ElectricChainV2::Constraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::ElectricChainV2::Line*, ::RPG::Client::ElectricChainV2::RandomUpdater*, ::RPG::Client::ElectricChainV2::Constraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_OMILLJFFGPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OMILLJFFGPC_1(::System::Object* a1, ::RPG::Client::ElectricChainV2::Line* a2, ::RPG::Client::ElectricChainV2::RandomUpdater* a3, ::System::Single a4, ::System::Single a5, ::RPG::Client::ElectricChainV2::Constraint* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::ElectricChainV2::Line*, ::RPG::Client::ElectricChainV2::RandomUpdater*, ::System::Single, ::System::Single, ::RPG::Client::ElectricChainV2::Constraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_OMILLJFFGPC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JFJCECGCJIL(::System::Object* a1, ::RPG::Client::ElectricChainV2::Line* a2, ::RPG::Client::ElectricChainV2::RandomUpdater* a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Single a8, ::System::Single a9, ::RPG::Client::ElectricChainV2::Constraint* a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::ElectricChainV2::Line*, ::RPG::Client::ElectricChainV2::RandomUpdater*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::RPG::Client::ElectricChainV2::Constraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_EFFECT_ELECTRICCHAINV2BEHAVIOR_JFJCECGCJIL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

	};
}
