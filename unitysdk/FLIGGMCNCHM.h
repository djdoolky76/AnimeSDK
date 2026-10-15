#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLIGGMCNCHM_EPose.h"
#include "unitysdk/RPG/Client/AudienceStanceConfig_EPositionPoseType.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"
class HGPOFIGCPAM;
class IONFMLHCJFJ;
namespace RPG::Client { class AssemNPCRandomCombinationCollection; }
namespace RPG::Client { class AudienceGroupInstance; }
namespace RPG::Client { class AudienceMoodMapConfig; }
namespace RPG::Client { class AudiencePrefabConfig; }
namespace RPG::Client { class AudiencePrefabSpecialTag_Blink; }
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class ScriptableObject; }

#define FLIGGMCNCHM_BGMHNMECNMK_OFFSET UNITYSDK_OFFSET(0x158283A0)
#define FLIGGMCNCHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15828420)
#define FLIGGMCNCHM_CIEDEJHPGLJ_OFFSET UNITYSDK_OFFSET(0x15827BF0)
#define FLIGGMCNCHM_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0x15827750)
#define FLIGGMCNCHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x15827650)
#define FLIGGMCNCHM_CTOR_OFFSET UNITYSDK_OFFSET(0x15828410)
#define FLIGGMCNCHM_DCIIOJKGEPL_OFFSET UNITYSDK_OFFSET(0x158266E0)
#define FLIGGMCNCHM_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0x15827E80)
#define FLIGGMCNCHM_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x15827550)
#define FLIGGMCNCHM_FMIBDPLKCAJ_OFFSET UNITYSDK_OFFSET(0x15826F40)
#define FLIGGMCNCHM_GCHFMMKNMKJ_OFFSET UNITYSDK_OFFSET(0x15827700)
#define FLIGGMCNCHM_GET_AUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x158274D0)
#define FLIGGMCNCHM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15827510)
#define FLIGGMCNCHM_GET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x158274B0)
#define FLIGGMCNCHM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15827530)
#define FLIGGMCNCHM_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0x158274F0)
#define FLIGGMCNCHM_IBNOJCBGJGD_OFFSET UNITYSDK_OFFSET(0x158273C0)
#define FLIGGMCNCHM_JEBPEALPJDI_OFFSET UNITYSDK_OFFSET(0x15827D70)
#define FLIGGMCNCHM_JGGBDNEAFEJ_OFFSET UNITYSDK_OFFSET(0x15827CC0)
#define FLIGGMCNCHM_JJJCCEKDMAK_OFFSET UNITYSDK_OFFSET(0x15826880)
#define FLIGGMCNCHM_MEGDEKMIPNI_OFFSET UNITYSDK_OFFSET(0x15826E10)
#define FLIGGMCNCHM_MFLPKODCEPJ_OFFSET UNITYSDK_OFFSET(0x15827BA0)
#define FLIGGMCNCHM_NAMPKPKNMHG_OFFSET UNITYSDK_OFFSET(0x15827440)
#define FLIGGMCNCHM_NFIKAMBFDNN_OFFSET UNITYSDK_OFFSET(0x15826C20)
#define FLIGGMCNCHM_NJLKGDIMFBN_OFFSET UNITYSDK_OFFSET(0x15827F70)
#define FLIGGMCNCHM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15827DD0)
#define FLIGGMCNCHM_SET_AUDIENCEMOODMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x158274E0)
#define FLIGGMCNCHM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15827520)
#define FLIGGMCNCHM_SET_CROWDVARIANTPATH_OFFSET UNITYSDK_OFFSET(0x158274C0)
#define FLIGGMCNCHM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15827540)
#define FLIGGMCNCHM_SET_PREFAB_OFFSET UNITYSDK_OFFSET(0x15827500)

inline static constexpr unsigned int FLIGGMCNCHM_TypeDefinitionIndex = 69136;

	class FLIGGMCNCHM : public ::System::Object
	{
	public:
		::RPG::Client::CrowdAnimator::CrowdInstance* _Instance_k__BackingField; // 0x10
		::UnityEngine::CapsuleCollider* CEEGJCAJAHB; // 0x18
		::RPG::Client::AudienceMoodMapConfig* _Config_k__BackingField; // 0x20
		::System::String* _CrowdVariantPath_k__BackingField; // 0x28
		::System::String* ACHIACDNCNN; // 0x30
		::RPG::Client::AudienceGroupInstance* EOBLJJBOBIN; // 0x38
		::System::Collections::Generic::List_1<::IONFMLHCJFJ*>* IEOABMPAGAA; // 0x40
		::HGPOFIGCPAM* BNCDHNIIJPJ; // 0x48
		::System::String* _AudienceMoodMapConfigPath_k__BackingField; // 0x50
		::RPG::Client::CrowdAnimator::CrowdVariant* _Prefab_k__BackingField; // 0x58
		::System::String* OENAMINOLLF; // 0x60
		::FLIGGMCNCHM_EPose LGHNGJCFGGC; // 0x68
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x6C
		::System::Boolean PMOCMKPOBGF; // 0x78
		::System::Byte _padding0[0x3];
		::RPG::GameCore::NPCBodySize FNCMBFHKKCK; // 0x7C
		::RPG::Client::AudienceStanceConfig_EPositionPoseType EDCEJMPENKI; // 0x80
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x84
		::System::Single EOKMFCIBCDI; // 0x94
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_HCMHPFMBGBN()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "FLIGGMCNCHM")->GetStaticField(0x4FF90);
		}

		// static const ::System::Object DKJBBBDEOAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIGGMCNCHM_CCTOR_OFFSET))();
		}

		::System::Void DCIIOJKGEPL(::System::String* a1, ::RPG::Client::AudiencePrefabConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudiencePrefabConfig*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_DCIIOJKGEPL_OFFSET))(this, a1, a2);
		}

		::System::Void NFIKAMBFDNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_NFIKAMBFDNN_OFFSET))(this);
		}

		::System::Void MEGDEKMIPNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_MEGDEKMIPNI_OFFSET))(this);
		}

		::System::Void JJJCCEKDMAK(::System::String* a1, ::RPG::Client::AudiencePrefabSpecialTag_Blink* a2, ::RPG::GameCore::AdventureCharacterConfig* a3, ::UnityEngine::ScriptableObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudiencePrefabSpecialTag_Blink*, ::RPG::GameCore::AdventureCharacterConfig*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_JJJCCEKDMAK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IBNOJCBGJGD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_IBNOJCBGJGD_OFFSET))(this, a1);
		}

		static ::System::ValueTuple_2<::Il2CppArray<::System::String*>*, ::RPG::GameCore::CharacterAtlasFaceSet*> FMIBDPLKCAJ(::System::String* a1, ::RPG::Client::AssemNPCRandomCombinationCollection* a2, ::RPG::GameCore::AdventureCharacterConfig* a3)
		{
			return ((::System::ValueTuple_2<::Il2CppArray<::System::String*>*, ::RPG::GameCore::CharacterAtlasFaceSet*>(*)(::System::String*, ::RPG::Client::AssemNPCRandomCombinationCollection*, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_FMIBDPLKCAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NAMPKPKNMHG(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_NAMPKPKNMHG_OFFSET))(a1);
		}

		::System::String* get_CrowdVariantPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_GET_CROWDVARIANTPATH_OFFSET))(this);
		}

		::System::Void set_CrowdVariantPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_SET_CROWDVARIANTPATH_OFFSET))(this, a1);
		}

		::System::String* get_AudienceMoodMapConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_GET_AUDIENCEMOODMAPCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_AudienceMoodMapConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_SET_AUDIENCEMOODMAPCONFIGPATH_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::CrowdVariant* get_Prefab()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdVariant*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_GET_PREFAB_OFFSET))(this);
		}

		::System::Void set_Prefab(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_SET_PREFAB_OFFSET))(this, a1);
		}

		::RPG::Client::AudienceMoodMapConfig* get_Config()
		{
			return ((::RPG::Client::AudienceMoodMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::AudienceMoodMapConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceMoodMapConfig*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::CrowdAnimator::CrowdInstance* get_Instance()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_SET_INSTANCE_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::System::String* a1, ::RPG::Client::AudienceGroupInstance* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::GameCore::NPCBodySize a5, ::RPG::Client::AudienceStanceConfig_EPositionPoseType a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AudienceGroupInstance*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::NPCBodySize, ::RPG::Client::AudienceStanceConfig_EPositionPoseType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_CLEAR_OFFSET))(this);
		}

		::System::Void GCHFMMKNMKJ(::RPG::Client::CrowdAnimator::CrowdVariant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_GCHFMMKNMKJ_OFFSET))(this, a1);
		}

		::System::Void MFLPKODCEPJ(::RPG::Client::AudienceMoodMapConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceMoodMapConfig*))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_MFLPKODCEPJ_OFFSET))(this, a1);
		}

		::System::Void CIPJBBAOLBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_CIPJBBAOLBD_OFFSET))(this);
		}

		::System::Single CIEDEJHPGLJ(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_CIEDEJHPGLJ_OFFSET))(this, a1);
		}

		::System::Void JEBPEALPJDI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_JEBPEALPJDI_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean DGHLCFLEJFC(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_DGHLCFLEJFC_OFFSET))(this, a1);
		}

		::System::Boolean JGGBDNEAFEJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_JGGBDNEAFEJ_OFFSET))(this, a1);
		}

		::System::Boolean NJLKGDIMFBN(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_NJLKGDIMFBN_OFFSET))(this, a1, a2);
		}

		::System::Void BGMHNMECNMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIGGMCNCHM_BGMHNMECNMK_OFFSET))(this);
		}

	};
