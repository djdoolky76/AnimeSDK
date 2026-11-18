#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define GCGFJKDCJBN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11C9D6D0)
#define GCGFJKDCJBN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11C9D640)
#define GCGFJKDCJBN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11C9D5B0)
#define GCGFJKDCJBN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C9D530)
#define GCGFJKDCJBN__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9D5A0)

inline static constexpr unsigned int GCGFJKDCJBN_TypeDefinitionIndex = 92835;

class GCGFJKDCJBN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA2; // 0x0
	::System::String* KDFLKAFDIDN; // 0x20
	::System::Single MIAMJKCBJBD; // 0x28
	::System::Single AOGMHAAELJC; // 0x2C
	::System::Single BMBPHHOADHB; // 0x30
	::System::Single NCLLDDCAMMC; // 0x34
	::System::Single KKBPKGGKFLE; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCGFJKDCJBN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGFJKDCJBN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGFJKDCJBN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGFJKDCJBN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AELLPLBJELA, ::System::Single MOHOOPOGOOA, ::System::Single AAJKJBDNAHA, ::System::Single FAMIFMCOMJF, ::System::Single CPNIGPKPNJH, ::System::Single AFFNHIMFOIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GCGFJKDCJBN_CNHBDOMKKDE_OFFSET))(this, AELLPLBJELA, MOHOOPOGOOA, AAJKJBDNAHA, FAMIFMCOMJF, CPNIGPKPNJH, AFFNHIMFOIP);
	}
};
