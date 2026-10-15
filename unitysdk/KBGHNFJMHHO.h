#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class INNLEDLNDNN;
class KNKPLOGICFO;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelBattleEventDie; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }

#define KBGHNFJMHHO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2FC240)
#define KBGHNFJMHHO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2FC7C0)
#define KBGHNFJMHHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2FCD10)
#define KBGHNFJMHHO_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB2F9C30)
#define KBGHNFJMHHO_EBEHFIGHJAM_OFFSET UNITYSDK_OFFSET(0xB2F9D70)
#define KBGHNFJMHHO_EDDOHLBMOBB_OFFSET UNITYSDK_OFFSET(0xB2F9CA0)
#define KBGHNFJMHHO_EGJHNAOPEEP_OFFSET UNITYSDK_OFFSET(0xB2FBC50)
#define KBGHNFJMHHO_EKEABIDBHNK_OFFSET UNITYSDK_OFFSET(0xB2FBFF0)
#define KBGHNFJMHHO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB2F9010)
#define KBGHNFJMHHO_EOKIOHGPNIC_OFFSET UNITYSDK_OFFSET(0xB2F9FA0)
#define KBGHNFJMHHO_EPHIBCEHFHP_OFFSET UNITYSDK_OFFSET(0xB2FBDB0)
#define KBGHNFJMHHO_HEBCEFFKJIM_OFFSET UNITYSDK_OFFSET(0xB2FAB20)
#define KBGHNFJMHHO_HGBFHDKMPGC_OFFSET UNITYSDK_OFFSET(0xB2FAFE0)
#define KBGHNFJMHHO_HPFANEEJCBM_OFFSET UNITYSDK_OFFSET(0xB2F9F00)
#define KBGHNFJMHHO_HPKPNIPIJEP_OFFSET UNITYSDK_OFFSET(0xB2FC0B0)
#define KBGHNFJMHHO_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xB2F9740)
#define KBGHNFJMHHO_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0xB2F9E00)
#define KBGHNFJMHHO_JPCPIBILKHH_OFFSET UNITYSDK_OFFSET(0xB2FA440)
#define KBGHNFJMHHO_LHKPODEPMDO_OFFSET UNITYSDK_OFFSET(0xB2FC1B0)
#define KBGHNFJMHHO_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xB2FBCB0)
#define KBGHNFJMHHO_LKGGFNKEGKB_OFFSET UNITYSDK_OFFSET(0xB2FABA0)
#define KBGHNFJMHHO_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB2F8E30)
#define KBGHNFJMHHO_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB2F90C0)
#define KBGHNFJMHHO_OADFOHCNDOJ_OFFSET UNITYSDK_OFFSET(0xB2FBB80)
#define KBGHNFJMHHO_OANKGOMOLEB_OFFSET UNITYSDK_OFFSET(0xB2FB060)
#define KBGHNFJMHHO_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0xB2FAAA0)
#define KBGHNFJMHHO_OMHEMAHCCNE_OFFSET UNITYSDK_OFFSET(0xB2FBE70)
#define KBGHNFJMHHO_OMJAOCFAEFM_OFFSET UNITYSDK_OFFSET(0xB2FA4C0)
#define KBGHNFJMHHO_ONCHLFHHHDA_OFFSET UNITYSDK_OFFSET(0xB2FBF30)
#define KBGHNFJMHHO_ONOAGPEGMKA_OFFSET UNITYSDK_OFFSET(0xB2F9070)
#define KBGHNFJMHHO_PHPGANHCEHL_OFFSET UNITYSDK_OFFSET(0xB2F9130)
#define KBGHNFJMHHO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2F8DB0)
#define KBGHNFJMHHO__ONTICK_OFFSET UNITYSDK_OFFSET(0xB2F8F50)
#define KBGHNFJMHHO__PLAYFADE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB2FCE20)

inline static constexpr unsigned int KBGHNFJMHHO_TypeDefinitionIndex = 71627;

	class KBGHNFJMHHO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::INNLEDLNDNN*>* EIKBOFILFGL; // 0x68
		::RPG::Client::PrefabLoadMeta* KKEMIFHIHEL; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* DOPHJDGCECJ; // 0x78
		::KNKPLOGICFO* PCOMMLHHNOA; // 0x80
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
		::UnityEngine::Animation* ALOLGOMCCCO; // 0x90
		::System::Boolean PENFJGJBOBI; // 0x98
		::System::Boolean LDMLHEKMCEG; // 0x99
		// static const ::System::Object EJEONLGGNBB; // 0x0
		// static const ::System::String* MLIPPKIFDON; // 0x0
		// static const ::System::String* FFEHFCONLCL; // 0x0
		// static const ::System::String* NCJEBGMPIBJ; // 0x0
		// static const ::System::String* IMEDIJIADDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBGHNFJMHHO__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void EDDOHLBMOBB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EDDOHLBMOBB_OFFSET))(this, a1);
		}

		::System::Void JKJMOGBMCCH(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_JKJMOGBMCCH_OFFSET))(this, a1);
		}

		::System::Void JPCPIBILKHH(::RPG::GameCore::LevelEntityEscape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_JPCPIBILKHH_OFFSET))(this, a1);
		}

		::System::Void OFDDFDGKNPJ(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void HEBCEFFKJIM(::RPG::GameCore::LevelBattleEventDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_HEBCEFFKJIM_OFFSET))(this, a1);
		}

		::System::Void LKGGFNKEGKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_LKGGFNKEGKB_OFFSET))(this, a1);
		}

		::System::Void HGBFHDKMPGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_HGBFHDKMPGC_OFFSET))(this);
		}

		::System::Void ONOAGPEGMKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_ONOAGPEGMKA_OFFSET))(this);
		}

		::System::Void OMJAOCFAEFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_OMJAOCFAEFM_OFFSET))(this);
		}

		::System::UInt32 HPFANEEJCBM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_HPFANEEJCBM_OFFSET))(this, a1);
		}

		::System::Boolean EOKIOHGPNIC(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EOKIOHGPNIC_OFFSET))(this, a1, a2);
		}

		::System::Void PHPGANHCEHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_PHPGANHCEHL_OFFSET))(this);
		}

		::System::Void OANKGOMOLEB(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_OANKGOMOLEB_OFFSET))(this, a1, a2);
		}

		::System::String* OADFOHCNDOJ(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_OADFOHCNDOJ_OFFSET))(this, a1);
		}

		::System::Boolean EBEHFIGHJAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EBEHFIGHJAM_OFFSET))(this);
		}

		::System::Boolean EGJHNAOPEEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EGJHNAOPEEP_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void EPHIBCEHFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EPHIBCEHFHP_OFFSET))(this, a1);
		}

		::System::Void OMHEMAHCCNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_OMHEMAHCCNE_OFFSET))(this, a1);
		}

		::System::Void ONCHLFHHHDA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_ONCHLFHHHDA_OFFSET))(this, a1);
		}

		::System::Void EKEABIDBHNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_EKEABIDBHNK_OFFSET))(this, a1);
		}

		::System::Void HPKPNIPIJEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_HPKPNIPIJEP_OFFSET))(this, a1);
		}

		::System::Void LHKPODEPMDO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_LHKPODEPMDO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _PlayFade_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO__PLAYFADE_B__8_0_OFFSET))(this);
		}

	};
