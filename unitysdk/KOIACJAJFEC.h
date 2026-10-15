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

#define KOIACJAJFEC_AABOCHLJHKH_OFFSET UNITYSDK_OFFSET(0xB591B40)
#define KOIACJAJFEC_AGLLIMEDCLD_OFFSET UNITYSDK_OFFSET(0xB591BF0)
#define KOIACJAJFEC_ANEKBDCIHML_OFFSET UNITYSDK_OFFSET(0xB591A80)
#define KOIACJAJFEC_BGCBNCJBLHL_OFFSET UNITYSDK_OFFSET(0xB591700)
#define KOIACJAJFEC_CAOMAIPMMIN_OFFSET UNITYSDK_OFFSET(0xB591770)
#define KOIACJAJFEC_CONJGLFJOMI_OFFSET UNITYSDK_OFFSET(0xB591AB0)
#define KOIACJAJFEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB590BE0)
#define KOIACJAJFEC_DDJBLLGEHBE_OFFSET UNITYSDK_OFFSET(0xB591380)
#define KOIACJAJFEC_FBFGALDPNOJ_OFFSET UNITYSDK_OFFSET(0xB591B30)
#define KOIACJAJFEC_FGNINPFBACA_OFFSET UNITYSDK_OFFSET(0xB591330)
#define KOIACJAJFEC_GET_ABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB591A60)
#define KOIACJAJFEC_GET_MAINABILITYNAME_OFFSET UNITYSDK_OFFSET(0xB591A90)
#define KOIACJAJFEC_GET_ONMOVETODISCARD_OFFSET UNITYSDK_OFFSET(0xB591DE0)
#define KOIACJAJFEC_GET_ONMOVETODRAW_OFFSET UNITYSDK_OFFSET(0xB591DC0)
#define KOIACJAJFEC_GET_ONMOVETOEXILE_OFFSET UNITYSDK_OFFSET(0xB591E00)
#define KOIACJAJFEC_GET_ONMOVETOHAND_OFFSET UNITYSDK_OFFSET(0xB591DA0)
#define KOIACJAJFEC_GET_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB591C00)
#define KOIACJAJFEC_GET_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xB591C20)
#define KOIACJAJFEC_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB591A40)
#define KOIACJAJFEC_IKHIMKMNNHA_OFFSET UNITYSDK_OFFSET(0xB5919C0)
#define KOIACJAJFEC_ILJFJPHOPAB_OFFSET UNITYSDK_OFFSET(0xB591B10)
#define KOIACJAJFEC_JBMHAHMBKFK_OFFSET UNITYSDK_OFFSET(0xB5913F0)
#define KOIACJAJFEC_LANDLNHIBIO_OFFSET UNITYSDK_OFFSET(0xB590FE0)
#define KOIACJAJFEC_LHHLJKHJIGO_OFFSET UNITYSDK_OFFSET(0xB591BC0)
#define KOIACJAJFEC_LODAPEPBPDH_OFFSET UNITYSDK_OFFSET(0xB590F90)
#define KOIACJAJFEC_LPGHDPDILIP_OFFSET UNITYSDK_OFFSET(0xB591640)
#define KOIACJAJFEC_MBCHONAGBPC_OFFSET UNITYSDK_OFFSET(0xB591BE0)
#define KOIACJAJFEC_MCAMLMBKEMK_OFFSET UNITYSDK_OFFSET(0xB5917E0)
#define KOIACJAJFEC_NCAAEIFFMND_OFFSET UNITYSDK_OFFSET(0xB591C40)
#define KOIACJAJFEC_NIJHJDFCMFJ_OFFSET UNITYSDK_OFFSET(0xB590C20)
#define KOIACJAJFEC_NJDAIKONGNK_OFFSET UNITYSDK_OFFSET(0xB591280)
#define KOIACJAJFEC_NNDOMLKKFIN_OFFSET UNITYSDK_OFFSET(0xB591B20)
#define KOIACJAJFEC_OCAGEPJLLOK_OFFSET UNITYSDK_OFFSET(0xB591BD0)
#define KOIACJAJFEC_SET_ABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB591A70)
#define KOIACJAJFEC_SET_MAINABILITYNAME_OFFSET UNITYSDK_OFFSET(0xB591AA0)
#define KOIACJAJFEC_SET_ONMOVETODISCARD_OFFSET UNITYSDK_OFFSET(0xB591DF0)
#define KOIACJAJFEC_SET_ONMOVETODRAW_OFFSET UNITYSDK_OFFSET(0xB591DD0)
#define KOIACJAJFEC_SET_ONMOVETOEXILE_OFFSET UNITYSDK_OFFSET(0xB591E10)
#define KOIACJAJFEC_SET_ONMOVETOHAND_OFFSET UNITYSDK_OFFSET(0xB591DB0)
#define KOIACJAJFEC_SET_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB591C10)
#define KOIACJAJFEC_SET_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xB591C30)
#define KOIACJAJFEC_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB591A50)

inline static constexpr unsigned int KOIACJAJFEC_TypeDefinitionIndex = 55965;

	class KOIACJAJFEC : public ::System::Object
	{
	public:
		::NGGLPLKJKMM* DGAEIPEMINC; // 0x10
		::KFELGAIGHAP* _OnMoveToDiscard_k__BackingField; // 0x18
		::KFELGAIGHAP* _OnUnselect_k__BackingField; // 0x20
		::KFELGAIGHAP* _OnMoveToDraw_k__BackingField; // 0x28
		::System::String* _MainAbilityName_k__BackingField; // 0x30
		::System::String* NLGEAPMEHLP; // 0x38
		::NGGLPLKJKMM* HHCBPAJNECH; // 0x40
		::KFELGAIGHAP* _OnMoveToHand_k__BackingField; // 0x48
		::MBBEBLGELAP* _AbilityInstance_k__BackingField; // 0x50
		::NGGLPLKJKMM* IOALDBGJOFI; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::StringHash>* NCDJEDGPIEH; // 0x60
		::KFELGAIGHAP* _OnMoveToExile_k__BackingField; // 0x68
		::KFELGAIGHAP* _OnSelect_k__BackingField; // 0x70
		::RPG::GameCore::SkillData* KMFDMHOIJNA; // 0x78
		::OOCCBMLAELL* CPHLBFDFGFF; // 0x80
		::RPG::GameCore::SkillCharacterComponent* LOOCGKBOKHG; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JALBONHMMOJ; // 0x90
		::NGGLPLKJKMM* GIMOLKPCCPJ; // 0x98
		::JMECAFJNCOM* _Row_k__BackingField; // 0xA0
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
