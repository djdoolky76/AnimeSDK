#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class FHKFHJFLFDC;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class String; }

#define LENLFPIOLEP_ELPMFIIDCCB_DHNHLOMDFPE_OFFSET UNITYSDK_OFFSET(0x14DA05A0)
#define LENLFPIOLEP_ELPMFIIDCCB_EBCDHAOPBKG_OFFSET UNITYSDK_OFFSET(0x14DA05C0)
#define LENLFPIOLEP_ELPMFIIDCCB_GLKOFMCFKOJ_OFFSET UNITYSDK_OFFSET(0x14DA05F0)
#define LENLFPIOLEP_ELPMFIIDCCB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA0590)

inline static constexpr unsigned int LENLFPIOLEP_ELPMFIIDCCB_TypeDefinitionIndex = 73419;

class LENLFPIOLEP_ELPMFIIDCCB : public ::System::Object
{
public:
	::FHKFHJFLFDC* BABAAACDDHI; // 0x10
	::System::Int32 NIBILBCFBHF; // 0x18
	::System::Boolean GFGBMIHGPDM; // 0x1C
	::System::Boolean KKHNJPGGIPM; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ELPMFIIDCCB__CTOR_OFFSET))(this);
	}

	::System::String* DHNHLOMDFPE(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ELPMFIIDCCB_DHNHLOMDFPE_OFFSET))(this, HBJOLKHGGDD);
	}

	::MoleMole::UIRoleSelectPageContext* EBCDHAOPBKG(::System::Int32 FOLKIBNJNHM, ::Il2CppArray<::BPHGNMNLLHF*>* DGFEMBEDHAC)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ELPMFIIDCCB_EBCDHAOPBKG_OFFSET))(this, FOLKIBNJNHM, DGFEMBEDHAC);
	}

	::MoleMole::UIActivePropsWindowContext* GLKOFMCFKOJ(::MoleMole::UIActivePropsWindowContext* KHMLCJJBKBL)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ELPMFIIDCCB_GLKOFMCFKOJ_OFFSET))(this, KHMLCJJBKBL);
	}
};
