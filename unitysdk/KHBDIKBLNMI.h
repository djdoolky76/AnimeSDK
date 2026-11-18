#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHBDIKBLNMI_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14FD9660)
#define KHBDIKBLNMI_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x14FD9B60)
#define KHBDIKBLNMI_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x14FD9AD0)
#define KHBDIKBLNMI_KJOFEGJEMHI_OFFSET UNITYSDK_OFFSET(0x14FD99E0)
#define KHBDIKBLNMI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14FD9820)
#define KHBDIKBLNMI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD9590)

inline static constexpr unsigned int KHBDIKBLNMI_TypeDefinitionIndex = 65708;

class KHBDIKBLNMI : public ::KBGGKIJMICI
{
public:
	::System::Single IPIAGCPNDBB; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KHBDIKBLNMI__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBDIKBLNMI_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBDIKBLNMI_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void KJOFEGJEMHI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KHBDIKBLNMI_KJOFEGJEMHI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBDIKBLNMI_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBDIKBLNMI_GPGLNOBDBGJ_OFFSET))(this);
	}
};
