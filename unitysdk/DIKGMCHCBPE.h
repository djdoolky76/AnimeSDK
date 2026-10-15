#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GHHIAGDFMMN;
class HDPCKPMCKCF;
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }

#define DIKGMCHCBPE_CCTOR_OFFSET UNITYSDK_OFFSET(0xF211300)
#define DIKGMCHCBPE_CTOR_OFFSET UNITYSDK_OFFSET(0xF20FC50)
#define DIKGMCHCBPE_DJGNHODODOL_OFFSET UNITYSDK_OFFSET(0xF211090)
#define DIKGMCHCBPE_DLOFGILFCLJ_OFFSET UNITYSDK_OFFSET(0xF210B70)
#define DIKGMCHCBPE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xF2112F0)
#define DIKGMCHCBPE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xF211110)
#define DIKGMCHCBPE_HAOOGGNGFOO_OFFSET UNITYSDK_OFFSET(0xF210880)
#define DIKGMCHCBPE_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xF20FCB0)
#define DIKGMCHCBPE_KFGHIGOCBFI_OFFSET UNITYSDK_OFFSET(0xF211160)
#define DIKGMCHCBPE_NNIPLABFNNM_OFFSET UNITYSDK_OFFSET(0xF2108F0)
#define DIKGMCHCBPE_ODBMAOOOGHP_OFFSET UNITYSDK_OFFSET(0xF210950)

	class DIKGMCHCBPE : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x68
		::HDPCKPMCKCF* JIFOGMDGJAP; // 0x70
		::GHHIAGDFMMN* KCIMDDOEHJE; // 0x78
		::System::Single FAPCGFINDFF; // 0x80
		::System::Single JFJOLFHJKNF; // 0x84
		::System::Single CEEAGJMFPLO; // 0x88
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x8C
		::System::Single BFGGMAHHOLF; // 0x98
		::System::Single HIHIBOIKOOM; // 0x9C
		::System::Boolean EHJOLABCMOD; // 0xA0
		::System::Boolean JALFBJDPLOG; // 0xA1
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xA4
		::UnityEngine::Vector3 EKKPMIOJMGM; // 0xA8
		::System::Single BGKNMHEKMIA; // 0xB4
		::System::Single NMMAFJCIBHG; // 0xB8
		static ::System::Int32* StaticGet_ILDMDABEPEK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DIKGMCHCBPE")->GetStaticField(0x13110);
		}

		static ::System::Int32* StaticGet_COKLIJKIGAN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DIKGMCHCBPE")->GetStaticField(0x13114);
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
