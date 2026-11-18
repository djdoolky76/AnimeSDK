#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define ILDCPMCPLGP_CHBKMOOINHE_OFFSET UNITYSDK_OFFSET(0x198812F0)
#define ILDCPMCPLGP__CTOR_OFFSET UNITYSDK_OFFSET(0x19881290)

inline static constexpr unsigned int ILDCPMCPLGP_TypeDefinitionIndex = 49980;

class ILDCPMCPLGP : public ::ResourceModeBase
{
public:
	::System::Int32 PAAFENAOCDJ; // 0x18
	::System::Int32 HCNDMIJPEAJ; // 0x1C
	::System::Int32 OBKGEIELIKK; // 0x20

	::System::Void _ctor(::System::Action* DIENEAELFIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILDCPMCPLGP__CTOR_OFFSET))(this, DIENEAELFIL);
	}

	::System::Void CHBKMOOINHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDCPMCPLGP_CHBKMOOINHE_OFFSET))(this);
	}
};
