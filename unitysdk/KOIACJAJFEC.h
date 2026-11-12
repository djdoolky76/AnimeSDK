#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JMECAFJNCOM;
class KFELGAIGHAP;
class MBBEBLGELAP;
class NGGLPLKJKMM;
class OOCCBMLAELL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOIACJAJFEC_AABOCHLJHKH_OFFSET UNITYSDK_OFFSET(0xBDEAE40)
#define KOIACJAJFEC_AGLLIMEDCLD_OFFSET UNITYSDK_OFFSET(0xBDEAEE0)
#define KOIACJAJFEC_ANEKBDCIHML_OFFSET UNITYSDK_OFFSET(0xBDEAD80)
#define KOIACJAJFEC_BGCBNCJBLHL_OFFSET UNITYSDK_OFFSET(0xBDEAA00)
#define KOIACJAJFEC_CAOMAIPMMIN_OFFSET UNITYSDK_OFFSET(0xBDEAA70)
#define KOIACJAJFEC_CONJGLFJOMI_OFFSET UNITYSDK_OFFSET(0xBDEADB0)
#define KOIACJAJFEC_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE9F10)
#define KOIACJAJFEC_DDJBLLGEHBE_OFFSET UNITYSDK_OFFSET(0xBDEA6A0)
#define KOIACJAJFEC_FBFGALDPNOJ_OFFSET UNITYSDK_OFFSET(0xBDEAE30)
#define KOIACJAJFEC_FGNINPFBACA_OFFSET UNITYSDK_OFFSET(0xBDEA660)
#define KOIACJAJFEC_GET_ABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xBDEAD60)
#define KOIACJAJFEC_GET_MAINABILITYNAME_OFFSET UNITYSDK_OFFSET(0xBDEAD90)
#define KOIACJAJFEC_GET_ONMOVETODISCARD_OFFSET UNITYSDK_OFFSET(0xBDEB0D0)
#define KOIACJAJFEC_GET_ONMOVETODRAW_OFFSET UNITYSDK_OFFSET(0xBDEB0B0)
#define KOIACJAJFEC_GET_ONMOVETOEXILE_OFFSET UNITYSDK_OFFSET(0xBDEB0F0)
#define KOIACJAJFEC_GET_ONMOVETOHAND_OFFSET UNITYSDK_OFFSET(0xBDEB090)
#define KOIACJAJFEC_GET_ONSELECT_OFFSET UNITYSDK_OFFSET(0xBDEAEF0)
#define KOIACJAJFEC_GET_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xBDEAF10)
#define KOIACJAJFEC_GET_ROW_OFFSET UNITYSDK_OFFSET(0xBDEAD40)
#define KOIACJAJFEC_IKHIMKMNNHA_OFFSET UNITYSDK_OFFSET(0xBDEACC0)
#define KOIACJAJFEC_ILJFJPHOPAB_OFFSET UNITYSDK_OFFSET(0xBDEAE10)
#define KOIACJAJFEC_JBMHAHMBKFK_OFFSET UNITYSDK_OFFSET(0xBDEA710)
#define KOIACJAJFEC_LANDLNHIBIO_OFFSET UNITYSDK_OFFSET(0xBDEA320)
#define KOIACJAJFEC_LHHLJKHJIGO_OFFSET UNITYSDK_OFFSET(0xBDEAEB0)
#define KOIACJAJFEC_LODAPEPBPDH_OFFSET UNITYSDK_OFFSET(0xBDEA2D0)
#define KOIACJAJFEC_LPGHDPDILIP_OFFSET UNITYSDK_OFFSET(0xBDEA940)
#define KOIACJAJFEC_MBCHONAGBPC_OFFSET UNITYSDK_OFFSET(0xBDEAED0)
#define KOIACJAJFEC_MCAMLMBKEMK_OFFSET UNITYSDK_OFFSET(0xBDEAAE0)
#define KOIACJAJFEC_NCAAEIFFMND_OFFSET UNITYSDK_OFFSET(0xBDEAF30)
#define KOIACJAJFEC_NIJHJDFCMFJ_OFFSET UNITYSDK_OFFSET(0xBDE9F50)
#define KOIACJAJFEC_NJDAIKONGNK_OFFSET UNITYSDK_OFFSET(0xBDEA5B0)
#define KOIACJAJFEC_NNDOMLKKFIN_OFFSET UNITYSDK_OFFSET(0xBDEAE20)
#define KOIACJAJFEC_OCAGEPJLLOK_OFFSET UNITYSDK_OFFSET(0xBDEAEC0)
#define KOIACJAJFEC_SET_ABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xBDEAD70)
#define KOIACJAJFEC_SET_MAINABILITYNAME_OFFSET UNITYSDK_OFFSET(0xBDEADA0)
#define KOIACJAJFEC_SET_ONMOVETODISCARD_OFFSET UNITYSDK_OFFSET(0xBDEB0E0)
#define KOIACJAJFEC_SET_ONMOVETODRAW_OFFSET UNITYSDK_OFFSET(0xBDEB0C0)
#define KOIACJAJFEC_SET_ONMOVETOEXILE_OFFSET UNITYSDK_OFFSET(0xBDEB100)
#define KOIACJAJFEC_SET_ONMOVETOHAND_OFFSET UNITYSDK_OFFSET(0xBDEB0A0)
#define KOIACJAJFEC_SET_ONSELECT_OFFSET UNITYSDK_OFFSET(0xBDEAF00)
#define KOIACJAJFEC_SET_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xBDEAF20)
#define KOIACJAJFEC_SET_ROW_OFFSET UNITYSDK_OFFSET(0xBDEAD50)

inline static constexpr unsigned int KOIACJAJFEC_TypeDefinitionIndex = 57168;

	class KOIACJAJFEC : public ::System::Object
	{
	public:
		::JMECAFJNCOM* _Row_k__BackingField; // 0x10
		::KFELGAIGHAP* _OnSelect_k__BackingField; // 0x18
		::NGGLPLKJKMM* DGAEIPEMINC; // 0x20
		::RPG::GameCore::SkillData* KMFDMHOIJNA; // 0x28
		::System::String* NLGEAPMEHLP; // 0x30
		::RPG::GameCore::SkillCharacterComponent* LOOCGKBOKHG; // 0x38
		::KFELGAIGHAP* _OnMoveToExile_k__BackingField; // 0x40
		::KFELGAIGHAP* _OnMoveToDiscard_k__BackingField; // 0x48
		::NGGLPLKJKMM* GIMOLKPCCPJ; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JALBONHMMOJ; // 0x58
		::System::String* _MainAbilityName_k__BackingField; // 0x60
		::KFELGAIGHAP* _OnUnselect_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash>* NCDJEDGPIEH; // 0x70
		::KFELGAIGHAP* _OnMoveToDraw_k__BackingField; // 0x78
		::NGGLPLKJKMM* HHCBPAJNECH; // 0x80
		::KFELGAIGHAP* _OnMoveToHand_k__BackingField; // 0x88
		::NGGLPLKJKMM* IOALDBGJOFI; // 0x90
		::MBBEBLGELAP* _AbilityInstance_k__BackingField; // 0x98
		::OOCCBMLAELL* CPHLBFDFGFF; // 0xA0
		::RPG::GameCore::FateRinCardCasterSource CKPJBABJIMH; // 0xA8
		::System::Void _ctor(::System::UInt32 a1, ::OOCCBMLAELL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NIJHJDFCMFJ(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_NIJHJDFCMFJ_OFFSET))(this, a1);
		}

		::System::Void LODAPEPBPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_LODAPEPBPDH_OFFSET))(this);
		}

		::System::Void NJDAIKONGNK(::RPG::GameCore::SkillCharacterComponent* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_NJDAIKONGNK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SkillCharacterComponent* FGNINPFBACA()
		{
			return ((::RPG::GameCore::SkillCharacterComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_FGNINPFBACA_OFFSET))(this);
		}

		::System::Void DDJBLLGEHBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_DDJBLLGEHBE_OFFSET))(this);
		}

		::System::Void LPGHDPDILIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_LPGHDPDILIP_OFFSET))(this);
		}

		::System::Boolean CAOMAIPMMIN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_CAOMAIPMMIN_OFFSET))(this, a1);
		}

		::System::Void MCAMLMBKEMK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KOIACJAJFEC_MCAMLMBKEMK_OFFSET))(this, a1);
		}

		::System::Void JBMHAHMBKFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_JBMHAHMBKFK_OFFSET))(this);
		}

		::System::Void BGCBNCJBLHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_BGCBNCJBLHL_OFFSET))(this);
		}

		::System::Void LANDLNHIBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_LANDLNHIBIO_OFFSET))(this);
		}

		::JMECAFJNCOM* get_Row()
		{
			return ((::JMECAFJNCOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::JMECAFJNCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMECAFJNCOM*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ROW_OFFSET))(this, a1);
		}

		::MBBEBLGELAP* get_AbilityInstance()
		{
			return ((::MBBEBLGELAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ABILITYINSTANCE_OFFSET))(this);
		}

		::System::Void set_AbilityInstance(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ABILITYINSTANCE_OFFSET))(this, a1);
		}

		::OOCCBMLAELL* ANEKBDCIHML()
		{
			return ((::OOCCBMLAELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_ANEKBDCIHML_OFFSET))(this);
		}

		::System::String* get_MainAbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_MAINABILITYNAME_OFFSET))(this);
		}

		::System::Void set_MainAbilityName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_MAINABILITYNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* CONJGLFJOMI()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_CONJGLFJOMI_OFFSET))(this);
		}

		::RPG::GameCore::FateRinCardCasterSource ILJFJPHOPAB()
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_ILJFJPHOPAB_OFFSET))(this);
		}

		::System::String* NNDOMLKKFIN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_NNDOMLKKFIN_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* FBFGALDPNOJ()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_FBFGALDPNOJ_OFFSET))(this);
		}

		::RPG::GameCore::SkillTargetConfig* IKHIMKMNNHA()
		{
			return ((::RPG::GameCore::SkillTargetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_IKHIMKMNNHA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AABOCHLJHKH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_AABOCHLJHKH_OFFSET))(this);
		}

		::NGGLPLKJKMM* LHHLJKHJIGO()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_LHHLJKHJIGO_OFFSET))(this);
		}

		::NGGLPLKJKMM* OCAGEPJLLOK()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_OCAGEPJLLOK_OFFSET))(this);
		}

		::NGGLPLKJKMM* MBCHONAGBPC()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_MBCHONAGBPC_OFFSET))(this);
		}

		::NGGLPLKJKMM* AGLLIMEDCLD()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_AGLLIMEDCLD_OFFSET))(this);
		}

		::KFELGAIGHAP* get_OnSelect()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ONSELECT_OFFSET))(this);
		}

		::System::Void set_OnSelect(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ONSELECT_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* get_OnUnselect()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ONUNSELECT_OFFSET))(this);
		}

		::System::Void set_OnUnselect(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ONUNSELECT_OFFSET))(this, a1);
		}

		::System::Boolean NCAAEIFFMND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_NCAAEIFFMND_OFFSET))(this);
		}

		::KFELGAIGHAP* get_OnMoveToHand()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ONMOVETOHAND_OFFSET))(this);
		}

		::System::Void set_OnMoveToHand(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ONMOVETOHAND_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* get_OnMoveToDraw()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ONMOVETODRAW_OFFSET))(this);
		}

		::System::Void set_OnMoveToDraw(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ONMOVETODRAW_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* get_OnMoveToDiscard()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ONMOVETODISCARD_OFFSET))(this);
		}

		::System::Void set_OnMoveToDiscard(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ONMOVETODISCARD_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* get_OnMoveToExile()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIACJAJFEC_GET_ONMOVETOEXILE_OFFSET))(this);
		}

		::System::Void set_OnMoveToExile(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + KOIACJAJFEC_SET_ONMOVETOEXILE_OFFSET))(this, a1);
		}

	};
