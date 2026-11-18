#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/KIPDFGJHIKA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define CKMINKAIMOF_AAEKDLMLBDG_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define CKMINKAIMOF_AGOPEPDDFKO_OFFSET UNITYSDK_OFFSET(0x282350)
#define CKMINKAIMOF_BEACIHBKFLA_OFFSET UNITYSDK_OFFSET(0x363D60)
#define CKMINKAIMOF_CGICCOBHACH_OFFSET UNITYSDK_OFFSET(0x13269B40)
#define CKMINKAIMOF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x701530)
#define CKMINKAIMOF_EGHKKNGDALB_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define CKMINKAIMOF_ELIBBHDOEGB_OFFSET UNITYSDK_OFFSET(0x358B00)
#define CKMINKAIMOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x701390)
#define CKMINKAIMOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x7012E0)
#define CKMINKAIMOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7013A0)
#define CKMINKAIMOF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x701460)
#define CKMINKAIMOF_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define CKMINKAIMOF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7014C0)
#define CKMINKAIMOF_PJKALPGPENM_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define CKMINKAIMOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x701400)
#define CKMINKAIMOF__CTOR_OFFSET UNITYSDK_OFFSET(0x368340)

inline static constexpr unsigned int CKMINKAIMOF_TypeDefinitionIndex = 84886;

struct alignas(4) CKMINKAIMOF
{
	::Foundation::ViewObject::GroupMemberIdentifier _PFNNBHAFJLE_k__BackingField; // 0x10
	::KIPDFGJHIKA _DFFPNJBHOMP_k__BackingField; // 0x18
	::System::Int32 _AGKFBCBEANI_k__BackingField; // 0x1C

	::System::Void _ctor(::Foundation::ViewObject::GroupMemberIdentifier OIEMPMGCNPD, ::KIPDFGJHIKA OKKJNLCNPPL, ::System::Int32 JNJHLECOPIG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::KIPDFGJHIKA, ::System::Int32))((::PBYTE)hIl2Cpp + CKMINKAIMOF__CTOR_OFFSET))(this, OIEMPMGCNPD, OKKJNLCNPPL, JNJHLECOPIG);
	}

	/*
	::System::Boolean Equals(::CKMINKAIMOF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CKMINKAIMOF))((::PBYTE)hIl2Cpp + CKMINKAIMOF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKMINKAIMOF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_TOSTRING_OFFSET))(this);
	}

	::System::Void ELIBBHDOEGB(::Foundation::ViewObject::GroupMemberIdentifier EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CKMINKAIMOF_ELIBBHDOEGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::ViewObject::GroupMemberIdentifier AGOPEPDDFKO()
	{
		return ((::Foundation::ViewObject::GroupMemberIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_AGOPEPDDFKO_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_HLPHPBAODIF_OFFSET))(this);
	}

	::KIPDFGJHIKA BEACIHBKFLA()
	{
		return ((::KIPDFGJHIKA(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_BEACIHBKFLA_OFFSET))(this);
	}

	::System::Void AAEKDLMLBDG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKMINKAIMOF_AAEKDLMLBDG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PJKALPGPENM(::KIPDFGJHIKA EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KIPDFGJHIKA))((::PBYTE)hIl2Cpp + CKMINKAIMOF_PJKALPGPENM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EGHKKNGDALB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_EGHKKNGDALB_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKMINKAIMOF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMINKAIMOF_JDAPDDEOCEA_OFFSET))(this);
	}

	/*
	static ::CKMINKAIMOF CGICCOBHACH()
	{
		return ((::CKMINKAIMOF(*)())((::PBYTE)hIl2Cpp + CKMINKAIMOF_CGICCOBHACH_OFFSET))();
	}
	*/
};
