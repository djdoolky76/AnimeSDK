#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LODKHMFCLOG.h"
#include "unitysdk/RPG/GameCore/ELookAtTargetSource.h"
#include "unitysdk/RPG/GameCore/ENpcLookAtMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
class PKBOEALAKCM;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class CharacterAnimZone; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLookAtPositionInfo; }
namespace RPG::GameCore { class LevelNpcLookAtTargetInfo; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKBOEALAKCM_ANAJMDCGEKD_OFFSET UNITYSDK_OFFSET(0xC2AC5C0)
#define PKBOEALAKCM_APLFGJABIJN_OFFSET UNITYSDK_OFFSET(0xC2AF350)
#define PKBOEALAKCM_BBKABOLFPKA_OFFSET UNITYSDK_OFFSET(0xC2B0740)
#define PKBOEALAKCM_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2B0900)
#define PKBOEALAKCM_CEBNHMALHEN_OFFSET UNITYSDK_OFFSET(0xC2AD820)
#define PKBOEALAKCM_CIMKMBDNGIK_OFFSET UNITYSDK_OFFSET(0xC2B0820)
#define PKBOEALAKCM_CTOR_OFFSET UNITYSDK_OFFSET(0xC2AE260)
#define PKBOEALAKCM_DCPCLGBAFAO_OFFSET UNITYSDK_OFFSET(0xC2AF130)
#define PKBOEALAKCM_DICCJIEAJHP_OFFSET UNITYSDK_OFFSET(0xC2AF1A0)
#define PKBOEALAKCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2AEED0)
#define PKBOEALAKCM_EBMFPCMOMBN_OFFSET UNITYSDK_OFFSET(0xC2ACCF0)
#define PKBOEALAKCM_GAALIILLEPC_OFFSET UNITYSDK_OFFSET(0xC2AC400)
#define PKBOEALAKCM_GHGEALGDJED_OFFSET UNITYSDK_OFFSET(0xC2B08E0)
#define PKBOEALAKCM_GOAICKAOCME_OFFSET UNITYSDK_OFFSET(0xC2AFC10)
#define PKBOEALAKCM_GOPGPHGENDB_OFFSET UNITYSDK_OFFSET(0xC2AEDB0)
#define PKBOEALAKCM_HJNLHANNOGK_OFFSET UNITYSDK_OFFSET(0xC2AF230)
#define PKBOEALAKCM_HLLLJPCBDIO_OFFSET UNITYSDK_OFFSET(0xC2AF4C0)
#define PKBOEALAKCM_IBOCHBJFHFI_OFFSET UNITYSDK_OFFSET(0xC2AC5F0)
#define PKBOEALAKCM_IDCGHHPJLGF_OFFSET UNITYSDK_OFFSET(0xC2B0830)
#define PKBOEALAKCM_INNLBEOBPHP_OFFSET UNITYSDK_OFFSET(0xC2AE070)
#define PKBOEALAKCM_KCCJKHJOMLM_1_OFFSET UNITYSDK_OFFSET(0xC2AD670)
#define PKBOEALAKCM_KCCJKHJOMLM_OFFSET UNITYSDK_OFFSET(0xC2AD430)
#define PKBOEALAKCM_KGLBJOCJHAG_OFFSET UNITYSDK_OFFSET(0xC2ACD80)
#define PKBOEALAKCM_KPKFCHHIGFD_OFFSET UNITYSDK_OFFSET(0xC2B02B0)
#define PKBOEALAKCM_LEKBLKADELI_OFFSET UNITYSDK_OFFSET(0xC2B0520)
#define PKBOEALAKCM_LFCBEMOAJEL_OFFSET UNITYSDK_OFFSET(0xC2B0790)
#define PKBOEALAKCM_LHDBHJACOKA_OFFSET UNITYSDK_OFFSET(0xC2AF810)
#define PKBOEALAKCM_LILHOGOFAAF_OFFSET UNITYSDK_OFFSET(0xC2AD620)
#define PKBOEALAKCM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC2AECD0)
#define PKBOEALAKCM_MJFFKGHDPGC_OFFSET UNITYSDK_OFFSET(0xC2B0440)
#define PKBOEALAKCM_NEIDPFLFKNJ_OFFSET UNITYSDK_OFFSET(0xC2AFDB0)
#define PKBOEALAKCM_NEJCFPPFAGK_OFFSET UNITYSDK_OFFSET(0xC2AFAE0)
#define PKBOEALAKCM_OMBNDGOINPP_OFFSET UNITYSDK_OFFSET(0xC2B08D0)
#define PKBOEALAKCM_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xC2AEF50)
#define PKBOEALAKCM_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xC2AF0E0)
#define PKBOEALAKCM_PBLNGGGMGKK_OFFSET UNITYSDK_OFFSET(0xC2ADA00)
#define PKBOEALAKCM_PGIKJLOHDIM_OFFSET UNITYSDK_OFFSET(0xC2AD870)
#define PKBOEALAKCM_TICK_OFFSET UNITYSDK_OFFSET(0xC2AC700)

inline static constexpr unsigned int PKBOEALAKCM_TypeDefinitionIndex = 57306;

	class PKBOEALAKCM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::LookAtIK* FFOBPOJECCP; // 0x18
		::RPG::GameCore::LevelNpcLookAtTargetInfo* KGHLOCICKPJ; // 0x20
		::System::Collections::Generic::List_1<::System::Func_2<::System::Collections::Generic::List_1<::LODKHMFCLOG>*, ::System::Boolean>*>* HDIIBMCLGDM; // 0x28
		::RPG::GameCore::LevelLookAtPositionInfo* EPKNPKAIEEO; // 0x30
		::RPG::GameCore::OnEventCallBack* MBNLHKCJKNH; // 0x38
		::System::Nullable* FBHOPNEDDCO; // 0x40
		::System::Byte _padding0[0x20];
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LODKHMFCLOG>*>* GCBPOBJHKOL; // 0x68
		::RPG::GameCore::CharacterAnimZone* LAMJAHOLOMC; // 0x70
		::LODKHMFCLOG KPGLHHBFGOB; // 0x78
		::RPG::Client::CharacterMonoAvatar* CFMHCFFCHED; // 0x98
		::System::Single DFPFNFOJPGC; // 0xA0
		::System::Boolean AMDJLAFJKFA; // 0xA4
		::System::Boolean AFDJAGNMBEH; // 0xA5
		::System::Byte _padding1[0x2];
		::RPG::GameCore::ENpcLookAtMode CGNDHGJNNOI; // 0xA8
		static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>** StaticGet_JPKPFGKGMIE()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "PKBOEALAKCM")->GetStaticField(0x6FBC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBOEALAKCM_CCTOR_OFFSET))();
		}

		::System::Void GAALIILLEPC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource, ::System::String*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_GAALIILLEPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBMFPCMOMBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_EBMFPCMOMBN_OFFSET))(this);
		}

		::System::Void KCCJKHJOMLM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBOEALAKCM_KCCJKHJOMLM_OFFSET))(this, a1, a2);
		}

		::System::Void KCCJKHJOMLM_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBOEALAKCM_KCCJKHJOMLM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGIKJLOHDIM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBOEALAKCM_PGIKJLOHDIM_OFFSET))(this, a1, a2);
		}

		::System::Void PBLNGGGMGKK(::PKBOEALAKCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBOEALAKCM*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_PBLNGGGMGKK_OFFSET))(this, a1);
		}

		static ::System::Void IBOCHBJFHFI(::System::Collections::Generic::List_1<::LODKHMFCLOG>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::LODKHMFCLOG>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_IBOCHBJFHFI_OFFSET))(a1, a2);
		}

		static ::System::Void INNLBEOBPHP(::RPG::GameCore::ELookAtTargetSource a1, ::System::Collections::Generic::List_1<::LODKHMFCLOG>* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELookAtTargetSource, ::System::Collections::Generic::List_1<::LODKHMFCLOG>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_INNLBEOBPHP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void GOPGPHGENDB(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_GOPGPHGENDB_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKBOEALAKCM_TICK_OFFSET))(this, a1);
		}

		::System::Void DICCJIEAJHP(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_DICCJIEAJHP_OFFSET))(this, a1);
		}

		::System::Boolean HJNLHANNOGK(::System::Collections::Generic::List_1<::LODKHMFCLOG>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::LODKHMFCLOG>*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_HJNLHANNOGK_OFFSET))(this, a1);
		}

		::System::Boolean HLLLJPCBDIO(::System::Collections::Generic::List_1<::LODKHMFCLOG>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::LODKHMFCLOG>*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_HLLLJPCBDIO_OFFSET))(this, a1);
		}

		::System::Boolean APLFGJABIJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_APLFGJABIJN_OFFSET))(this, a1);
		}

		::System::Boolean LHDBHJACOKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_LHDBHJACOKA_OFFSET))(this);
		}

		::System::Void DCPCLGBAFAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_DCPCLGBAFAO_OFFSET))(this);
		}

		::System::Void NEJCFPPFAGK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_NEJCFPPFAGK_OFFSET))(this, a1);
		}

		::System::Void KGLBJOCJHAG(::System::Nullable* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBOEALAKCM_KGLBJOCJHAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPKFCHHIGFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_KPKFCHHIGFD_OFFSET))(this, a1);
		}

		::System::Void GOAICKAOCME(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBOEALAKCM_GOAICKAOCME_OFFSET))(this, a1);
		}

		::System::Void NEIDPFLFKNJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ELookAtTargetSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ELookAtTargetSource))((::PBYTE)hIl2Cpp + PKBOEALAKCM_NEIDPFLFKNJ_OFFSET))(this, a1, a2);
		}

		::System::Void MJFFKGHDPGC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_MJFFKGHDPGC_OFFSET))(this, a1);
		}

		::System::Void LEKBLKADELI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_LEKBLKADELI_OFFSET))(this, a1);
		}

		::System::Void BBKABOLFPKA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PKBOEALAKCM_BBKABOLFPKA_OFFSET))(this, a1);
		}

		::System::Void LFCBEMOAJEL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PKBOEALAKCM_LFCBEMOAJEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean CIMKMBDNGIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_CIMKMBDNGIK_OFFSET))(this);
		}

		::System::Void IDCGHHPJLGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKBOEALAKCM_IDCGHHPJLGF_OFFSET))(this, a1);
		}

		::RPG::Client::LookAtIK* OMBNDGOINPP()
		{
			return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_OMBNDGOINPP_OFFSET))(this);
		}

		::System::Nullable* GHGEALGDJED()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_GHGEALGDJED_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LILHOGOFAAF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_LILHOGOFAAF_OFFSET))(this);
		}

		::RPG::GameCore::ELookAtTargetSource CEBNHMALHEN()
		{
			return ((::RPG::GameCore::ELookAtTargetSource(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_CEBNHMALHEN_OFFSET))(this);
		}

		::System::Boolean ANAJMDCGEKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBOEALAKCM_ANAJMDCGEKD_OFFSET))(this);
		}

	};
