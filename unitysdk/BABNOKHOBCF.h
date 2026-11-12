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

#define BABNOKHOBCF_ACBLHHBEHNO_OFFSET UNITYSDK_OFFSET(0x1DA2F220)
#define BABNOKHOBCF_AFBLANACMBE_OFFSET UNITYSDK_OFFSET(0x1DA2FE90)
#define BABNOKHOBCF_AFDKDMPHMMB_OFFSET UNITYSDK_OFFSET(0x1DA2F2A0)
#define BABNOKHOBCF_CBIBKBNLIHN_OFFSET UNITYSDK_OFFSET(0x1DA2ED80)
#define BABNOKHOBCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA2FF20)
#define BABNOKHOBCF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA2EDD0)
#define BABNOKHOBCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2EAE0)
#define BABNOKHOBCF_EHNIINGDBIP_OFFSET UNITYSDK_OFFSET(0x1DA2F1C0)
#define BABNOKHOBCF_EJNCLDHAKDH_OFFSET UNITYSDK_OFFSET(0x1DA2FE70)
#define BABNOKHOBCF_EODAKMGDCML_OFFSET UNITYSDK_OFFSET(0x1DA2FBC0)
#define BABNOKHOBCF_FLKKHKCELPJ_OFFSET UNITYSDK_OFFSET(0x1DA2F2E0)
#define BABNOKHOBCF_FMDAICJBKIO_OFFSET UNITYSDK_OFFSET(0x1DA2F500)
#define BABNOKHOBCF_FMHDOJAEMGA_OFFSET UNITYSDK_OFFSET(0x1DA2FA00)
#define BABNOKHOBCF_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1DA2F360)
#define BABNOKHOBCF_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1DA2F340)
#define BABNOKHOBCF_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1DA2F320)
#define BABNOKHOBCF_GGGGFDCGNGH_OFFSET UNITYSDK_OFFSET(0x1DA2F4F0)
#define BABNOKHOBCF_HHKMCHONNGD_OFFSET UNITYSDK_OFFSET(0x1DA2FC70)
#define BABNOKHOBCF_HJFNBNFJMII_OFFSET UNITYSDK_OFFSET(0x1DA2F6B0)
#define BABNOKHOBCF_HOEBNEDIAOH_OFFSET UNITYSDK_OFFSET(0x1DA2F4D0)
#define BABNOKHOBCF_IAFPANKIANM_OFFSET UNITYSDK_OFFSET(0x1DA2F5A0)
#define BABNOKHOBCF_IAMFCNJBHPE_OFFSET UNITYSDK_OFFSET(0x1DA2F910)
#define BABNOKHOBCF_IDICMMBDFDP_OFFSET UNITYSDK_OFFSET(0x1DA2FD60)
#define BABNOKHOBCF_IGANKNKKNPA_OFFSET UNITYSDK_OFFSET(0x1DA2F520)
#define BABNOKHOBCF_JOKNKNHDCAM_OFFSET UNITYSDK_OFFSET(0x1DA2F670)
#define BABNOKHOBCF_KDEANPIMKJF_OFFSET UNITYSDK_OFFSET(0x1DA2FAD0)
#define BABNOKHOBCF_KHHDCODBBGK_OFFSET UNITYSDK_OFFSET(0x1DA2F4E0)
#define BABNOKHOBCF_LCLGEFPEIFO_OFFSET UNITYSDK_OFFSET(0x1DA2F2C0)
#define BABNOKHOBCF_LGFBNOBKFEA_OFFSET UNITYSDK_OFFSET(0x1DA2F460)
#define BABNOKHOBCF_MECAJMNNDCB_OFFSET UNITYSDK_OFFSET(0x1DA2F4C0)
#define BABNOKHOBCF_MGMIECCAFJO_OFFSET UNITYSDK_OFFSET(0x1DA2F280)
#define BABNOKHOBCF_MOKMNKDGDBC_OFFSET UNITYSDK_OFFSET(0x1DA2F7A0)
#define BABNOKHOBCF_NCMEPPPPNMA_OFFSET UNITYSDK_OFFSET(0x1DA2FE50)
#define BABNOKHOBCF_NLBGNIDJFED_OFFSET UNITYSDK_OFFSET(0x1DA2F300)
#define BABNOKHOBCF_NMJADFMCBFP_OFFSET UNITYSDK_OFFSET(0x1DA2F690)
#define BABNOKHOBCF_NOOPGLFIDGM_OFFSET UNITYSDK_OFFSET(0x1DA2F850)
#define BABNOKHOBCF_OEEJGCFMMJK_OFFSET UNITYSDK_OFFSET(0x1DA2F5C0)
#define BABNOKHOBCF_OLPKBCMCJBA_OFFSET UNITYSDK_OFFSET(0x1DA2F540)
#define BABNOKHOBCF_PNJMCGGJPJE_OFFSET UNITYSDK_OFFSET(0x1DA2F380)
#define BABNOKHOBCF_SET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1DA2F370)
#define BABNOKHOBCF_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1DA2F350)
#define BABNOKHOBCF_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1DA2F330)

inline static constexpr unsigned int BABNOKHOBCF_TypeDefinitionIndex = 43108;

	class BABNOKHOBCF : public ::System::Object
	{
	public:
		::System::String* JNHHIALBKEG; // 0x10
		::INMMPMDELKE* PLPFIOHDBOH; // 0x18
		::RPG::GameCore::FourRotateVoxelLevelSettings* NGIGEMJBLKK; // 0x20
		::INMMPMDELKE* FOHDAENLBFG; // 0x28
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* KDDLHEAOPOJ; // 0x30
		::RPG::GameCore::FourRotateVoxelAnimalConfig* OCFNOMADICJ; // 0x38
		::BCFLJPCHOEB* CLJIMLMCJJO; // 0x40
		::System::String* KIPDNLCHAJI; // 0x48
		::INMMPMDELKE* ODPDOBEGCOE; // 0x50
		::System::String* KGGGONDAHDL; // 0x58
		::System::String* DHMFLAILLJI; // 0x60
		::RPG::GameCore::FourRotateVoxelGameConfig* _GameConfig_k__BackingField; // 0x68
		::GAFMLDLBCEB* _FourRotateVoxelGame_k__BackingField; // 0x70
		::INMMPMDELKE* EKMEHBCMOLC; // 0x78
		::UnityEngine::Mesh* JGDGLKLJEAC; // 0x80
		::System::String* CKPKHDCLLID; // 0x88
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x90
		::BPGMFAKEGDD* BDEAGPENILK; // 0x98
		::UnityEngine::GameObject* FDFBDBKGIHH; // 0xA0
		::HFEOHNAGBKH* LAAABDCPJEG; // 0xA8
		::INMMPMDELKE* PFIOEGEPLLH; // 0xB0
		::RPG::GameCore::FourRotateVoxelGameModeConfig* BNFCFHBIJKD; // 0xB8
		::System::Boolean FABOGACKPMD; // 0xC0
		::System::Boolean EEGMCLHEDAO; // 0xC1
		::System::Boolean KPAAGEIPAGC; // 0xC2
		::System::Boolean NGELIKBAFCO; // 0xC3
		::UnityEngine::Vector3 FKJOOKKNHBL; // 0xC4
		::RPG::GameCore::FourRotateVoxelGameModeType AOKPEABPPGH; // 0xD0
		::UnityEngine::Vector3 FHIJBONKEEI; // 0xD4
		::UnityEngine::Quaternion IOLNLPDFJFL; // 0xE0
		::UnityEngine::Quaternion JDOHKCAJEKO; // 0xF0
		::System::Single ELBMFKAGNBH; // 0x100
		::System::Boolean IKFCFMHBBGF; // 0x104
		::System::Boolean NGAIOLLMLNI; // 0x105
		::System::Boolean GOOKGBHALHJ; // 0x106
		::System::Boolean CNKGKDHBPPL; // 0x107
		::UnityEngine::Vector3 MAKIIIJGLBP; // 0x108
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord LLFNHGBICJI; // 0x114
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord NBBEJJOCCEN; // 0x12C
		::UnityEngine::Vector3 JPBPFFBHJNJ; // 0x144
		::UnityEngine::Vector3 BCNGLPELJJP; // 0x150
		::RPG::GameCore::FourRotateVoxelAnimalType CIKNIALOAEA; // 0x15C
		::System::Single HDCLMLOCNNC; // 0x160
		::System::Boolean KIPMHMMDPID; // 0x164
		::System::Boolean MCLOBDBBANM; // 0x165
		::System::Boolean IBDONJBEMNK; // 0x166
		::System::Boolean DJILFHHCBKG; // 0x167
		::System::Boolean KJMIADGNLLP; // 0x168
		::System::Boolean PGEELBIPJON; // 0x169
		::System::Boolean JJBJAGEJCMB; // 0x16A
		::System::Byte _padding0[0x1];
		::System::Int32 BJODLJHNLNE; // 0x16C
		::System::Single BBACGKBCPND; // 0x170
		::System::Single NNFLEAKLBLC; // 0x174
		::System::Single KGLIEBAAAMP; // 0x178
		::UnityEngine::Vector3 GCHPCPCPHBE; // 0x17C
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet_DNHKMMNJFOM()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBED0);
		}

		static ::System::String** StaticGet_BCHFLFKLEOJ()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBED8);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_DMJHAANEAEL()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBEE0);
		}

		static ::System::String** StaticGet_GPMGBPEPDNM()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBEE8);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_HJGEDPFGHIC()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBEF0);
		}

		static ::System::String** StaticGet_GPGBELEHIIB()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBEF8);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>** StaticGet_JHEJDOKNGGG()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF00);
		}

		static ::System::String** StaticGet_PCHBOBPGDLL()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF08);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_DMCFFNFGKAE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF10);
		}

		static ::RPG::GameCore::FiveDimAvatarConfig** StaticGet_CHFHMFODDON()
		{
			return (::RPG::GameCore::FiveDimAvatarConfig**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF18);
		}

		static ::System::String** StaticGet_KMJMKPJCMLO()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF20);
		}

		static ::System::String** StaticGet_ENAGAHHDOAL()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF28);
		}

		static ::UnityEngine::GameObject** StaticGet_DAIJNJECBLM()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF30);
		}

		static ::System::String** StaticGet_PFLAJLEJLKI()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF38);
		}

		static ::System::String** StaticGet_EOCOBCIEPHD()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF40);
		}

		static ::System::String** StaticGet_CMOLDKJPOOA()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF48);
		}

		static ::System::String** StaticGet_FAJEIJBBJGI()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF50);
		}

		static ::System::String** StaticGet_KGOONLJPKDA()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF58);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_LBEOHCOMJBH()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF60);
		}

		static ::System::String** StaticGet_NDJKLDDGGOA()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF68);
		}

		static ::System::String** StaticGet_FGOFKOOPMDH()
		{
			return (::System::String**)UnitySDK::FromName("", "BABNOKHOBCF")->GetStaticField(0xBF70);
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
