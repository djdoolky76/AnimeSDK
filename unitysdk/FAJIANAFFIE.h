#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define FAJIANAFFIE_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x158C8FF0)
#define FAJIANAFFIE_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x158C9310)
#define FAJIANAFFIE_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x158C9360)
#define FAJIANAFFIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158C8DD0)
#define FAJIANAFFIE__CTOR_OFFSET UNITYSDK_OFFSET(0x158C92D0)

inline static constexpr unsigned int FAJIANAFFIE_TypeDefinitionIndex = 74726;

class FAJIANAFFIE : public ::BBKFNNHAKBP
{
public:
	::System::Int32 NHBLOAFAKCI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJIANAFFIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJIANAFFIE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJIANAFFIE_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void IAFHBCHLBME(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FAJIANAFFIE_IAFHBCHLBME_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJIANAFFIE_KHAEIOINMBG_OFFSET))(this);
	}
};
