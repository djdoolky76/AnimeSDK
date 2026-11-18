#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define KCKODGMDFJK_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1E7249C0)
#define KCKODGMDFJK_GJJNAIMKPOK_OFFSET UNITYSDK_OFFSET(0x1E724A50)
#define KCKODGMDFJK_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1E724A00)
#define KCKODGMDFJK_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1E724A10)
#define KCKODGMDFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E725330)

inline static constexpr unsigned int KCKODGMDFJK_TypeDefinitionIndex = 93934;

class KCKODGMDFJK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKODGMDFJK__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKODGMDFJK_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKODGMDFJK_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKODGMDFJK_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* GJJNAIMKPOK()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + KCKODGMDFJK_GJJNAIMKPOK_OFFSET))();
	}
};
