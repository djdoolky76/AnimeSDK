#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/NADBPCAFDKF.h"

class POEFNHLMODJ;

#define NLDOFMAEIIC_BPJNBMABAJK_OFFSET UNITYSDK_OFFSET(0x1AE28880)
#define NLDOFMAEIIC_IBJIAFJNGKN_OFFSET UNITYSDK_OFFSET(0x1AE28870)
#define NLDOFMAEIIC_MADNEMKMDLG_OFFSET UNITYSDK_OFFSET(0x1AE28890)
#define NLDOFMAEIIC_NPFBLDFFOHN_OFFSET UNITYSDK_OFFSET(0x1AE288A0)
#define NLDOFMAEIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE28860)

inline static constexpr unsigned int NLDOFMAEIIC_TypeDefinitionIndex = 89685;

class NLDOFMAEIIC : public ::NADBPCAFDKF
{
public:
	::System::Boolean _KFALCLDAPHL_k__BackingField; // 0x20
	::System::Boolean _MCACFCIHMHF_k__BackingField; // 0x21

	::System::Void _ctor(::KPBPGBNIDOK OBNIAHNMHPF, ::POEFNHLMODJ* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::KPBPGBNIDOK, ::POEFNHLMODJ*))((::PBYTE)hIl2Cpp + NLDOFMAEIIC__CTOR_OFFSET))(this, OBNIAHNMHPF, CBKKFECGFAG);
	}

	::System::Void IBJIAFJNGKN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDOFMAEIIC_IBJIAFJNGKN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BPJNBMABAJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDOFMAEIIC_BPJNBMABAJK_OFFSET))(this);
	}

	::System::Boolean MADNEMKMDLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDOFMAEIIC_MADNEMKMDLG_OFFSET))(this);
	}

	::System::Void NPFBLDFFOHN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDOFMAEIIC_NPFBLDFFOHN_OFFSET))(this, EGEGIMGMJHN);
	}
};
