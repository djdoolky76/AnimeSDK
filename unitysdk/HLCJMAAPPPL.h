#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
class KADNINAMKGA;
class MOAKENFIBPE;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define HLCJMAAPPPL_APMDFBOCIKI_OFFSET UNITYSDK_OFFSET(0x15D4F420)
#define HLCJMAAPPPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D4F720)
#define HLCJMAAPPPL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4F710)
#define HLCJMAAPPPL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15D4E650)
#define HLCJMAAPPPL_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x15D4F6F0)
#define HLCJMAAPPPL_NJHIHCDLBCG_OFFSET UNITYSDK_OFFSET(0x15D4F460)
#define HLCJMAAPPPL_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15D4E830)
#define HLCJMAAPPPL_OEGOPNDBLLH_OFFSET UNITYSDK_OFFSET(0x15D4F2F0)
#define HLCJMAAPPPL_OJFFADJKCEM_OFFSET UNITYSDK_OFFSET(0x15D4EA80)
#define HLCJMAAPPPL_OKEIGLBOINN_OFFSET UNITYSDK_OFFSET(0x15D4EB50)
#define HLCJMAAPPPL_ONANIMATORCHANGE_OFFSET UNITYSDK_OFFSET(0x15D4F620)
#define HLCJMAAPPPL_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x15D4F4C0)
#define HLCJMAAPPPL_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x15D4F700)

inline static constexpr unsigned int HLCJMAAPPPL_TypeDefinitionIndex = 53947;

	class HLCJMAAPPPL : public ::KKEFMOKEJIF
	{
	public:
		::RPG::GameCore::FixPoint HCMKIPKCKOL; // 0x18
		::System::Int32 DCDBAJGEEHO; // 0x20
		::System::Boolean EDPCLJALHGL; // 0x24
		::System::Boolean GDOMAIIIKDG; // 0x25
		::System::Boolean PDEGILGLFKI; // 0x26
		::System::Boolean DGDJGLFNJID; // 0x27
		::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x28
		static ::System::Int32* StaticGet_GFFJPEAAMDL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HLCJMAAPPPL")->GetStaticField(0x7E90);
		}

		static ::System::Int32* StaticGet_COJOCBCIPAN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HLCJMAAPPPL")->GetStaticField(0x7E94);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCJMAAPPPL_CCTOR_OFFSET))();
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void OJFFADJKCEM(::KADNINAMKGA* a1, ::MOAKENFIBPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KADNINAMKGA*, ::MOAKENFIBPE*))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_OJFFADJKCEM_OFFSET))(this, a1, a2);
		}

		::System::Void OKEIGLBOINN(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_OKEIGLBOINN_OFFSET))(this, a1, a2);
		}

		::System::Void APMDFBOCIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_APMDFBOCIKI_OFFSET))(this);
		}

		::System::Void NJHIHCDLBCG(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_NJHIHCDLBCG_OFFSET))(this, a1, a2);
		}

		::System::Void OnFlagStateChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBehaviorFlag a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBehaviorFlag, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_ONFLAGSTATECHANGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnAnimatorChange(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_ONANIMATORCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean OEGOPNDBLLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_OEGOPNDBLLH_OFFSET))(this);
		}

		::System::Int32 get_HitAdditiveLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
		}

		::System::Void set_HitAdditiveLayerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLCJMAAPPPL_SET_HITADDITIVELAYERINDEX_OFFSET))(this, a1);
		}

	};
