#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OBBIKGGGMGB_DELETE_OFFSET UNITYSDK_OFFSET(0xB3070A0)
#define OBBIKGGGMGB_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0xB306FB0)
#define OBBIKGGGMGB_LHMFFPFMKFF_OFFSET UNITYSDK_OFFSET(0xB307140)
#define OBBIKGGGMGB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0xB307280)
#define OBBIKGGGMGB_NILHOFNKJMC_OFFSET UNITYSDK_OFFSET(0xB306FD0)
#define OBBIKGGGMGB_OHFCOGBOKAL_OFFSET UNITYSDK_OFFSET(0xB306F10)
#define OBBIKGGGMGB__CTOR_OFFSET UNITYSDK_OFFSET(0xB306EF0)

inline static constexpr unsigned int OBBIKGGGMGB_TypeDefinitionIndex = 66769;

class OBBIKGGGMGB : public ::System::Object
{
public:
	::System::String* FPPGADFCPCF; // 0x10
	::System::String* AOGHOMIOONK; // 0x18

	::System::Void _ctor(::System::String* CIOAFOKNMJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBBIKGGGMGB__CTOR_OFFSET))(this, CIOAFOKNMJC);
	}

	::System::Boolean OHFCOGBOKAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBIKGGGMGB_OHFCOGBOKAL_OFFSET))(this);
	}

	::System::Void Delete()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBIKGGGMGB_DELETE_OFFSET))(this);
	}

	::System::Void LHMFFPFMKFF(::System::String* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBBIKGGGMGB_LHMFFPFMKFF_OFFSET))(this, NGHLLDAJJJE);
	}

	::System::String* LNFENFDLMIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBIKGGGMGB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::String* NILHOFNKJMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBIKGGGMGB_NILHOFNKJMC_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBIKGGGMGB_JDAPDDEOCEA_OFFSET))(this);
	}
};
