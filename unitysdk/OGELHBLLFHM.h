#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define OGELHBLLFHM_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1DCA1F40)
#define OGELHBLLFHM_KDJFKBACNME_OFFSET UNITYSDK_OFFSET(0x1DCA1FD0)
#define OGELHBLLFHM_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1DCA1F80)
#define OGELHBLLFHM_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1DCA1F90)
#define OGELHBLLFHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2A00)

inline static constexpr unsigned int OGELHBLLFHM_TypeDefinitionIndex = 93975;

class OGELHBLLFHM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGELHBLLFHM__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGELHBLLFHM_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGELHBLLFHM_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGELHBLLFHM_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* KDJFKBACNME()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + OGELHBLLFHM_KDJFKBACNME_OFFSET))();
	}
};
