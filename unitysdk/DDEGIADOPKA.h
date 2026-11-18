#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

namespace System { class String; }

#define DDEGIADOPKA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15A2BDF0)
#define DDEGIADOPKA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15A2BE90)
#define DDEGIADOPKA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15A2BD60)
#define DDEGIADOPKA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A2BCE0)
#define DDEGIADOPKA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2BD50)

inline static constexpr unsigned int DDEGIADOPKA_TypeDefinitionIndex = 51899;

class DDEGIADOPKA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB6; // 0x0
	::System::String* PBJCMCHDODK; // 0x20
	::System::Double NJNCOHLPLNJ; // 0x28
	::MoleMole::Config::BaseProperty BJDBMPAGCNF; // 0x30
	::System::UInt32 AGKLHCGKFPA; // 0x34
	::System::Double OAPPAPMDAGF; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDEGIADOPKA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEGIADOPKA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEGIADOPKA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 AFLCLPLFEHI, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* FBLGONAJGHM, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + DDEGIADOPKA_CNHBDOMKKDE_OFFSET))(this, AFLCLPLFEHI, OBNIAHNMHPF, FBLGONAJGHM, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEGIADOPKA_FIGPAOKNJLN_OFFSET))(this);
	}
};
