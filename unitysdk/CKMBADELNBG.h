#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKMBADELNBG_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1496F9C0)
#define CKMBADELNBG_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1496FB30)
#define CKMBADELNBG_LIPGMHBBJDP_OFFSET UNITYSDK_OFFSET(0x1496FBC0)
#define CKMBADELNBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1496F900)

inline static constexpr unsigned int CKMBADELNBG_TypeDefinitionIndex = 77723;

class CKMBADELNBG : public ::KBGGKIJMICI
{
public:
	::System::Boolean NNGJGJPECGI; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CKMBADELNBG__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMBADELNBG_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMBADELNBG_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void LIPGMHBBJDP(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CKMBADELNBG_LIPGMHBBJDP_OFFSET))(this, MNDIBLLFAJI);
	}
};
