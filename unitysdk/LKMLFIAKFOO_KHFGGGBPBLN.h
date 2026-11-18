#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_KHFGGGBPBLN_CEICJPCDCMH_OFFSET UNITYSDK_OFFSET(0xD437880)
#define LKMLFIAKFOO_KHFGGGBPBLN_MPBIOOOBIFD_OFFSET UNITYSDK_OFFSET(0xD437840)
#define LKMLFIAKFOO_KHFGGGBPBLN__CTOR_OFFSET UNITYSDK_OFFSET(0xD437830)

inline static constexpr unsigned int LKMLFIAKFOO_KHFGGGBPBLN_TypeDefinitionIndex = 43603;

class LKMLFIAKFOO_KHFGGGBPBLN : public ::System::Object
{
public:
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Action* GOOPOJIJKKJ; // 0x20
	::System::Action* CAAFEGLOALC; // 0x28
	::System::Int32 KLJNHMGMDNP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KHFGGGBPBLN__CTOR_OFFSET))(this);
	}

	::System::Void MPBIOOOBIFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KHFGGGBPBLN_MPBIOOOBIFD_OFFSET))(this);
	}

	::System::Void CEICJPCDCMH(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_KHFGGGBPBLN_CEICJPCDCMH_OFFSET))(this, PJMOJNFEHLF);
	}
};
