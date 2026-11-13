#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayRoadMapConfig_PlayTarget.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FICJADOJGMF_FHHABLLAPHM;
class HENPLPFIHBK;
namespace RPG::Client { class WolfBroGunPlayPuzzleBoard; }
namespace RPG::Client { class WolfBroGunPlayRoadMapConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayTarget_Boss; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FICJADOJGMF_AANKHLCNJAL_OFFSET UNITYSDK_OFFSET(0x197FC910)
#define FICJADOJGMF_AHIBPPAIMFJ_OFFSET UNITYSDK_OFFSET(0x197FAEF0)
#define FICJADOJGMF_ALDHOOAIJNH_OFFSET UNITYSDK_OFFSET(0x197FC2D0)
#define FICJADOJGMF_CBGCNPOBACA_OFFSET UNITYSDK_OFFSET(0x197FBFC0)
#define FICJADOJGMF_CFPMAPHDPCB_OFFSET UNITYSDK_OFFSET(0x197FEFB0)
#define FICJADOJGMF_CTOR_OFFSET UNITYSDK_OFFSET(0x197F9C70)
#define FICJADOJGMF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x197FE2B0)
#define FICJADOJGMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197F98C0)
#define FICJADOJGMF_DJEPPBOHLAE_OFFSET UNITYSDK_OFFSET(0x197FEF50)
#define FICJADOJGMF_DMLHIBKOKJD_OFFSET UNITYSDK_OFFSET(0x197FE3E0)
#define FICJADOJGMF_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x197FEE10)
#define FICJADOJGMF_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0x197FEDA0)
#define FICJADOJGMF_FALMEDNDFEB_OFFSET UNITYSDK_OFFSET(0x197FE2F0)
#define FICJADOJGMF_FKKNPACOCEF_OFFSET UNITYSDK_OFFSET(0x197FEBF0)
#define FICJADOJGMF_FPBEAKIJEFK_OFFSET UNITYSDK_OFFSET(0x197FE270)
#define FICJADOJGMF_GAKBKHAEEAK_OFFSET UNITYSDK_OFFSET(0x197FC270)
#define FICJADOJGMF_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x197FEE20)
#define FICJADOJGMF_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0x197FEBD0)
#define FICJADOJGMF_GNBBPHHPAGC_OFFSET UNITYSDK_OFFSET(0x197FB3B0)
#define FICJADOJGMF_HAJNDBCABHF_OFFSET UNITYSDK_OFFSET(0x197FE960)
#define FICJADOJGMF_HNAFFAKGBOA_OFFSET UNITYSDK_OFFSET(0x197FD6F0)
#define FICJADOJGMF_HNCPMPBCAAB_OFFSET UNITYSDK_OFFSET(0x197FEF30)
#define FICJADOJGMF_HOHCJJMBMEI_OFFSET UNITYSDK_OFFSET(0x197FDB50)
#define FICJADOJGMF_HPLHDBIMHIN_OFFSET UNITYSDK_OFFSET(0x197FDEE0)
#define FICJADOJGMF_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x197FCF80)
#define FICJADOJGMF_IMHJCGEFPAE_OFFSET UNITYSDK_OFFSET(0x197FB070)
#define FICJADOJGMF_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0x197FA300)
#define FICJADOJGMF_JHBMHCNLAME_OFFSET UNITYSDK_OFFSET(0x197FEEC0)
#define FICJADOJGMF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x197FA6B0)
#define FICJADOJGMF_JLODJAMLGDB_OFFSET UNITYSDK_OFFSET(0x197FCCF0)
#define FICJADOJGMF_JOPMAFNHELG_OFFSET UNITYSDK_OFFSET(0x197FD0A0)
#define FICJADOJGMF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x197F9E00)
#define FICJADOJGMF_LCNCEOHKNKE_OFFSET UNITYSDK_OFFSET(0x197FEBE0)
#define FICJADOJGMF_MAJNGIDMLAI_OFFSET UNITYSDK_OFFSET(0x197FEF40)
#define FICJADOJGMF_MCBENJCJHFE_OFFSET UNITYSDK_OFFSET(0x197FC610)
#define FICJADOJGMF_MDBNDGGGHFF_OFFSET UNITYSDK_OFFSET(0x197FE360)
#define FICJADOJGMF_MEOLLONEOGC_OFFSET UNITYSDK_OFFSET(0x197FEDB0)
#define FICJADOJGMF_MFPOCPLPOCO_OFFSET UNITYSDK_OFFSET(0x197FEEB0)
#define FICJADOJGMF_MNCKHPEAEHN_OFFSET UNITYSDK_OFFSET(0x197FA470)
#define FICJADOJGMF_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x197FD1F0)
#define FICJADOJGMF_NMHEOLLHJBP_OFFSET UNITYSDK_OFFSET(0x197FEF60)
#define FICJADOJGMF_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x197FCE00)
#define FICJADOJGMF_OMNOGNLLBHD_OFFSET UNITYSDK_OFFSET(0x197FEF70)
#define FICJADOJGMF_PFJCMKAOLNI_OFFSET UNITYSDK_OFFSET(0x197FC100)
#define FICJADOJGMF_PIJAFHECHHB_OFFSET UNITYSDK_OFFSET(0x197FCCA0)
#define FICJADOJGMF_PIJFONNACEH_OFFSET UNITYSDK_OFFSET(0x197FEF20)
#define FICJADOJGMF_POGHAMKDKME_OFFSET UNITYSDK_OFFSET(0x197FA610)

inline static constexpr unsigned int FICJADOJGMF_TypeDefinitionIndex = 70702;

	class FICJADOJGMF : public ::System::Object
	{
	public:
		::RPG::Client::WolfBroGunPlayPuzzleBoard* _Puzzle_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* BJEODNOHDOJ; // 0x18
		::Il2CppArray<::System::Object*>* ENCGLLBGLDM; // 0x20
		::UnityEngine::Transform* EKODGCDDPNI; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::WolfBroGunPlayTarget*, ::System::Object*>* JOEEBLJNPNJ; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::WolfBroGunPlayTarget*>* KFJCCHGKIDB; // 0x38
		::System::Collections::Generic::List_1<::System::Single>* GIDHHEMMAMC; // 0x40
		::HENPLPFIHBK* LFFJEKDAPLO; // 0x48
		::RPG::Client::WolfBroGunPlayRoadMapConfig* IGHAHBNLIJA; // 0x50
		::System::Int32 LCLDABENFLM; // 0x58
		::System::Int32 LPMGLOOOMHE; // 0x5C
		::System::Int32 JBJDLCDKKEL; // 0x60
		::System::Int32 KFKBJMLDCGC; // 0x64
		::System::Single EOOCPHKPGBJ; // 0x68
		::System::Boolean COLDKBOIIBD; // 0x6C
		::System::Boolean MFCLFACDJDG; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single MCECCFFGDOO; // 0x70
		::System::Int32 NNJJNBHCJFG; // 0x74
		::System::Single CBPJMLPBEIG; // 0x78
		::System::Void _ctor(::RPG::Client::WolfBroGunPlayPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayPuzzleBoard*))((::PBYTE)hIl2Cpp + FICJADOJGMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1, ::RPG::Client::WolfBroGunPlayRoadMapConfig* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::WolfBroGunPlayRoadMapConfig*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FICJADOJGMF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Boolean GNBBPHHPAGC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_GNBBPHHPAGC_OFFSET))(this, a1, a2);
		}

		::System::Void PFJCMKAOLNI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FICJADOJGMF_PFJCMKAOLNI_OFFSET))(this, a1);
		}

		::System::Boolean GAKBKHAEEAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_GAKBKHAEEAK_OFFSET))(this);
		}

		::System::Single ALDHOOAIJNH(::RPG::Client::WolfBroGunPlayTarget* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + FICJADOJGMF_ALDHOOAIJNH_OFFSET))(this, a1);
		}

		::System::Void MCBENJCJHFE(::RPG::Client::WolfBroGunPlayTarget_Boss* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget_Boss*))((::PBYTE)hIl2Cpp + FICJADOJGMF_MCBENJCJHFE_OFFSET))(this, a1);
		}

		::System::Void PIJAFHECHHB(::RPG::Client::WolfBroGunPlayTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + FICJADOJGMF_PIJAFHECHHB_OFFSET))(this, a1);
		}

		::System::Void JLODJAMLGDB(::RPG::Client::WolfBroGunPlayTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + FICJADOJGMF_JLODJAMLGDB_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void JOPMAFNHELG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_JOPMAFNHELG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FICJADOJGMF_NINDHOGICJD_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 HNAFFAKGBOA(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FICJADOJGMF_HNAFFAKGBOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 HOHCJJMBMEI(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_HOHCJJMBMEI_OFFSET))(this, a1, a2);
		}

		::System::Int32 HPLHDBIMHIN(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_HPLHDBIMHIN_OFFSET))(this, a1, a2);
		}

		::System::Int32 AANKHLCNJAL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FICJADOJGMF_AANKHLCNJAL_OFFSET))(this, a1);
		}

		::System::Void FPBEAKIJEFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FPBEAKIJEFK_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void FALMEDNDFEB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_FALMEDNDFEB_OFFSET))(this, a1, a2);
		}

		::FICJADOJGMF_FHHABLLAPHM* MDBNDGGGHFF()
		{
			return ((::FICJADOJGMF_FHHABLLAPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_MDBNDGGGHFF_OFFSET))(this);
		}

		::System::Boolean MNCKHPEAEHN(::FICJADOJGMF_FHHABLLAPHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FICJADOJGMF_FHHABLLAPHM*))((::PBYTE)hIl2Cpp + FICJADOJGMF_MNCKHPEAEHN_OFFSET))(this, a1);
		}

		::System::Single DMLHIBKOKJD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_DMLHIBKOKJD_OFFSET))(this, a1);
		}

		::System::Void POGHAMKDKME(::FICJADOJGMF_FHHABLLAPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF_FHHABLLAPHM*))((::PBYTE)hIl2Cpp + FICJADOJGMF_POGHAMKDKME_OFFSET))(this, a1);
		}

		::System::Void CBGCNPOBACA(::FICJADOJGMF_FHHABLLAPHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF_FHHABLLAPHM*))((::PBYTE)hIl2Cpp + FICJADOJGMF_CBGCNPOBACA_OFFSET))(this, a1);
		}

		::System::Void AHIBPPAIMFJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_AHIBPPAIMFJ_OFFSET))(this, a1);
		}

		::System::Void IMHJCGEFPAE(::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayRoadMapConfig_PlayTarget))((::PBYTE)hIl2Cpp + FICJADOJGMF_IMHJCGEFPAE_OFFSET))(this, a1);
		}

		::System::Void HAJNDBCABHF(::RPG::Client::WolfBroGunPlayTarget_Group* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + FICJADOJGMF_HAJNDBCABHF_OFFSET))(this, a1);
		}

		::RPG::Client::WolfBroGunPlayPuzzleBoard* get_Puzzle()
		{
			return ((::RPG::Client::WolfBroGunPlayPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_GET_PUZZLE_OFFSET))(this);
		}

		::HENPLPFIHBK* LCNCEOHKNKE()
		{
			return ((::HENPLPFIHBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_LCNCEOHKNKE_OFFSET))(this);
		}

		::UnityEngine::Vector3 FKKNPACOCEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_FKKNPACOCEF_OFFSET))(this);
		}

		::System::Single EANLMIKHCKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_EANLMIKHCKG_OFFSET))(this);
		}

		::System::Single MEOLLONEOGC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_MEOLLONEOGC_OFFSET))(this);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Single MFPOCPLPOCO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_MFPOCPLPOCO_OFFSET))(this);
		}

		::System::Single JHBMHCNLAME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_JHBMHCNLAME_OFFSET))(this);
		}

		::System::Int32 PIJFONNACEH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_PIJFONNACEH_OFFSET))(this);
		}

		::System::Int32 HNCPMPBCAAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_HNCPMPBCAAB_OFFSET))(this);
		}

		::System::Int32 MAJNGIDMLAI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_MAJNGIDMLAI_OFFSET))(this);
		}

		::System::Int32 DJEPPBOHLAE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_DJEPPBOHLAE_OFFSET))(this);
		}

		::System::Int32 NMHEOLLHJBP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_NMHEOLLHJBP_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* OMNOGNLLBHD()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICJADOJGMF_OMNOGNLLBHD_OFFSET))(this);
		}

		::System::Void CFPMAPHDPCB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FICJADOJGMF_CFPMAPHDPCB_OFFSET))(this, a1);
		}

	};
