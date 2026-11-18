#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define NPBMNAMFCAB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xE0B5DD0)
#define NPBMNAMFCAB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xE0B5D40)
#define NPBMNAMFCAB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xE0B5CB0)
#define NPBMNAMFCAB__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0B5C30)
#define NPBMNAMFCAB__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B5CA0)

inline static constexpr unsigned int NPBMNAMFCAB_TypeDefinitionIndex = 78250;

class NPBMNAMFCAB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x161; // 0x0
	::System::String* ILOEGFPFCED; // 0x20
	::System::String* AICLCHNJHJH; // 0x28
	::System::Single FAAJGLBBIBH; // 0x30
	::System::UInt32 BKLGNCBNEGM; // 0x34
	::System::Boolean GELCBJDLBII; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPBMNAMFCAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBMNAMFCAB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBMNAMFCAB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBMNAMFCAB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 BKLGNCBNEGM, ::System::String* AICLCHNJHJH, ::System::String* ILOEGFPFCED, ::System::Single NHLCCIEKEPD, ::System::Boolean GELCBJDLBII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPBMNAMFCAB_CNHBDOMKKDE_OFFSET))(this, BKLGNCBNEGM, AICLCHNJHJH, ILOEGFPFCED, NHLCCIEKEPD, GELCBJDLBII);
	}
};
