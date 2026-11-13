#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNHOCJLBCEB_BJFFMGPIPJK;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define GNHOCJLBCEB_AICJDIOJLCL_OFFSET UNITYSDK_OFFSET(0x18791240)
#define GNHOCJLBCEB_BMFHKFLELGL_OFFSET UNITYSDK_OFFSET(0x1878EFA0)
#define GNHOCJLBCEB_BPHKEPFKJPI_OFFSET UNITYSDK_OFFSET(0x1878F020)
#define GNHOCJLBCEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x18791370)
#define GNHOCJLBCEB_CKEOEAIEMMA_OFFSET UNITYSDK_OFFSET(0x1878FB30)
#define GNHOCJLBCEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1878DC80)
#define GNHOCJLBCEB_DDJFCMNMBKA_OFFSET UNITYSDK_OFFSET(0x1878E950)
#define GNHOCJLBCEB_DEAMLPAEPFP_OFFSET UNITYSDK_OFFSET(0x1878F330)
#define GNHOCJLBCEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1878DC90)
#define GNHOCJLBCEB_DMIJCHGKOOI_OFFSET UNITYSDK_OFFSET(0x18790AB0)
#define GNHOCJLBCEB_EENDHENBKFM_OFFSET UNITYSDK_OFFSET(0x18790C40)
#define GNHOCJLBCEB_GFIJGKKMMIP_1_OFFSET UNITYSDK_OFFSET(0x187902F0)
#define GNHOCJLBCEB_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x1878FF50)
#define GNHOCJLBCEB_GFNFOFCJFMN_OFFSET UNITYSDK_OFFSET(0x1878F090)
#define GNHOCJLBCEB_HHKKAOJKGHH_OFFSET UNITYSDK_OFFSET(0x18790780)
#define GNHOCJLBCEB_HIONDOHGILM_OFFSET UNITYSDK_OFFSET(0x1878FA10)
#define GNHOCJLBCEB_HJEJBEMPMCK_OFFSET UNITYSDK_OFFSET(0x1878E470)
#define GNHOCJLBCEB_IAGEGCCJJDP_OFFSET UNITYSDK_OFFSET(0x18790960)
#define GNHOCJLBCEB_IFOIFCJHHDF_OFFSET UNITYSDK_OFFSET(0x1878DCF0)
#define GNHOCJLBCEB_KFLFGCPIBAJ_OFFSET UNITYSDK_OFFSET(0x18790D10)
#define GNHOCJLBCEB_LHFBEIDBCIK_OFFSET UNITYSDK_OFFSET(0x18791260)
#define GNHOCJLBCEB_LMCEDCHJKFF_1_OFFSET UNITYSDK_OFFSET(0x1878E840)
#define GNHOCJLBCEB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1878E370)
#define GNHOCJLBCEB_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0x18790730)
#define GNHOCJLBCEB_NFICMCNHPIE_OFFSET UNITYSDK_OFFSET(0x1878F3D0)
#define GNHOCJLBCEB_NLPIGNLBGII_OFFSET UNITYSDK_OFFSET(0x18791250)
#define GNHOCJLBCEB_OAMMIPDLOFC_OFFSET UNITYSDK_OFFSET(0x18790880)
#define GNHOCJLBCEB_ONHCLAFFINE_OFFSET UNITYSDK_OFFSET(0x1878E150)
#define GNHOCJLBCEB_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1878EC00)
#define GNHOCJLBCEB_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1878EC50)
#define GNHOCJLBCEB_PEEEGMNCDAF_OFFSET UNITYSDK_OFFSET(0x18790CC0)
#define GNHOCJLBCEB_TICK_OFFSET UNITYSDK_OFFSET(0x1878ECA0)

inline static constexpr unsigned int GNHOCJLBCEB_TypeDefinitionIndex = 58569;

	class GNHOCJLBCEB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* LCFMAFCHALA; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* BKGDGFEBNHB; // 0x20
		::System::Action_1<::UnityEngine::GameObject*>* CEJJEGFPPMJ; // 0x28
		::GNHOCJLBCEB_BJFFMGPIPJK* FIDNMKFIGEB; // 0x30
		::System::Boolean HGAEEFMPAAL; // 0x38
		::System::Boolean CJNDENCDPFL; // 0x39
		static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "GNHOCJLBCEB")->GetStaticField(0x718D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNHOCJLBCEB_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF_1(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_LMCEDCHJKFF_1_OFFSET))(this, a1, a2);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_TICK_OFFSET))(this, a1);
		}

		::System::Void BMFHKFLELGL(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_BMFHKFLELGL_OFFSET))(this, a1);
		}

		::System::Void BPHKEPFKJPI(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_BPHKEPFKJPI_OFFSET))(this, a1);
		}

		::System::Void GFNFOFCJFMN(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_GFNFOFCJFMN_OFFSET))(this, a1);
		}

		::System::Void DEAMLPAEPFP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_DEAMLPAEPFP_OFFSET))(this, a1);
		}

		::System::Void NFICMCNHPIE(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_NFICMCNHPIE_OFFSET))(this, a1, a2);
		}

		::System::Void CKEOEAIEMMA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_CKEOEAIEMMA_OFFSET))(this, a1);
		}

		::System::Void GFIJGKKMMIP(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_GFIJGKKMMIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GFIJGKKMMIP_1(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_GFIJGKKMMIP_1_OFFSET))(this, a1, a2);
		}

		::System::Void IFOIFCJHHDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_IFOIFCJHHDF_OFFSET))(this, a1);
		}

		::System::Void MOKNCFJICIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_MOKNCFJICIC_OFFSET))(this, a1);
		}

		::System::Void OAMMIPDLOFC(::RPG::GameCore::NpcPossessionEffectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_OAMMIPDLOFC_OFFSET))(this, a1);
		}

		::System::Void DMIJCHGKOOI(::System::Int32 a1, ::RPG::GameCore::NpcPossessionEffectConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_DMIJCHGKOOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean IAGEGCCJJDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_IAGEGCCJJDP_OFFSET))(this);
		}

		::System::Boolean EENDHENBKFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_EENDHENBKFM_OFFSET))(this);
		}

		::System::Int32 PEEEGMNCDAF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_PEEEGMNCDAF_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 KFLFGCPIBAJ(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_KFLFGCPIBAJ_OFFSET))(a1, a2);
		}

		::System::Void ONHCLAFFINE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_ONHCLAFFINE_OFFSET))(this);
		}

		::System::Void DDJFCMNMBKA(::RPG::GameCore::LevelNPCPossessionInfo* a1, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCPossessionInfo*, ::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_DDJFCMNMBKA_OFFSET))(this, a1, a2);
		}

		::System::Void HJEJBEMPMCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_HJEJBEMPMCK_OFFSET))(this);
		}

		::System::Void HIONDOHGILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_HIONDOHGILM_OFFSET))(this);
		}

		::System::Void HHKKAOJKGHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_HHKKAOJKGHH_OFFSET))(this);
		}

		::System::Boolean AICJDIOJLCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_AICJDIOJLCL_OFFSET))(this);
		}

		::System::Boolean NLPIGNLBGII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_NLPIGNLBGII_OFFSET))(this);
		}

		::RPG::Client::AttachPointMapping* LHFBEIDBCIK()
		{
			return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_LHFBEIDBCIK_OFFSET))(this);
		}

	};
