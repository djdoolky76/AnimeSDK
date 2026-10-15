#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BCFLJPCHOEB;
class BPGMFAKEGDD;
class GAFMLDLBCEB;
class HFEOHNAGBKH;
class INMMPMDELKE;
namespace Entitas { class IContext; }
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FourRotateVoxelAnimalConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameModeConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define BABNOKHOBCF_ACBLHHBEHNO_OFFSET UNITYSDK_OFFSET(0x1C8803F0)
#define BABNOKHOBCF_AFBLANACMBE_OFFSET UNITYSDK_OFFSET(0x1C881020)
#define BABNOKHOBCF_AFDKDMPHMMB_OFFSET UNITYSDK_OFFSET(0x1C880470)
#define BABNOKHOBCF_CBIBKBNLIHN_OFFSET UNITYSDK_OFFSET(0x1C87FF60)
#define BABNOKHOBCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8810B0)
#define BABNOKHOBCF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C87FFB0)
#define BABNOKHOBCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C87FCB0)
#define BABNOKHOBCF_EHNIINGDBIP_OFFSET UNITYSDK_OFFSET(0x1C880390)
#define BABNOKHOBCF_EJNCLDHAKDH_OFFSET UNITYSDK_OFFSET(0x1C881000)
#define BABNOKHOBCF_EODAKMGDCML_OFFSET UNITYSDK_OFFSET(0x1C880D70)
#define BABNOKHOBCF_FLKKHKCELPJ_OFFSET UNITYSDK_OFFSET(0x1C8804B0)
#define BABNOKHOBCF_FMDAICJBKIO_OFFSET UNITYSDK_OFFSET(0x1C8806D0)
#define BABNOKHOBCF_FMHDOJAEMGA_OFFSET UNITYSDK_OFFSET(0x1C880BC0)
#define BABNOKHOBCF_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C880530)
#define BABNOKHOBCF_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1C880510)
#define BABNOKHOBCF_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1C8804F0)
#define BABNOKHOBCF_GGGGFDCGNGH_OFFSET UNITYSDK_OFFSET(0x1C8806C0)
#define BABNOKHOBCF_HHKMCHONNGD_OFFSET UNITYSDK_OFFSET(0x1C880E20)
#define BABNOKHOBCF_HJFNBNFJMII_OFFSET UNITYSDK_OFFSET(0x1C880880)
#define BABNOKHOBCF_HOEBNEDIAOH_OFFSET UNITYSDK_OFFSET(0x1C8806A0)
#define BABNOKHOBCF_IAFPANKIANM_OFFSET UNITYSDK_OFFSET(0x1C880770)
#define BABNOKHOBCF_IAMFCNJBHPE_OFFSET UNITYSDK_OFFSET(0x1C880AE0)
#define BABNOKHOBCF_IDICMMBDFDP_OFFSET UNITYSDK_OFFSET(0x1C880F00)
#define BABNOKHOBCF_IGANKNKKNPA_OFFSET UNITYSDK_OFFSET(0x1C8806F0)
#define BABNOKHOBCF_JOKNKNHDCAM_OFFSET UNITYSDK_OFFSET(0x1C880840)
#define BABNOKHOBCF_KDEANPIMKJF_OFFSET UNITYSDK_OFFSET(0x1C880C90)
#define BABNOKHOBCF_KHHDCODBBGK_OFFSET UNITYSDK_OFFSET(0x1C8806B0)
#define BABNOKHOBCF_LCLGEFPEIFO_OFFSET UNITYSDK_OFFSET(0x1C880490)
#define BABNOKHOBCF_LGFBNOBKFEA_OFFSET UNITYSDK_OFFSET(0x1C880630)
#define BABNOKHOBCF_MECAJMNNDCB_OFFSET UNITYSDK_OFFSET(0x1C880690)
#define BABNOKHOBCF_MGMIECCAFJO_OFFSET UNITYSDK_OFFSET(0x1C880450)
#define BABNOKHOBCF_MOKMNKDGDBC_OFFSET UNITYSDK_OFFSET(0x1C880970)
#define BABNOKHOBCF_NCMEPPPPNMA_OFFSET UNITYSDK_OFFSET(0x1C880FE0)
#define BABNOKHOBCF_NLBGNIDJFED_OFFSET UNITYSDK_OFFSET(0x1C8804D0)
#define BABNOKHOBCF_NMJADFMCBFP_OFFSET UNITYSDK_OFFSET(0x1C880860)
#define BABNOKHOBCF_NOOPGLFIDGM_OFFSET UNITYSDK_OFFSET(0x1C880A20)
#define BABNOKHOBCF_OEEJGCFMMJK_OFFSET UNITYSDK_OFFSET(0x1C880790)
#define BABNOKHOBCF_OLPKBCMCJBA_OFFSET UNITYSDK_OFFSET(0x1C880710)
#define BABNOKHOBCF_PNJMCGGJPJE_OFFSET UNITYSDK_OFFSET(0x1C880550)
#define BABNOKHOBCF_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C880540)
#define BABNOKHOBCF_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1C880520)
#define BABNOKHOBCF_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1C880500)

inline static constexpr unsigned int BABNOKHOBCF_TypeDefinitionIndex = 42133;

	class BABNOKHOBCF : public ::System::Object
	{
	public:
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
		::UnityEngine::GameObject* FDFBDBKGIHH; // 0x18
		::RPG::GameCore::FourRotateVoxelLevelSettings* NGIGEMJBLKK; // 0x20
		::BPGMFAKEGDD* BDEAGPENILK; // 0x28
		::INMMPMDELKE* PLPFIOHDBOH; // 0x30
		::INMMPMDELKE* ODPDOBEGCOE; // 0x38
		::RPG::GameCore::FourRotateVoxelAnimalConfig* OCFNOMADICJ; // 0x40
		::INMMPMDELKE* EKMEHBCMOLC; // 0x48
		::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x50
		::HFEOHNAGBKH* LAAABDCPJEG; // 0x58
		::RPG::GameCore::FourRotateVoxelGameModeConfig* BNFCFHBIJKD; // 0x60
		::GAFMLDLBCEB* _FourRotateVoxelGame_k__BackingField; // 0x68
		::System::String* JNHHIALBKEG; // 0x70
		::BCFLJPCHOEB* CLJIMLMCJJO; // 0x78
		::System::String* CKPKHDCLLID; // 0x80
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* KDDLHEAOPOJ; // 0x88
		::INMMPMDELKE* PFIOEGEPLLH; // 0x90
		::System::String* KGGGONDAHDL; // 0x98
		::UnityEngine::Mesh* JGDGLKLJEAC; // 0xA0
		::System::String* KIPDNLCHAJI; // 0xA8
		::INMMPMDELKE* FOHDAENLBFG; // 0xB0
		::System::String* DHMFLAILLJI; // 0xB8
		::System::Int32 BJODLJHNLNE; // 0xC0
		::UnityEngine::Vector3 FHIJBONKEEI; // 0xC4
		::System::Single ELBMFKAGNBH; // 0xD0
		::System::Boolean IKFCFMHBBGF; // 0xD4
		::System::Boolean CNKGKDHBPPL; // 0xD5
		::System::Boolean KPAAGEIPAGC; // 0xD6
		::System::Boolean NGELIKBAFCO; // 0xD7
		::System::Boolean KIPMHMMDPID; // 0xD8
		::System::Boolean EEGMCLHEDAO; // 0xD9
		::System::Boolean GOOKGBHALHJ; // 0xDA
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 BCNGLPELJJP; // 0xDC
		::RPG::GameCore::FourRotateVoxelAnimalType CIKNIALOAEA; // 0xE8
		::System::Single HDCLMLOCNNC; // 0xEC
		::System::Boolean DJILFHHCBKG; // 0xF0
		::System::Boolean PGEELBIPJON; // 0xF1
		::System::Boolean IBDONJBEMNK; // 0xF2
		::System::Boolean MCLOBDBBANM; // 0xF3
		::System::Boolean NGAIOLLMLNI; // 0xF4
		::System::Boolean FABOGACKPMD; // 0xF5
		::System::Boolean JJBJAGEJCMB; // 0xF6
		::System::Boolean KJMIADGNLLP; // 0xF7
		::RPG::GameCore::FourRotateVoxelGameModeType AOKPEABPPGH; // 0xF8
		::System::Single BBACGKBCPND; // 0xFC
		::UnityEngine::Vector3 FKJOOKKNHBL; // 0x100
		::System::Single NNFLEAKLBLC; // 0x10C
		::UnityEngine::Quaternion IOLNLPDFJFL; // 0x110
		::UnityEngine::Quaternion JDOHKCAJEKO; // 0x120
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord LLFNHGBICJI; // 0x130
		::UnityEngine::Vector3 JPBPFFBHJNJ; // 0x148
		::UnityEngine::Vector3 MAKIIIJGLBP; // 0x154
		::System::Single KGLIEBAAAMP; // 0x160
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord NBBEJJOCCEN; // 0x164
		::UnityEngine::Vector3 GCHPCPCPHBE; // 0x17C
		static ::System::String** StaticGet_FGOFKOOPMDH()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12320);
		}

		static ::System::String** StaticGet_GPGBELEHIIB()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12328);
		}

		static ::System::String** StaticGet_PCHBOBPGDLL()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12330);
		}

		static ::System::String** StaticGet_KGOONLJPKDA()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12338);
		}

		static ::System::String** StaticGet_ENAGAHHDOAL()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12340);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_LBEOHCOMJBH()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12348);
		}

		static ::System::String** StaticGet_GPMGBPEPDNM()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12350);
		}

		static ::System::String** StaticGet_PFLAJLEJLKI()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12358);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_HJGEDPFGHIC()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12360);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_DNHKMMNJFOM()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12368);
		}

		static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_CHFHMFODDON()
		{
			return (::RPG::GameCore::FiveDimAvatarConfig**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12370);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_JHEJDOKNGGG()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12378);
		}

		static ::System::String** StaticGet_CMOLDKJPOOA()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12380);
		}

		static ::System::String** StaticGet_EOCOBCIEPHD()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12388);
		}

		static ::System::String** StaticGet_FAJEIJBBJGI()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12390);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_DMJHAANEAEL()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x12398);
		}

		static ::System::String** StaticGet_NDJKLDDGGOA()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x123A0);
		}

		static ::System::String** StaticGet_KMJMKPJCMLO()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x123A8);
		}

		static ::System::String** StaticGet_BCHFLFKLEOJ()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x123B0);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_DMCFFNFGKAE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x123B8);
		}

		static ::UnityEngine::GameObject** StaticGet_DAIJNJECBLM()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0x123C0);
		}

		// static const ::System::String* ELCALOLOFEK; // 0x0
		// static const ::System::String* JFMMAEPKFEG; // 0x0
		// static const ::System::String* AIFLAECOIEF; // 0x0
		// static const ::System::String* BAHLOPBKNKA; // 0x0
		// static const ::System::String* AFPKOAJCKAH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABNOKHOBCF_CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_CLEAR_OFFSET))(this);
		}

		::System::Void CBIBKBNLIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_CBIBKBNLIHN_OFFSET))(this);
		}

		::RPG::GameCore::FourRotateVoxelGameConfig* get_GameConfig()
		{
			return ((::RPG::GameCore::FourRotateVoxelGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::GameCore::FourRotateVoxelGameConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGameConfig*))((::PBYTE)hIl2Cpp + BABNOKHOBCF_SET_GAMECONFIG_OFFSET))(this, a1);
		}

		::GAFMLDLBCEB* get_FourRotateVoxelGame()
		{
			return ((::GAFMLDLBCEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_GET_FOURROTATEVOXELGAME_OFFSET))(this);
		}

		::System::Void set_FourRotateVoxelGame(::GAFMLDLBCEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAFMLDLBCEB*))((::PBYTE)hIl2Cpp + BABNOKHOBCF_SET_FOURROTATEVOXELGAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_GET_ALLCONTEXTS_OFFSET))(this);
		}

		::System::Void set_allContexts(::Il2CppArray<::Entitas::IContext*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Entitas::IContext*>*))((::PBYTE)hIl2Cpp + BABNOKHOBCF_SET_ALLCONTEXTS_OFFSET))(this, a1);
		}

		::System::Int32 PNJMCGGJPJE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_PNJMCGGJPJE_OFFSET))(this);
		}

		::System::Boolean LGFBNOBKFEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_LGFBNOBKFEA_OFFSET))(this);
		}

		::System::Boolean MECAJMNNDCB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_MECAJMNNDCB_OFFSET))(this);
		}

		::System::Void HOEBNEDIAOH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABNOKHOBCF_HOEBNEDIAOH_OFFSET))(this, a1);
		}

		::INMMPMDELKE* KHHDCODBBGK()
		{
			return ((::INMMPMDELKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_KHHDCODBBGK_OFFSET))(this);
		}

		::System::Void EHNIINGDBIP(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + BABNOKHOBCF_EHNIINGDBIP_OFFSET))(this, a1);
		}

		::System::Boolean GGGGFDCGNGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_GGGGFDCGNGH_OFFSET))(this);
		}

		::System::Void ACBLHHBEHNO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABNOKHOBCF_ACBLHHBEHNO_OFFSET))(this, a1);
		}

		::System::Boolean FMDAICJBKIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_FMDAICJBKIO_OFFSET))(this);
		}

		::System::Void MGMIECCAFJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABNOKHOBCF_MGMIECCAFJO_OFFSET))(this, a1);
		}

		::System::Boolean IGANKNKKNPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_IGANKNKKNPA_OFFSET))(this);
		}

		::System::Void AFDKDMPHMMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABNOKHOBCF_AFDKDMPHMMB_OFFSET))(this, a1);
		}

		::System::Boolean OLPKBCMCJBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_OLPKBCMCJBA_OFFSET))(this);
		}

		::System::Int32 IAFPANKIANM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_IAFPANKIANM_OFFSET))(this);
		}

		::System::Void LCLGEFPEIFO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABNOKHOBCF_LCLGEFPEIFO_OFFSET))(this, a1);
		}

		::System::Int32 OEEJGCFMMJK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABNOKHOBCF_OEEJGCFMMJK_OFFSET))(this, a1);
		}

		::System::Int32 JOKNKNHDCAM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_JOKNKNHDCAM_OFFSET))(this);
		}

		::System::Void FLKKHKCELPJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABNOKHOBCF_FLKKHKCELPJ_OFFSET))(this, a1);
		}

		::System::Single NMJADFMCBFP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_NMJADFMCBFP_OFFSET))(this);
		}

		::System::Void NLBGNIDJFED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BABNOKHOBCF_NLBGNIDJFED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HJFNBNFJMII(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABNOKHOBCF_HJFNBNFJMII_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection MOKMNKDGDBC(::System::Int32 a1)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABNOKHOBCF_MOKMNKDGDBC_OFFSET))(this, a1);
		}

		::System::Int32 NOOPGLFIDGM(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection))((::PBYTE)hIl2Cpp + BABNOKHOBCF_NOOPGLFIDGM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IAMFCNJBHPE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_IAMFCNJBHPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 FMHDOJAEMGA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_FMHDOJAEMGA_OFFSET))(this);
		}

		::UnityEngine::Vector3 KDEANPIMKJF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_KDEANPIMKJF_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection EODAKMGDCML()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_EODAKMGDCML_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHKMCHONNGD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_HHKMCHONNGD_OFFSET))(this);
		}

		::UnityEngine::Vector3 IDICMMBDFDP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_IDICMMBDFDP_OFFSET))(this);
		}

		::UnityEngine::Vector3 NCMEPPPPNMA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_NCMEPPPPNMA_OFFSET))(this);
		}

		::UnityEngine::Vector3 EJNCLDHAKDH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_EJNCLDHAKDH_OFFSET))(this);
		}

		::UnityEngine::GameObject* AFBLANACMBE()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABNOKHOBCF_AFBLANACMBE_OFFSET))(this);
		}

	};
