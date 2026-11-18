#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDJAOFHAMJJ_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x18657BD0)
#define LDJAOFHAMJJ_FMKFMKGONHK_OFFSET UNITYSDK_OFFSET(0x18658290)
#define LDJAOFHAMJJ_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x18658170)
#define LDJAOFHAMJJ_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x18658200)
#define LDJAOFHAMJJ_ICAHNGDMLOO_OFFSET UNITYSDK_OFFSET(0x18658340)
#define LDJAOFHAMJJ_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x18657EA0)
#define LDJAOFHAMJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18657B10)

inline static constexpr unsigned int LDJAOFHAMJJ_TypeDefinitionIndex = 65361;

class LDJAOFHAMJJ : public ::KBGGKIJMICI
{
public:
	::System::Int32 NADEONENDKJ; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void FMKFMKGONHK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ_FMKFMKGONHK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ICAHNGDMLOO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LDJAOFHAMJJ_ICAHNGDMLOO_OFFSET))(this, KOIBHLHLMFC);
	}
};
