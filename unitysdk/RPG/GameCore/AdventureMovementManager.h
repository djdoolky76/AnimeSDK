#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/EAdventureMovementUnavailableReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KKIGPBMNMMB.h"
class IMBGFBOEJNG;
class KMEOMKNPNCC;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class SphereCollider; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ANGJHGHBCKG_OFFSET UNITYSDK_OFFSET(0x19FD2980)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BAMLCGAJION_1_OFFSET UNITYSDK_OFFSET(0x19FD4140)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BAMLCGAJION_OFFSET UNITYSDK_OFFSET(0x19FD40B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BCDDFJMGCAA_OFFSET UNITYSDK_OFFSET(0x19FD7EB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x19FD7EE0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CEOFOHDBDHC_OFFSET UNITYSDK_OFFSET(0x19FD5E60)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_DCGGMONBLNA_OFFSET UNITYSDK_OFFSET(0x19FD4520)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_DEADPCNDLMC_OFFSET UNITYSDK_OFFSET(0x19FD4EB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_DKLDBEIPION_OFFSET UNITYSDK_OFFSET(0x19FD31B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_EEONEKKGNLD_OFFSET UNITYSDK_OFFSET(0x19FD4210)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ENLECHHDJLO_OFFSET UNITYSDK_OFFSET(0x19FD48C0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_EPAPIBEPGOA_OFFSET UNITYSDK_OFFSET(0x19FD7010)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_FALFHJAPMKA_OFFSET UNITYSDK_OFFSET(0x19FD4810)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_FDPEMOAAAGE_OFFSET UNITYSDK_OFFSET(0x19FD2DA0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_FFGNEJIMBKN_OFFSET UNITYSDK_OFFSET(0x19FD50C0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_GNPEHHHPNPC_OFFSET UNITYSDK_OFFSET(0x19FD3F70)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_HGDLCGAHMAF_OFFSET UNITYSDK_OFFSET(0x19FD7630)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_HNJKBBEPAPB_OFFSET UNITYSDK_OFFSET(0x19FD7C60)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_HPLMIGLAOJP_OFFSET UNITYSDK_OFFSET(0x19FD7E20)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_IEGPKNHAJIG_OFFSET UNITYSDK_OFFSET(0x19FD4FA0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_JCMHHKJHKMD_OFFSET UNITYSDK_OFFSET(0x19FD4AF0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_KANLLLNLNJH_OFFSET UNITYSDK_OFFSET(0x19FD7E50)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_KCDMFMEIEOO_OFFSET UNITYSDK_OFFSET(0x19FD4950)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_MAJBJCNFKEI_OFFSET UNITYSDK_OFFSET(0x19FD3ED0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_MIPJKLPEFAC_OFFSET UNITYSDK_OFFSET(0x19FD2C60)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_MJHJBNHNEAD_OFFSET UNITYSDK_OFFSET(0x19FD35B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_OIFIJDGCPAM_OFFSET UNITYSDK_OFFSET(0x19FD3DB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_OMONIEFEDOF_OFFSET UNITYSDK_OFFSET(0x19FD4A00)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x19FD23E0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_OPDNPLFBCIP_OFFSET UNITYSDK_OFFSET(0x19FD4B90)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_PAGOLNDFABP_OFFSET UNITYSDK_OFFSET(0x19FD2D30)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_PBKMPHKPMPA_OFFSET UNITYSDK_OFFSET(0x19FD3C90)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_PMBMIMAIEPA_OFFSET UNITYSDK_OFFSET(0x19FD4A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_TypeDefinitionIndex = 58323;

	class AdventureMovementManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_FKKIMNDJMNG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9C0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_IMHCGKGKDPD()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9C8);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_OMOAPGNFAEE()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9D0);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>** StaticGet_FAAGLFMDABJ()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AdventureCharacterController*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9D8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_CIANLIDPIDL()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9E0);
		}

		static ::System::Collections::Generic::List_1<::KMEOMKNPNCC*>** StaticGet_GBMOBDLENJA()
		{
			return (::System::Collections::Generic::List_1<::KMEOMKNPNCC*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9E8);
		}

		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_OKEHGGOFIEO()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9F0);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_CHBMBIHEMAM()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1C9F8);
		}

		static ::IMBGFBOEJNG** StaticGet_PMKJHEJEMCN()
		{
			return (::IMBGFBOEJNG**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA00);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_IDCLCAFPDLN()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA08);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_JHIMGMGEHHA()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA10);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_ADLIAAAPCBE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA18);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_DAOHKGFNDIG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA20);
		}

		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_HECGDILNKAL()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA28);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_OKFDCIGNHDN()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA30);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_HIMBONECCJK()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x1CA38);
		}

		static ::System::Int32* StaticGet_NOIEMNLMACN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x6380);
		}

		static ::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>* StaticGet_LJONLPEEFML()
		{
			return (::RPG::Client::ReasonBool_1<::RPG::GameCore::EAdventureMovementUnavailableReason>*)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x6388);
		}

		static ::UnityEngine::Vector3* StaticGet_AIABECPNABD()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x6390);
		}

		static ::System::Boolean* StaticGet_PKFKODACMID()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x639C);
		}

		static ::System::Boolean* StaticGet_ANFMAGBEJAC()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x639D);
		}

		static ::System::Boolean* StaticGet_KEHLLDBEEPD()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "AdventureMovementManager")->GetStaticField(0x639E);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Void OnGamePlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ONGAMEPLAY_OFFSET))();
		}

		static ::System::Void ANGJHGHBCKG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ANGJHGHBCKG_OFFSET))();
		}

		static ::System::Void MIPJKLPEFAC(::RPG::GameCore::EAdventureMovementUnavailableReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::EAdventureMovementUnavailableReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_MIPJKLPEFAC_OFFSET))(a1, a2);
		}

		static ::System::Void PAGOLNDFABP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_PAGOLNDFABP_OFFSET))();
		}

		static ::System::Void FDPEMOAAAGE(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_FDPEMOAAAGE_OFFSET))(a1);
		}

		static ::System::Void DKLDBEIPION(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_DKLDBEIPION_OFFSET))(a1);
		}

		static ::System::Boolean MJHJBNHNEAD(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_MJHJBNHNEAD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean PBKMPHKPMPA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_PBKMPHKPMPA_OFFSET))(a1);
		}

		static ::System::Boolean OIFIJDGCPAM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_OIFIJDGCPAM_OFFSET))(a1);
		}

		static ::System::Boolean MAJBJCNFKEI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_MAJBJCNFKEI_OFFSET))(a1);
		}

		static ::System::Boolean GNPEHHHPNPC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_GNPEHHHPNPC_OFFSET))(a1);
		}

		static ::System::Boolean BAMLCGAJION(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BAMLCGAJION_OFFSET))(a1);
		}

		static ::System::Boolean BAMLCGAJION_1(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BAMLCGAJION_1_OFFSET))(a1);
		}

		static ::System::Void EEONEKKGNLD(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_EEONEKKGNLD_OFFSET))(a1);
		}

		static ::System::Void DCGGMONBLNA(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_DCGGMONBLNA_OFFSET))(a1);
		}

		static ::System::Void FALFHJAPMKA(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_FALFHJAPMKA_OFFSET))(a1);
		}

		static ::System::Void ENLECHHDJLO(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_ENLECHHDJLO_OFFSET))(a1);
		}

		static ::System::Void KCDMFMEIEOO(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_KCDMFMEIEOO_OFFSET))(a1);
		}

		static ::System::Void OMONIEFEDOF(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_OMONIEFEDOF_OFFSET))(a1);
		}

		static ::System::Boolean PMBMIMAIEPA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_PMBMIMAIEPA_OFFSET))();
		}

		static ::System::Void JCMHHKJHKMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_JCMHHKJHKMD_OFFSET))(a1);
		}

		static ::System::Void DEADPCNDLMC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_DEADPCNDLMC_OFFSET))();
		}

		static ::System::Void IEGPKNHAJIG(::RPG::GameCore::AdventureCharacterController* a1, ::KKIGPBMNMMB a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdventureCharacterController*, ::KKIGPBMNMMB))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_IEGPKNHAJIG_OFFSET))(a1, a2);
		}

		static ::System::Void FFGNEJIMBKN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_FFGNEJIMBKN_OFFSET))();
		}

		static ::System::Void CEOFOHDBDHC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CEOFOHDBDHC_OFFSET))();
		}

		static ::System::Void HGDLCGAHMAF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_HGDLCGAHMAF_OFFSET))();
		}

		static ::System::Void HNJKBBEPAPB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_HNJKBBEPAPB_OFFSET))(a1);
		}

		static ::System::Void EPAPIBEPGOA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_EPAPIBEPGOA_OFFSET))();
		}

		static ::System::Void OPDNPLFBCIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_OPDNPLFBCIP_OFFSET))();
		}

		static ::IMBGFBOEJNG* HPLMIGLAOJP()
		{
			return ((::IMBGFBOEJNG*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_HPLMIGLAOJP_OFFSET))();
		}

		static ::System::Boolean KANLLLNLNJH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_KANLLLNLNJH_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::KMEOMKNPNCC*>* BCDDFJMGCAA()
		{
			return ((::System::Collections::Generic::List_1<::KMEOMKNPNCC*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_BCDDFJMGCAA_OFFSET))();
		}

	};
}
