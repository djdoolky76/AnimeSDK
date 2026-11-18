#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGLFFKCAGFO_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x18625200)
#define KGLFFKCAGFO_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x18625460)
#define KGLFFKCAGFO_PNIEHHBIBHG_OFFSET UNITYSDK_OFFSET(0x186253A0)
#define KGLFFKCAGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186251C0)

inline static constexpr unsigned int KGLFFKCAGFO_TypeDefinitionIndex = 59481;

class KGLFFKCAGFO : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KGLFFKCAGFO__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLFFKCAGFO_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void PNIEHHBIBHG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KGLFFKCAGFO_PNIEHHBIBHG_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLFFKCAGFO_GPGLNOBDBGJ_OFFSET))(this);
	}
};
