#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
class GEDMHFPPBHN;
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;
class PLIAMMCJPEG;
namespace RPG::Client { template <typename T> class BattleAcquireReusablePanelVisitor_1; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define GNFODCFLEMH_AFCJHIGGPGD_OFFSET UNITYSDK_OFFSET(0x15B02EE0)
#define GNFODCFLEMH_APGAMLHAFEG_OFFSET UNITYSDK_OFFSET(0x15B02870)
#define GNFODCFLEMH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B06870)
#define GNFODCFLEMH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15B06A50)
#define GNFODCFLEMH_BDJJKNDLLPH_OFFSET UNITYSDK_OFFSET(0x15B027B0)
#define GNFODCFLEMH_BDMHFAOHFBD_OFFSET UNITYSDK_OFFSET(0x15B036D0)
#define GNFODCFLEMH_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15B02A20)
#define GNFODCFLEMH_CHFCAPEABDL_OFFSET UNITYSDK_OFFSET(0x15B06290)
#define GNFODCFLEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B06C00)
#define GNFODCFLEMH_DFBIOGOEIDA_OFFSET UNITYSDK_OFFSET(0x15B03AF0)
#define GNFODCFLEMH_EEFLHNELCBN_OFFSET UNITYSDK_OFFSET(0x15B02C60)
#define GNFODCFLEMH_EEGJEONFCON_OFFSET UNITYSDK_OFFSET(0x15B02810)
#define GNFODCFLEMH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B024E0)
#define GNFODCFLEMH_ELALABGGHIF_OFFSET UNITYSDK_OFFSET(0x15B05FE0)
#define GNFODCFLEMH_ELPJBJIKGPL_OFFSET UNITYSDK_OFFSET(0x15B031F0)
#define GNFODCFLEMH_FIOMPIPCKLH_OFFSET UNITYSDK_OFFSET(0x15B04D90)
#define GNFODCFLEMH_GOLCFFOHPFF_OFFSET UNITYSDK_OFFSET(0x15B06750)
#define GNFODCFLEMH_IGFDACCJLDB_OFFSET UNITYSDK_OFFSET(0x15B05DA0)
#define GNFODCFLEMH_IPGDNIBBFNI_OFFSET UNITYSDK_OFFSET(0x15B06210)
#define GNFODCFLEMH_KCGOBHMNDAC_OFFSET UNITYSDK_OFFSET(0x15B06600)
#define GNFODCFLEMH_KEJILDLIFLF_OFFSET UNITYSDK_OFFSET(0x15B06440)
#define GNFODCFLEMH_KOMOLLKKMKA_OFFSET UNITYSDK_OFFSET(0x15B062E0)
#define GNFODCFLEMH_LBFLHOJAHFM_OFFSET UNITYSDK_OFFSET(0x15B05AE0)
#define GNFODCFLEMH_MDIJGFFCFAM_OFFSET UNITYSDK_OFFSET(0x15B025F0)
#define GNFODCFLEMH_NALMCLCNNKH_OFFSET UNITYSDK_OFFSET(0x15B06500)
#define GNFODCFLEMH_NFDNEELHOGG_OFFSET UNITYSDK_OFFSET(0x15B066C0)
#define GNFODCFLEMH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15B02670)
#define GNFODCFLEMH_OFLFCHNNIMM_OFFSET UNITYSDK_OFFSET(0x15B058B0)
#define GNFODCFLEMH_OPGLCNHJHBD_OFFSET UNITYSDK_OFFSET(0x15B05620)
#define GNFODCFLEMH_PPNNPCHJGCD_1_OFFSET UNITYSDK_OFFSET(0x15B06360)
#define GNFODCFLEMH_PPNNPCHJGCD_OFFSET UNITYSDK_OFFSET(0x15B05800)
#define GNFODCFLEMH__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B024A0)
#define GNFODCFLEMH__ONTICK_OFFSET UNITYSDK_OFFSET(0x15B02520)
#define GNFODCFLEMH___UPDATEAVATARSPANEL_B__19_0_OFFSET UNITYSDK_OFFSET(0x15B06DA0)

inline static constexpr unsigned int GNFODCFLEMH_TypeDefinitionIndex = 71448;

	class GNFODCFLEMH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* PFKMADCJMBA; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterHUDType, ::System::Collections::Generic::Stack_1<::LEEEHNMHAAP*>*>* ICEBFOHEJDN; // 0x68
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x70
		::PLIAMMCJPEG* LKEHDAJMJFK; // 0x78
		::System::Collections::Generic::List_1<::LEEEHNMHAAP*>* AKKPMKLHKAP; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OIJHDOCDBFP; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BNHDNFJKBHP; // 0x90
		::PLIAMMCJPEG* PLJJCEDJAJP; // 0x98
		::RPG::Client::BattleAcquireReusablePanelVisitor_1<::RPG::GameCore::GameEntity*>* CICIFCJLLPJ; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KKJJMFFGIGP; // 0xA8
		::RPG::Client::BattleAcquireReusablePanelVisitor_1<::System::Int32>* IENLPFAGENG; // 0xB0
		::System::Single BMMFLIDGHCK; // 0xB8
		::System::Boolean OPHCFJKDFGP; // 0xBC
		// static const ::System::Object KPMHCLPKFPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNFODCFLEMH__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void BDJJKNDLLPH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNFODCFLEMH_BDJJKNDLLPH_OFFSET))(this, a1);
		}

		::System::Void EEGJEONFCON(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_EEGJEONFCON_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNFODCFLEMH_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void EEFLHNELCBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_EEFLHNELCBN_OFFSET))(this);
		}

		::System::Void AFCJHIGGPGD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_AFCJHIGGPGD_OFFSET))(this, a1);
		}

		::System::Void ELPJBJIKGPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNFODCFLEMH_ELPJBJIKGPL_OFFSET))(this, a1);
		}

		::System::Void BDMHFAOHFBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_BDMHFAOHFBD_OFFSET))(this);
		}

		::System::Void DFBIOGOEIDA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_DFBIOGOEIDA_OFFSET))(this, a1);
		}

		::System::Void FIOMPIPCKLH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_FIOMPIPCKLH_OFFSET))(this, a1);
		}

		::LEEEHNMHAAP* OFLFCHNNIMM(::GIPFFGFJCBF_PBICBEEGHJO* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::GIPFFGFJCBF_PBICBEEGHJO*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_OFLFCHNNIMM_OFFSET))(this, a1);
		}

		::LEEEHNMHAAP* OPGLCNHJHBD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_OPGLCNHJHBD_OFFSET))(this, a1);
		}

		::System::Void MDIJGFFCFAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_MDIJGFFCFAM_OFFSET))(this);
		}

		::System::Void IGFDACCJLDB(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_IGFDACCJLDB_OFFSET))(this, a1);
		}

		::System::Void ELALABGGHIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_ELALABGGHIF_OFFSET))(this);
		}

		::System::Void IPGDNIBBFNI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_IPGDNIBBFNI_OFFSET))(this, a1);
		}

		::System::Void APGAMLHAFEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_APGAMLHAFEG_OFFSET))(this);
		}

		::LEEEHNMHAAP* PPNNPCHJGCD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_PPNNPCHJGCD_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterHUDType KOMOLLKKMKA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_KOMOLLKKMKA_OFFSET))(this, a1);
		}

		::LEEEHNMHAAP* PPNNPCHJGCD_1(::RPG::GameCore::CharacterHUDType a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + GNFODCFLEMH_PPNNPCHJGCD_1_OFFSET))(this, a1);
		}

		::System::Void LBFLHOJAHFM(::LEEEHNMHAAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEEEHNMHAAP*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_LBFLHOJAHFM_OFFSET))(this, a1);
		}

		::System::Boolean CHFCAPEABDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_CHFCAPEABDL_OFFSET))(this);
		}

		::System::Void KEJILDLIFLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_KEJILDLIFLF_OFFSET))(this, a1);
		}

		::System::Void NALMCLCNNKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_NALMCLCNNKH_OFFSET))(this, a1);
		}

		::System::Void KCGOBHMNDAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_KCGOBHMNDAC_OFFSET))(this, a1);
		}

		::System::Void NFDNEELHOGG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_NFDNEELHOGG_OFFSET))(this, a1);
		}

		::System::Void GOLCFFOHPFF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFODCFLEMH_GOLCFFOHPFF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFODCFLEMH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Int32 __UpdateAvatarsPanel_b__19_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GNFODCFLEMH___UPDATEAVATARSPANEL_B__19_0_OFFSET))(this, a1, a2);
		}

	};
