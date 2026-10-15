#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKNEHPCANEM.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LCJIAMCDDFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB60FD30)
#define LCJIAMCDDFL_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xB60FB70)
#define LCJIAMCDDFL_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB60FCD0)
#define LCJIAMCDDFL_GET_DAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xB60FA70)
#define LCJIAMCDDFL_GET_DAMAGETYPEINTRO_OFFSET UNITYSDK_OFFSET(0xB60FA50)
#define LCJIAMCDDFL_GET_DAMAGETYPENAME_OFFSET UNITYSDK_OFFSET(0xB60FA30)
#define LCJIAMCDDFL_GET_ICONNATURECOLORSIMPLE_OFFSET UNITYSDK_OFFSET(0xB60FAD0)
#define LCJIAMCDDFL_GET_ICONNATURECOLOR_OFFSET UNITYSDK_OFFSET(0xB60FAF0)
#define LCJIAMCDDFL_GET_ICONNATUREFORWEAKACTIVE_OFFSET UNITYSDK_OFFSET(0xB60FA90)
#define LCJIAMCDDFL_GET_ICONNATUREFORWEAKUNACTIVE_OFFSET UNITYSDK_OFFSET(0xB60FAB0)
#define LCJIAMCDDFL_GET_ICONNATUREWHITE_OFFSET UNITYSDK_OFFSET(0xB60FB10)
#define LCJIAMCDDFL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB60FA20)
#define LCJIAMCDDFL_GET_LIGHT1COLOR_OFFSET UNITYSDK_OFFSET(0xB60FBF0)
#define LCJIAMCDDFL_GET_LIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FBD0)
#define LCJIAMCDDFL_GET_MAZEENTERBATTLEWEAKICONPATH_OFFSET UNITYSDK_OFFSET(0xB60FD10)
#define LCJIAMCDDFL_GET_NORMALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB60FCB0)
#define LCJIAMCDDFL_GET_SHADERCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FB90)
#define LCJIAMCDDFL_GET_SKILLBTNEFF_OFFSET UNITYSDK_OFFSET(0xB60FC10)
#define LCJIAMCDDFL_GET_SKILLTREEDECOCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FC50)
#define LCJIAMCDDFL_GET_SKILLTREELEFTPANELCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FC70)
#define LCJIAMCDDFL_GET_SKILLTREELIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FC30)
#define LCJIAMCDDFL_GET_SKILLTREEPANELPATH_OFFSET UNITYSDK_OFFSET(0xB60FCF0)
#define LCJIAMCDDFL_GET_SPINFOEFFFRONTDOUBLE_OFFSET UNITYSDK_OFFSET(0xB60FB50)
#define LCJIAMCDDFL_GET_SPINFOEFFFRONT_OFFSET UNITYSDK_OFFSET(0xB60FB30)
#define LCJIAMCDDFL_GET_SPMAZEINFOEFFFRONT_OFFSET UNITYSDK_OFFSET(0xB60FC90)
#define LCJIAMCDDFL_GET_UNFULLCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FBB0)
#define LCJIAMCDDFL_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xB60FB80)
#define LCJIAMCDDFL_SET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB60FCE0)
#define LCJIAMCDDFL_SET_DAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xB60FA80)
#define LCJIAMCDDFL_SET_DAMAGETYPEINTRO_OFFSET UNITYSDK_OFFSET(0xB60FA60)
#define LCJIAMCDDFL_SET_DAMAGETYPENAME_OFFSET UNITYSDK_OFFSET(0xB60FA40)
#define LCJIAMCDDFL_SET_ICONNATURECOLORSIMPLE_OFFSET UNITYSDK_OFFSET(0xB60FAE0)
#define LCJIAMCDDFL_SET_ICONNATURECOLOR_OFFSET UNITYSDK_OFFSET(0xB60FB00)
#define LCJIAMCDDFL_SET_ICONNATUREFORWEAKACTIVE_OFFSET UNITYSDK_OFFSET(0xB60FAA0)
#define LCJIAMCDDFL_SET_ICONNATUREFORWEAKUNACTIVE_OFFSET UNITYSDK_OFFSET(0xB60FAC0)
#define LCJIAMCDDFL_SET_ICONNATUREWHITE_OFFSET UNITYSDK_OFFSET(0xB60FB20)
#define LCJIAMCDDFL_SET_LIGHT1COLOR_OFFSET UNITYSDK_OFFSET(0xB60FC00)
#define LCJIAMCDDFL_SET_LIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FBE0)
#define LCJIAMCDDFL_SET_MAZEENTERBATTLEWEAKICONPATH_OFFSET UNITYSDK_OFFSET(0xB60FD20)
#define LCJIAMCDDFL_SET_NORMALDAMAGE_OFFSET UNITYSDK_OFFSET(0xB60FCC0)
#define LCJIAMCDDFL_SET_SHADERCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FBA0)
#define LCJIAMCDDFL_SET_SKILLBTNEFF_OFFSET UNITYSDK_OFFSET(0xB60FC20)
#define LCJIAMCDDFL_SET_SKILLTREEDECOCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FC60)
#define LCJIAMCDDFL_SET_SKILLTREELEFTPANELCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FC80)
#define LCJIAMCDDFL_SET_SKILLTREELIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FC40)
#define LCJIAMCDDFL_SET_SKILLTREEPANELPATH_OFFSET UNITYSDK_OFFSET(0xB60FD00)
#define LCJIAMCDDFL_SET_SPINFOEFFFRONTDOUBLE_OFFSET UNITYSDK_OFFSET(0xB60FB60)
#define LCJIAMCDDFL_SET_SPINFOEFFFRONT_OFFSET UNITYSDK_OFFSET(0xB60FB40)
#define LCJIAMCDDFL_SET_SPMAZEINFOEFFFRONT_OFFSET UNITYSDK_OFFSET(0xB60FCA0)
#define LCJIAMCDDFL_SET_UNFULLCOLOR_OFFSET UNITYSDK_OFFSET(0xB60FBC0)

inline static constexpr unsigned int LCJIAMCDDFL_TypeDefinitionIndex = 51983;

	class LCJIAMCDDFL : public ::System::Object
	{
	public:
		::System::String* _IconNatureForWeakActive_k__BackingField; // 0x10
		::System::String* _ShaderColor_k__BackingField; // 0x18
		::System::String* _SkillTreeLightColor_k__BackingField; // 0x20
		::System::String* _Color_k__BackingField; // 0x28
		::System::String* _Light1Color_k__BackingField; // 0x30
		::System::String* _SkillTreePanelPath_k__BackingField; // 0x38
		::System::String* _MazeEnterBattleWeakIconPath_k__BackingField; // 0x40
		::System::String* _CriticalDamage_k__BackingField; // 0x48
		::System::String* _NormalDamage_k__BackingField; // 0x50
		::System::String* _LightColor_k__BackingField; // 0x58
		::System::String* _SkillBtnEff_k__BackingField; // 0x60
		::System::String* _UnfullColor_k__BackingField; // 0x68
		::System::String* _SPInfoEffFrontDouble_k__BackingField; // 0x70
		::System::String* _IconNatureColorSimple_k__BackingField; // 0x78
		::System::String* _DamageTypeIconPath_k__BackingField; // 0x80
		::System::String* _IconNatureForWeakUnactive_k__BackingField; // 0x88
		::System::String* _SkillTreeDecoColor_k__BackingField; // 0x90
		::System::String* _SPInfoEffFront_k__BackingField; // 0x98
		::System::String* _SkillTreeLeftPanelColor_k__BackingField; // 0xA0
		::System::String* _IconNatureWhite_k__BackingField; // 0xA8
		::System::String* _SPMazeInfoEffFront_k__BackingField; // 0xB0
		::System::String* _IconNatureColor_k__BackingField; // 0xB8
		::RPG::Client::TextID _DamageTypeIntro_k__BackingField; // 0xC0
		::AKNEHPCANEM _Identifier_k__BackingField; // 0xD0
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _DamageTypeName_k__BackingField; // 0xD8
		::System::Void _ctor(::AKNEHPCANEM a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKNEHPCANEM))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_CTOR_OFFSET))(this, a1);
		}

		::AKNEHPCANEM get_Identifier()
		{
			return ((::AKNEHPCANEM(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::Client::TextID get_DamageTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_DAMAGETYPENAME_OFFSET))(this);
		}

		::System::Void set_DamageTypeName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_DAMAGETYPENAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DamageTypeIntro()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_DAMAGETYPEINTRO_OFFSET))(this);
		}

		::System::Void set_DamageTypeIntro(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_DAMAGETYPEINTRO_OFFSET))(this, a1);
		}

		::System::String* get_DamageTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_DAMAGETYPEICONPATH_OFFSET))(this);
		}

		::System::Void set_DamageTypeIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_DAMAGETYPEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_IconNatureForWeakActive()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_ICONNATUREFORWEAKACTIVE_OFFSET))(this);
		}

		::System::Void set_IconNatureForWeakActive(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_ICONNATUREFORWEAKACTIVE_OFFSET))(this, a1);
		}

		::System::String* get_IconNatureForWeakUnactive()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_ICONNATUREFORWEAKUNACTIVE_OFFSET))(this);
		}

		::System::Void set_IconNatureForWeakUnactive(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_ICONNATUREFORWEAKUNACTIVE_OFFSET))(this, a1);
		}

		::System::String* get_IconNatureColorSimple()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_ICONNATURECOLORSIMPLE_OFFSET))(this);
		}

		::System::Void set_IconNatureColorSimple(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_ICONNATURECOLORSIMPLE_OFFSET))(this, a1);
		}

		::System::String* get_IconNatureColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_ICONNATURECOLOR_OFFSET))(this);
		}

		::System::Void set_IconNatureColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_ICONNATURECOLOR_OFFSET))(this, a1);
		}

		::System::String* get_IconNatureWhite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_ICONNATUREWHITE_OFFSET))(this);
		}

		::System::Void set_IconNatureWhite(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_ICONNATUREWHITE_OFFSET))(this, a1);
		}

		::System::String* get_SPInfoEffFront()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SPINFOEFFFRONT_OFFSET))(this);
		}

		::System::Void set_SPInfoEffFront(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SPINFOEFFFRONT_OFFSET))(this, a1);
		}

		::System::String* get_SPInfoEffFrontDouble()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SPINFOEFFFRONTDOUBLE_OFFSET))(this);
		}

		::System::Void set_SPInfoEffFrontDouble(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SPINFOEFFFRONTDOUBLE_OFFSET))(this, a1);
		}

		::System::String* get_Color()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_COLOR_OFFSET))(this, a1);
		}

		::System::String* get_ShaderColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SHADERCOLOR_OFFSET))(this);
		}

		::System::Void set_ShaderColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SHADERCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_UnfullColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_UNFULLCOLOR_OFFSET))(this);
		}

		::System::Void set_UnfullColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_UNFULLCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_LightColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_LIGHTCOLOR_OFFSET))(this);
		}

		::System::Void set_LightColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_LIGHTCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_Light1Color()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_LIGHT1COLOR_OFFSET))(this);
		}

		::System::Void set_Light1Color(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_LIGHT1COLOR_OFFSET))(this, a1);
		}

		::System::String* get_SkillBtnEff()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SKILLBTNEFF_OFFSET))(this);
		}

		::System::Void set_SkillBtnEff(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SKILLBTNEFF_OFFSET))(this, a1);
		}

		::System::String* get_SkillTreeLightColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SKILLTREELIGHTCOLOR_OFFSET))(this);
		}

		::System::Void set_SkillTreeLightColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SKILLTREELIGHTCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_SkillTreeDecoColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SKILLTREEDECOCOLOR_OFFSET))(this);
		}

		::System::Void set_SkillTreeDecoColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SKILLTREEDECOCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_SkillTreeLeftPanelColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SKILLTREELEFTPANELCOLOR_OFFSET))(this);
		}

		::System::Void set_SkillTreeLeftPanelColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SKILLTREELEFTPANELCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_SPMazeInfoEffFront()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SPMAZEINFOEFFFRONT_OFFSET))(this);
		}

		::System::Void set_SPMazeInfoEffFront(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SPMAZEINFOEFFFRONT_OFFSET))(this, a1);
		}

		::System::String* get_NormalDamage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_NORMALDAMAGE_OFFSET))(this);
		}

		::System::Void set_NormalDamage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_NORMALDAMAGE_OFFSET))(this, a1);
		}

		::System::String* get_CriticalDamage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::System::Void set_CriticalDamage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_CRITICALDAMAGE_OFFSET))(this, a1);
		}

		::System::String* get_SkillTreePanelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_SKILLTREEPANELPATH_OFFSET))(this);
		}

		::System::Void set_SkillTreePanelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_SKILLTREEPANELPATH_OFFSET))(this, a1);
		}

		::System::String* get_MazeEnterBattleWeakIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_GET_MAZEENTERBATTLEWEAKICONPATH_OFFSET))(this);
		}

		::System::Void set_MazeEnterBattleWeakIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCJIAMCDDFL_SET_MAZEENTERBATTLEWEAKICONPATH_OFFSET))(this, a1);
		}

	};
