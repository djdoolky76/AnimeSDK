#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMBEGGNNBPC_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1814F3C0)
#define GMBEGGNNBPC_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1814FA50)
#define GMBEGGNNBPC_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x1814F740)
#define GMBEGGNNBPC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1814F580)
#define GMBEGGNNBPC_MEHFMMCEIDA_OFFSET UNITYSDK_OFFSET(0x1814F7D0)
#define GMBEGGNNBPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1814F210)

inline static constexpr unsigned int GMBEGGNNBPC_TypeDefinitionIndex = 82650;

class GMBEGGNNBPC : public ::KBGGKIJMICI
{
public:
	::System::Boolean PMPCAPPODON; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 HFPCJJLPEBD; // 0x3C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + GMBEGGNNBPC__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBEGGNNBPC_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBEGGNNBPC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBEGGNNBPC_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void MEHFMMCEIDA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GMBEGGNNBPC_MEHFMMCEIDA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBEGGNNBPC_GPGLNOBDBGJ_OFFSET))(this);
	}
};
