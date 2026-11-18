#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIMCAAHJMHI.h"

class OEKIGPFEOFG;
namespace System { class String; }

#define IMNAJNLNJMI_DHFPPDFKILN_OFFSET UNITYSDK_OFFSET(0x13820F90)
#define IMNAJNLNJMI_FKDCBPFPBPO_OFFSET UNITYSDK_OFFSET(0x13820DC0)
#define IMNAJNLNJMI_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x13820FD0)
#define IMNAJNLNJMI_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x138211A0)
#define IMNAJNLNJMI__CTOR_OFFSET UNITYSDK_OFFSET(0x13820DB0)

inline static constexpr unsigned int IMNAJNLNJMI_TypeDefinitionIndex = 56008;

class IMNAJNLNJMI : public ::System::Object
{
public:
	::OEKIGPFEOFG* OFAJAJOFGNC; // 0x10
	::System::Boolean IHMIMBBFNHF; // 0x18
	::System::Byte _padding0[0x7];
	::System::Double JPIHKNPJKPH; // 0x20

	::System::Void _ctor(::OEKIGPFEOFG* AOKHOHCJNFJ, ::System::Double FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::OEKIGPFEOFG*, ::System::Double))((::PBYTE)hIl2Cpp + IMNAJNLNJMI__CTOR_OFFSET))(this, AOKHOHCJNFJ, FNIOPKPHDEH);
	}

	::System::Void FKDCBPFPBPO(::PIMCAAHJMHI AAOCANGHBDG, ::System::Boolean EPGLPGPOOJN, ::System::String* AMMEMMMOCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + IMNAJNLNJMI_FKDCBPFPBPO_OFFSET))(this, AAOCANGHBDG, EPGLPGPOOJN, AMMEMMMOCFO);
	}

	::System::Void DHFPPDFKILN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNAJNLNJMI_DHFPPDFKILN_OFFSET))(this);
	}

	::System::Void HIIMHKCMBGK(::PIMCAAHJMHI AAOCANGHBDG, ::System::String* AMMEMMMOCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PIMCAAHJMHI, ::System::String*))((::PBYTE)hIl2Cpp + IMNAJNLNJMI_HIIMHKCMBGK_OFFSET))(this, AAOCANGHBDG, AMMEMMMOCFO);
	}

	::System::Double PIPBPLEIPFK()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNAJNLNJMI_PIPBPLEIPFK_OFFSET))(this);
	}
};
