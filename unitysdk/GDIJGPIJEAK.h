#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDIJGPIJEAK_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14136F50)
#define GDIJGPIJEAK_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x141374A0)
#define GDIJGPIJEAK_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x141374E0)
#define GDIJGPIJEAK_HCOFGLPHLBF_OFFSET UNITYSDK_OFFSET(0x141372D0)
#define GDIJGPIJEAK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14137110)
#define GDIJGPIJEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x14136DB0)

inline static constexpr unsigned int GDIJGPIJEAK_TypeDefinitionIndex = 89102;

class GDIJGPIJEAK : public ::KBGGKIJMICI
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x38
	::System::Int32 KKGGACLGGPN; // 0x3C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + GDIJGPIJEAK__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIJGPIJEAK_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIJGPIJEAK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void HCOFGLPHLBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GDIJGPIJEAK_HCOFGLPHLBF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIJGPIJEAK_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIJGPIJEAK_GPOHLEFFNHE_OFFSET))(this);
	}
};
