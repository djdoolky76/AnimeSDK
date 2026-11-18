#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define FAMLIBDAAPN_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1D987950)
#define FAMLIBDAAPN_GKDJCIIPEJL_OFFSET UNITYSDK_OFFSET(0x1D9879E0)
#define FAMLIBDAAPN_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1D987990)
#define FAMLIBDAAPN_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1D9879A0)
#define FAMLIBDAAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D988350)

inline static constexpr unsigned int FAMLIBDAAPN_TypeDefinitionIndex = 93781;

class FAMLIBDAAPN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLIBDAAPN__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLIBDAAPN_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLIBDAAPN_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLIBDAAPN_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* GKDJCIIPEJL()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + FAMLIBDAAPN_GKDJCIIPEJL_OFFSET))();
	}
};
