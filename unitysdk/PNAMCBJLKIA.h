#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DCGIDEKLGAJ;
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define PNAMCBJLKIA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC32AE90)
#define PNAMCBJLKIA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC32B070)
#define PNAMCBJLKIA_BALIBNLMFAF_OFFSET UNITYSDK_OFFSET(0xC32ADD0)
#define PNAMCBJLKIA_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xC32AA80)
#define PNAMCBJLKIA_BKBKDDAIBNP_OFFSET UNITYSDK_OFFSET(0xC32A1F0)
#define PNAMCBJLKIA_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xC329A90)
#define PNAMCBJLKIA_COIGHOBFILM_OFFSET UNITYSDK_OFFSET(0xC32A3E0)
#define PNAMCBJLKIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC32B220)
#define PNAMCBJLKIA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC329630)
#define PNAMCBJLKIA_DIHBAHLOAOI_OFFSET UNITYSDK_OFFSET(0xC329920)
#define PNAMCBJLKIA_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xC329D90)
#define PNAMCBJLKIA_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xC329AE0)
#define PNAMCBJLKIA_ECDBIHPFJCL_OFFSET UNITYSDK_OFFSET(0xC32A280)
#define PNAMCBJLKIA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC329680)
#define PNAMCBJLKIA_GKCNPOGCJIF_OFFSET UNITYSDK_OFFSET(0xC329B90)
#define PNAMCBJLKIA_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xC329CA0)
#define PNAMCBJLKIA_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xC32AB40)
#define PNAMCBJLKIA_KLPGNEJBGIA_OFFSET UNITYSDK_OFFSET(0xC32AD10)
#define PNAMCBJLKIA_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xC32AC00)
#define PNAMCBJLKIA_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0xC329E00)
#define PNAMCBJLKIA_LFCHAIDDNLM_OFFSET UNITYSDK_OFFSET(0xC329830)
#define PNAMCBJLKIA_MKMCAJIBGIM_OFFSET UNITYSDK_OFFSET(0xC32A560)
#define PNAMCBJLKIA_NPLMFDNEKIO_OFFSET UNITYSDK_OFFSET(0xC32A0E0)
#define PNAMCBJLKIA__ONBIND_OFFSET UNITYSDK_OFFSET(0xC329590)

inline static constexpr unsigned int PNAMCBJLKIA_TypeDefinitionIndex = 72335;

	class PNAMCBJLKIA : public ::FMPCODLIOLG
	{
	public:
		::DCGIDEKLGAJ* EIPPIIAKNJO; // 0x60
		::UnityEngine::Animation* MBLLJGMFJJF; // 0x68
		::System::String* BMBNBEBEHFM; // 0x70
		::RPG::GameCore::GameEntity* EAFBMKJFCDG; // 0x78
		::System::String* AGLLGNAMFGD; // 0x80
		::UnityEngine::Animation* BOBPNIENKBN; // 0x88
		::System::String* NPBLKCMCKPJ; // 0x90
		::System::String* MEOBKHEEIPG; // 0x98
		::System::Boolean EDILAOJDGBM; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Single IJJIEEHPFHI; // 0xA4
		::System::Single DCOICMHAAPC; // 0xA8
		// static const ::System::String* HEDDENOIDGH; // 0x0
		// static const ::System::String* IGCJGGMCGLD; // 0x0
		// static const ::System::Object JCFCJNCFGPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMCBJLKIA__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KOIEPHBLHID(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_KOIEPHBLHID_OFFSET))(this, a1);
		}

		::System::Void COIGHOBFILM(::RPG::GameCore::LevelCharacterRemoveShield* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_COIGHOBFILM_OFFSET))(this, a1);
		}

		::System::Void DIHBAHLOAOI(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_DIHBAHLOAOI_OFFSET))(this, a1);
		}

		::System::Int32 MKMCAJIBGIM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_MKMCAJIBGIM_OFFSET))(this, a1);
		}

		::System::Void ECDBIHPFJCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_ECDBIHPFJCL_OFFSET))(this);
		}

		::System::Boolean GKCNPOGCJIF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_GKCNPOGCJIF_OFFSET))(this, a1);
		}

		::System::Void NPLMFDNEKIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_NPLMFDNEKIO_OFFSET))(this, a1);
		}

		::System::Void LFCHAIDDNLM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_LFCHAIDDNLM_OFFSET))(this, a1);
		}

		::System::Void BKBKDDAIBNP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_BKBKDDAIBNP_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KLPGNEJBGIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_KLPGNEJBGIA_OFFSET))(this, a1);
		}

		::System::Void BALIBNLMFAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_BALIBNLMFAF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAMCBJLKIA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
