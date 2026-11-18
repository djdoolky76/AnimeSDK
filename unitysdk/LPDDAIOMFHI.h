#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPDDAIOMFHI_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14DCC840)
#define LPDDAIOMFHI_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x14DCCBC0)
#define LPDDAIOMFHI_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x14DCCC50)
#define LPDDAIOMFHI_LIEJEMFHFLG_OFFSET UNITYSDK_OFFSET(0x14DCCCE0)
#define LPDDAIOMFHI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14DCCA00)
#define LPDDAIOMFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCC800)

inline static constexpr unsigned int LPDDAIOMFHI_TypeDefinitionIndex = 70137;

class LPDDAIOMFHI : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LPDDAIOMFHI__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDDAIOMFHI_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDDAIOMFHI_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDDAIOMFHI_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDDAIOMFHI_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void LIEJEMFHFLG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LPDDAIOMFHI_LIEJEMFHFLG_OFFSET))(this, KOIBHLHLMFC);
	}
};
