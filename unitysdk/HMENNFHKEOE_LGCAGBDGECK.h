#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
namespace MoleMole { class UICreateRoleNameDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define HMENNFHKEOE_LGCAGBDGECK_GDAIEDFCPIG_OFFSET UNITYSDK_OFFSET(0x19E33B70)
#define HMENNFHKEOE_LGCAGBDGECK_HDNGDGAMAJG_OFFSET UNITYSDK_OFFSET(0x19E33980)
#define HMENNFHKEOE_LGCAGBDGECK_KMPEIKAPPPP_OFFSET UNITYSDK_OFFSET(0x19E33700)
#define HMENNFHKEOE_LGCAGBDGECK_KOIAPABOALP_OFFSET UNITYSDK_OFFSET(0x19E33810)
#define HMENNFHKEOE_LGCAGBDGECK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E336F0)

inline static constexpr unsigned int HMENNFHKEOE_LGCAGBDGECK_TypeDefinitionIndex = 53323;

class HMENNFHKEOE_LGCAGBDGECK : public ::System::Object
{
public:
	::FBHPDPBIGPK* JPPJKKABBCH; // 0x10
	::System::Action* KAKAEMACNPB; // 0x18
	::MoleMole::UICreateRoleNameDialogPopWindowController* CAGFEMEINKF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LGCAGBDGECK__CTOR_OFFSET))(this);
	}

	::System::Void KMPEIKAPPPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LGCAGBDGECK_KMPEIKAPPPP_OFFSET))(this);
	}

	::System::Void KOIAPABOALP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LGCAGBDGECK_KOIAPABOALP_OFFSET))(this);
	}

	::System::Void HDNGDGAMAJG(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LGCAGBDGECK_HDNGDGAMAJG_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void GDAIEDFCPIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_LGCAGBDGECK_GDAIEDFCPIG_OFFSET))(this);
	}
};
