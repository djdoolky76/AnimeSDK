#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMIKJGEKELK_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x17726E30)
#define KMIKJGEKELK_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x17727220)
#define KMIKJGEKELK_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x17727190)
#define KMIKJGEKELK_HIAJKHDOOBN_OFFSET UNITYSDK_OFFSET(0x177272B0)
#define KMIKJGEKELK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x17726FF0)
#define KMIKJGEKELK__CTOR_OFFSET UNITYSDK_OFFSET(0x17726C90)

inline static constexpr unsigned int KMIKJGEKELK_TypeDefinitionIndex = 43659;

class KMIKJGEKELK : public ::KBGGKIJMICI
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x38
	::System::Single KKGGACLGGPN; // 0x3C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KMIKJGEKELK__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKJGEKELK_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKJGEKELK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKJGEKELK_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIKJGEKELK_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void HIAJKHDOOBN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KMIKJGEKELK_HIAJKHDOOBN_OFFSET))(this, KOIBHLHLMFC);
	}
};
