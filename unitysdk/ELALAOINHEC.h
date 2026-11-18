#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define ELALAOINHEC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14AA6070)
#define ELALAOINHEC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14AA5FE0)
#define ELALAOINHEC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14AA5F50)
#define ELALAOINHEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AA5ED0)
#define ELALAOINHEC__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA5F40)

inline static constexpr unsigned int ELALAOINHEC_TypeDefinitionIndex = 67023;

class ELALAOINHEC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12D; // 0x0
	::System::String* BHDNBGLCNOM; // 0x20
	::System::Single EGEGIMGMJHN; // 0x28
	::System::UInt32 NMPJMCCBNLO; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELALAOINHEC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELALAOINHEC__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELALAOINHEC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELALAOINHEC_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 JHGKGEGGGFF, ::System::String* NAPFALLANDL, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + ELALAOINHEC_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, JHGKGEGGGFF, NAPFALLANDL, EGEGIMGMJHN);
	}
};
