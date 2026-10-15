#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EANKAFJCEEH;
class EHLKMDOAFOB;
class KANKEPCJION_JNLBIIDFHMK;
class OKKEMIFLDEO;
namespace RPG::Client { class SkillDetailInfoDialogInitParam; }
namespace RPG::Client { class SkillDetailInfoDialogInitParam_RelatedSkillDetailParam; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHLKMDOAFOB_ABBGACPDLMC_OFFSET UNITYSDK_OFFSET(0x154B1D10)
#define EHLKMDOAFOB_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x154AFEE0)
#define EHLKMDOAFOB_BJFNAHKKLME_OFFSET UNITYSDK_OFFSET(0x154B1750)
#define EHLKMDOAFOB_BMPJGGCCDMO_OFFSET UNITYSDK_OFFSET(0x154B0730)
#define EHLKMDOAFOB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154AFE10)
#define EHLKMDOAFOB_CAEOGPKKBJK_OFFSET UNITYSDK_OFFSET(0x154B0C40)
#define EHLKMDOAFOB_CEMDEEPKJJO_OFFSET UNITYSDK_OFFSET(0x154B1430)
#define EHLKMDOAFOB_CTOR_OFFSET UNITYSDK_OFFSET(0x154AFED0)
#define EHLKMDOAFOB_EOEIPIPHOEK_OFFSET UNITYSDK_OFFSET(0x154B08A0)
#define EHLKMDOAFOB_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x154B0120)
#define EHLKMDOAFOB_GET_FILLEDCOUNT_OFFSET UNITYSDK_OFFSET(0x154B1C40)
#define EHLKMDOAFOB_GET_MAXCASTCOUNT_OFFSET UNITYSDK_OFFSET(0x154B1C20)
#define EHLKMDOAFOB_GGNDNOGKMNG_OFFSET UNITYSDK_OFFSET(0x154B14C0)
#define EHLKMDOAFOB_HFCMMMCDBGL_OFFSET UNITYSDK_OFFSET(0x154B0A40)
#define EHLKMDOAFOB_HNGMEJDHJBK_OFFSET UNITYSDK_OFFSET(0x154B06E0)
#define EHLKMDOAFOB_IKBHMGHAJGE_OFFSET UNITYSDK_OFFSET(0x154B1CB0)
#define EHLKMDOAFOB_LLBHHLKJODI_OFFSET UNITYSDK_OFFSET(0x154B1C60)
#define EHLKMDOAFOB_MFCJMFPCBCG_OFFSET UNITYSDK_OFFSET(0x154B09D0)
#define EHLKMDOAFOB_MNJFAPLDLHF_OFFSET UNITYSDK_OFFSET(0x154B1230)
#define EHLKMDOAFOB_NNPBOLCNDAE_OFFSET UNITYSDK_OFFSET(0x154B10A0)
#define EHLKMDOAFOB_NOIGLBCBCHE_OFFSET UNITYSDK_OFFSET(0x154B0550)
#define EHLKMDOAFOB_OCILIACLBDP_OFFSET UNITYSDK_OFFSET(0x154B1380)
#define EHLKMDOAFOB_OCLEICBIMGM_OFFSET UNITYSDK_OFFSET(0x154B1670)
#define EHLKMDOAFOB_OIOKEJHDOJH_OFFSET UNITYSDK_OFFSET(0x154B01A0)
#define EHLKMDOAFOB_PKPAFIKLGAD_OFFSET UNITYSDK_OFFSET(0x154B0850)
#define EHLKMDOAFOB_POPOCKACBBP_1_OFFSET UNITYSDK_OFFSET(0x154B17B0)
#define EHLKMDOAFOB_POPOCKACBBP_OFFSET UNITYSDK_OFFSET(0x154B0E20)
#define EHLKMDOAFOB_SET_FILLEDCOUNT_OFFSET UNITYSDK_OFFSET(0x154B1C50)
#define EHLKMDOAFOB_SET_MAXCASTCOUNT_OFFSET UNITYSDK_OFFSET(0x154B1C30)

inline static constexpr unsigned int EHLKMDOAFOB_TypeDefinitionIndex = 71869;

	class EHLKMDOAFOB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JDIDAGMBKEL; // 0x10
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x18
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x20
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x28
		::OKKEMIFLDEO* MBBLBGCMALM; // 0x30
		::System::Boolean DLGFMPNEHGO; // 0x38
		::System::Boolean FGCCKIKHLGK; // 0x39
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID AGOHEFBOPNO; // 0x40
		::System::Nullable* IOBINHIJKEJ; // 0x50
		::System::Int32 _FilledCount_k__BackingField; // 0x58
		::System::Int32 _MaxCastCount_k__BackingField; // 0x5C
		::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x60
		// static const ::System::String* CKMGLBMIEAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_CTOR_OFFSET))(this);
		}

		static ::EHLKMDOAFOB* BPLPBPMEODA(::KANKEPCJION_JNLBIIDFHMK* a1)
		{
			return ((::EHLKMDOAFOB*(*)(::KANKEPCJION_JNLBIIDFHMK*))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Single HNGMEJDHJBK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_HNGMEJDHJBK_OFFSET))(this);
		}

		::System::Boolean BMPJGGCCDMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_BMPJGGCCDMO_OFFSET))(this);
		}

		::System::Boolean PKPAFIKLGAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_PKPAFIKLGAD_OFFSET))(this);
		}

		::System::Boolean MFCJMFPCBCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_MFCJMFPCBCG_OFFSET))(this);
		}

		::RPG::Client::SkillDetailInfoDialogInitParam* HFCMMMCDBGL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::SkillDetailInfoDialogInitParam*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_HFCMMMCDBGL_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNPBOLCNDAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_NNPBOLCNDAE_OFFSET))(this);
		}

		::System::String* MNJFAPLDLHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_MNJFAPLDLHF_OFFSET))(this);
		}

		::System::Boolean OCILIACLBDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_OCILIACLBDP_OFFSET))(this);
		}

		::System::Boolean CEMDEEPKJJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_CEMDEEPKJJO_OFFSET))(this);
		}

		::System::Boolean GGNDNOGKMNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_GGNDNOGKMNG_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::Void OIOKEJHDOJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_OIOKEJHDOJH_OFFSET))(this);
		}

		::System::Void NOIGLBCBCHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_NOIGLBCBCHE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OCLEICBIMGM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_OCLEICBIMGM_OFFSET))(this);
		}

		::System::Boolean EOEIPIPHOEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_EOEIPIPHOEK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* POPOCKACBBP()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_POPOCKACBBP_OFFSET))(this);
		}

		::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam* POPOCKACBBP_1(::RPG::GameCore::ICharacterSkillRowData* a1)
		{
			return ((::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam*(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_POPOCKACBBP_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* CAEOGPKKBJK()
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_CAEOGPKKBJK_OFFSET))(this);
		}

		::System::UInt32 BJFNAHKKLME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_BJFNAHKKLME_OFFSET))(this);
		}

		::System::Int32 get_MaxCastCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_GET_MAXCASTCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCastCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_SET_MAXCASTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FilledCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_GET_FILLEDCOUNT_OFFSET))(this);
		}

		::System::Void set_FilledCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_SET_FILLEDCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean LLBHHLKJODI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_LLBHHLKJODI_OFFSET))(this);
		}

		::System::Boolean IKBHMGHAJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_IKBHMGHAJGE_OFFSET))(this);
		}

		::System::Boolean ABBGACPDLMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKMDOAFOB_ABBGACPDLMC_OFFSET))(this);
		}

	};
