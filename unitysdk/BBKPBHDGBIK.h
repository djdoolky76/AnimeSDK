#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define BBKPBHDGBIK_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1E71B480)
#define BBKPBHDGBIK_KJNIFMDOKMJ_OFFSET UNITYSDK_OFFSET(0x1E71B510)
#define BBKPBHDGBIK_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1E71B4C0)
#define BBKPBHDGBIK_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1E71B4D0)
#define BBKPBHDGBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71BE00)

inline static constexpr unsigned int BBKPBHDGBIK_TypeDefinitionIndex = 93400;

class BBKPBHDGBIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKPBHDGBIK__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKPBHDGBIK_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKPBHDGBIK_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKPBHDGBIK_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* KJNIFMDOKMJ()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + BBKPBHDGBIK_KJNIFMDOKMJ_OFFSET))();
	}
};
