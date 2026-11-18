#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBGLDEKGJJD;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define OIDBGEPJCLN_EDGBOGOBGEJ_OFFSET UNITYSDK_OFFSET(0x14F7A450)
#define OIDBGEPJCLN_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x14F799A0)
#define OIDBGEPJCLN__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F79960)
#define OIDBGEPJCLN__CTOR_OFFSET UNITYSDK_OFFSET(0x14F79950)

inline static constexpr unsigned int OIDBGEPJCLN_TypeDefinitionIndex = 52631;

class OIDBGEPJCLN : public ::System::Object
{
public:
	static ::System::String** StaticGet_IMIKLFKAJBM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OIDBGEPJCLN_TypeDefinitionIndex)->GetStaticField(0x491C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDBGEPJCLN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIDBGEPJCLN__CCTOR_OFFSET))();
	}

	static ::System::Void KNDMMHPDPIB(::MBGLDEKGJJD* DPPFJDCEIOO)
	{
		return ((::System::Void(*)(::MBGLDEKGJJD*))((::PBYTE)hIl2Cpp + OIDBGEPJCLN_KNDMMHPDPIB_OFFSET))(DPPFJDCEIOO);
	}

	static ::System::Void EDGBOGOBGEJ(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::System::UInt32 DJBPKIEMAGC)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + OIDBGEPJCLN_EDGBOGOBGEJ_OFFSET))(KECKGDFIALJ, DJBPKIEMAGC);
	}
};
