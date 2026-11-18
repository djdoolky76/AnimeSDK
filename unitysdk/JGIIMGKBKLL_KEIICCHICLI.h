#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class StackFrame; }

#define JGIIMGKBKLL_KEIICCHICLI_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1EE978B0)
#define JGIIMGKBKLL_KEIICCHICLI_PGPAGPCJLOC_OFFSET UNITYSDK_OFFSET(0x1EE97B70)
#define JGIIMGKBKLL_KEIICCHICLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE978A0)

inline static constexpr unsigned int JGIIMGKBKLL_KEIICCHICLI_TypeDefinitionIndex = 7971;

class JGIIMGKBKLL_KEIICCHICLI : public ::System::Object
{
public:
	::System::Diagnostics::StackFrame* ENIHFEFHOCN; // 0x10
	::System::String* BLJBJNLLIBF; // 0x18
	::System::String* FGMLFCJGMBI; // 0x20
	::System::String* KLCDHKANPDD; // 0x28
	::System::Int32 CKKPMNOIFCC; // 0x30

	::System::Void _ctor(::System::Diagnostics::StackFrame* GOBCNHMCCAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_KEIICCHICLI__CTOR_OFFSET))(this, GOBCNHMCCAD);
	}

	::System::Void GIAOBHOJCDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_KEIICCHICLI_GIAOBHOJCDP_OFFSET))(this);
	}

	::System::Void PGPAGPCJLOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGIIMGKBKLL_KEIICCHICLI_PGPAGPCJLOC_OFFSET))(this);
	}
};
