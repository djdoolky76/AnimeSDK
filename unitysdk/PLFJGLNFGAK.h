#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKBDIJDMAP.h"

class APOLLOBLGOE;
class JPIEIAPMKHM;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace UnityEngine::Events { class UnityAction; }

#define PLFJGLNFGAK_ACDHAKJMICN_OFFSET UNITYSDK_OFFSET(0x1C663EC0)
#define PLFJGLNFGAK_AFFBGKDLIMB_OFFSET UNITYSDK_OFFSET(0x1C663E70)
#define PLFJGLNFGAK_BDALCJEKPOE_OFFSET UNITYSDK_OFFSET(0x1C664060)
#define PLFJGLNFGAK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1C663F20)
#define PLFJGLNFGAK_HFAGAFHFJFH_OFFSET UNITYSDK_OFFSET(0x1C664190)
#define PLFJGLNFGAK_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1C664240)
#define PLFJGLNFGAK_JGEKEKBAFAM_OFFSET UNITYSDK_OFFSET(0x1C6639E0)
#define PLFJGLNFGAK_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1C6637F0)
#define PLFJGLNFGAK_LNLDPCPNKNM_OFFSET UNITYSDK_OFFSET(0x1C663E00)
#define PLFJGLNFGAK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C663DF0)
#define PLFJGLNFGAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6639D0)

inline static constexpr unsigned int PLFJGLNFGAK_TypeDefinitionIndex = 39817;

class PLFJGLNFGAK : public ::MPKBDIJDMAP
{
public:
	static ::System::Int32* StaticGet_BIJIPJPJJPJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PLFJGLNFGAK_TypeDefinitionIndex)->GetStaticField(0xC1A0);
	}
	::JPIEIAPMKHM* NBOKPALDOCA; // 0x58
	::MoleMole::TextureSheetData* MFJBAEMHBFK; // 0x60
	::MoleMole::TextureSheetSkipFrameParam* FBLHCHBAKIJ; // 0x68
	::System::Int32 ACHBBPJIBIE; // 0x70
	::System::Boolean MECGDEBCKDE; // 0x74
	::System::Boolean ECNLEKLCCAP; // 0x75

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFJGLNFGAK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLFJGLNFGAK__CCTOR_OFFSET))();
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_KMMIPNMJILI_OFFSET))(this);
	}

	::APOLLOBLGOE* JGEKEKBAFAM()
	{
		return ((::APOLLOBLGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_JGEKEKBAFAM_OFFSET))(this);
	}

	static ::PLFJGLNFGAK* LNLDPCPNKNM()
	{
		return ((::PLFJGLNFGAK*(*)())((::PBYTE)hIl2Cpp + PLFJGLNFGAK_LNLDPCPNKNM_OFFSET))();
	}

	::System::Void AFFBGKDLIMB(::MoleMole::TextureSheetSkipFrameParam* INNJGLKOLIH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetSkipFrameParam*))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_AFFBGKDLIMB_OFFSET))(this, INNJGLKOLIH);
	}

	::System::Void ACDHAKJMICN(::JPIEIAPMKHM* JNDDJMAHNAI, ::MoleMole::TextureSheetData* FGLJPLFOOKH)
	{
		return ((::System::Void(*)(::PVOID, ::JPIEIAPMKHM*, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_ACDHAKJMICN_OFFSET))(this, JNDDJMAHNAI, FGLJPLFOOKH);
	}

	static ::PLFJGLNFGAK* COKNIICCODC(::JPIEIAPMKHM* JNDDJMAHNAI, ::MoleMole::TextureSheetData* FGLJPLFOOKH, ::System::Boolean ECNLEKLCCAP)
	{
		return ((::PLFJGLNFGAK*(*)(::JPIEIAPMKHM*, ::MoleMole::TextureSheetData*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_COKNIICCODC_OFFSET))(JNDDJMAHNAI, FGLJPLFOOKH, ECNLEKLCCAP);
	}

	::System::Void BDALCJEKPOE(::UnityEngine::Events::UnityAction* EJGDHCIBCJH, ::System::Int32 DBHFIJGFPOK, ::System::Boolean FCMPANBIMHM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_BDALCJEKPOE_OFFSET))(this, EJGDHCIBCJH, DBHFIJGFPOK, FCMPANBIMHM);
	}

	::System::Void HFAGAFHFJFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_HFAGAFHFJFH_OFFSET))(this);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFJGLNFGAK_HFJKKGKPANC_OFFSET))(this);
	}
};
