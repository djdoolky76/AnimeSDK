#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GHHIAGDFMMN;
class HDPCKPMCKCF;
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }

#define DIKGMCHCBPE_CCTOR_OFFSET UNITYSDK_OFFSET(0xF976F00)
#define DIKGMCHCBPE_CTOR_OFFSET UNITYSDK_OFFSET(0xF975840)
#define DIKGMCHCBPE_DJGNHODODOL_OFFSET UNITYSDK_OFFSET(0xF976C90)
#define DIKGMCHCBPE_DLOFGILFCLJ_OFFSET UNITYSDK_OFFSET(0xF976760)
#define DIKGMCHCBPE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xF976EF0)
#define DIKGMCHCBPE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xF976D10)
#define DIKGMCHCBPE_HAOOGGNGFOO_OFFSET UNITYSDK_OFFSET(0xF976470)
#define DIKGMCHCBPE_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xF9758A0)
#define DIKGMCHCBPE_KFGHIGOCBFI_OFFSET UNITYSDK_OFFSET(0xF976D60)
#define DIKGMCHCBPE_NNIPLABFNNM_OFFSET UNITYSDK_OFFSET(0xF9764E0)
#define DIKGMCHCBPE_ODBMAOOOGHP_OFFSET UNITYSDK_OFFSET(0xF976540)

inline static constexpr unsigned int DIKGMCHCBPE_TypeDefinitionIndex = 58252;

	class DIKGMCHCBPE : public ::BDENDNDOFLF
	{
	public:
		::GHHIAGDFMMN* KCIMDDOEHJE; // 0x68
		::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x70
		::HDPCKPMCKCF* JIFOGMDGJAP; // 0x78
		::System::Single CEEAGJMFPLO; // 0x80
		::System::Single JFJOLFHJKNF; // 0x84
		::System::Single BFGGMAHHOLF; // 0x88
		::UnityEngine::Vector3 EKKPMIOJMGM; // 0x8C
		::System::Single NMMAFJCIBHG; // 0x98
		::System::Single FAPCGFINDFF; // 0x9C
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xA0
		::System::Single BGKNMHEKMIA; // 0xAC
		::System::Single HIHIBOIKOOM; // 0xB0
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xB4
		::System::Boolean EHJOLABCMOD; // 0xB8
		::System::Boolean JALFBJDPLOG; // 0xB9
		static ::System::Int32* StaticGet_ILDMDABEPEK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DIKGMCHCBPE")->GetStaticField(0x14880);
		}

		static ::System::Int32* StaticGet_COKLIJKIGAN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DIKGMCHCBPE")->GetStaticField(0x14884);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIKGMCHCBPE_CCTOR_OFFSET))();
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::System::Boolean ODBMAOOOGHP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_ODBMAOOOGHP_OFFSET))(this, a1);
		}

		::System::Void DLOFGILFCLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_DLOFGILFCLJ_OFFSET))(this);
		}

		::System::Void DJGNHODODOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_DJGNHODODOL_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KFGHIGOCBFI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_KFGHIGOCBFI_OFFSET))(this, a1);
		}

		::System::Void HAOOGGNGFOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_HAOOGGNGFOO_OFFSET))(this);
		}

		::System::Void NNIPLABFNNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_NNIPLABFNNM_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKGMCHCBPE_GET_FLAG_OFFSET))(this);
		}

	};
