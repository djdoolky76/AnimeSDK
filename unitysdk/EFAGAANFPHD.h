#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFAGAANFPHD_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1589ABE0)
#define EFAGAANFPHD_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1589B1F0)
#define EFAGAANFPHD_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x1589B160)
#define EFAGAANFPHD_HCOFGLPHLBF_OFFSET UNITYSDK_OFFSET(0x1589AF60)
#define EFAGAANFPHD_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1589ADA0)
#define EFAGAANFPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1589AAA0)

inline static constexpr unsigned int EFAGAANFPHD_TypeDefinitionIndex = 92602;

class EFAGAANFPHD : public ::KBGGKIJMICI
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + EFAGAANFPHD__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAGAANFPHD_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAGAANFPHD_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void HCOFGLPHLBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EFAGAANFPHD_HCOFGLPHLBF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAGAANFPHD_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAGAANFPHD_GPGLNOBDBGJ_OFFSET))(this);
	}
};
