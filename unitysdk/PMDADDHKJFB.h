#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PMDADDHKJFB_BPJCJIKMLCL_OFFSET UNITYSDK_OFFSET(0x1D1F45A0)
#define PMDADDHKJFB_GJDNEMPEBIA_OFFSET UNITYSDK_OFFSET(0x1D1F40C0)
#define PMDADDHKJFB_IHJEOBEKNAB_OFFSET UNITYSDK_OFFSET(0x1D1F4150)
#define PMDADDHKJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F40B0)

inline static constexpr unsigned int PMDADDHKJFB_TypeDefinitionIndex = 92326;

class PMDADDHKJFB : public ::System::Object
{
public:
	::System::Double MKBKLEEGLOB; // 0x10
	::System::Double HPKIFBAGNJE; // 0x18
	::System::Double KJDMIDNIMNF; // 0x20
	::MoleMole::Config::EntityType JAICKFPPOEO; // 0x28
	::System::Byte _padding0[0x4];
	::System::Double DILGDJODKID; // 0x30
	::System::Double HGIFDBJKOHA; // 0x38
	::System::Int32 ANNAENDJPBH; // 0x40
	::System::UInt32 AOGNNJLKHGL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDADDHKJFB__CTOR_OFFSET))(this);
	}

	::PMDADDHKJFB* GJDNEMPEBIA(::PMDADDHKJFB* LIBPKNHDIGP)
	{
		return ((::PMDADDHKJFB*(*)(::PVOID, ::PMDADDHKJFB*))((::PBYTE)hIl2Cpp + PMDADDHKJFB_GJDNEMPEBIA_OFFSET))(this, LIBPKNHDIGP);
	}

	::PMDADDHKJFB* IHJEOBEKNAB(::PMDADDHKJFB* LIBPKNHDIGP)
	{
		return ((::PMDADDHKJFB*(*)(::PVOID, ::PMDADDHKJFB*))((::PBYTE)hIl2Cpp + PMDADDHKJFB_IHJEOBEKNAB_OFFSET))(this, LIBPKNHDIGP);
	}

	static ::System::Void BPJCJIKMLCL(::System::Double& JGDAHIOOOKH, ::System::Double NEFGMLFNLMB, ::System::String* HAAJFLJEHNH, ::PMDADDHKJFB* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::System::Double&, ::System::Double, ::System::String*, ::PMDADDHKJFB*))((::PBYTE)hIl2Cpp + PMDADDHKJFB_BPJCJIKMLCL_OFFSET))(JGDAHIOOOKH, NEFGMLFNLMB, HAAJFLJEHNH, LIBPKNHDIGP);
	}
};
