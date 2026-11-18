#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPFNLOFNPDM.h"

class EIBHHJENHJK_FBLJJPOFPNE;

#define EIBHHJENHJK_HMMINGHJGGH_HKDCEPKMNBH_OFFSET UNITYSDK_OFFSET(0x171112D0)
#define EIBHHJENHJK_HMMINGHJGGH__CTOR_OFFSET UNITYSDK_OFFSET(0x171112C0)

inline static constexpr unsigned int EIBHHJENHJK_HMMINGHJGGH_TypeDefinitionIndex = 71901;

class EIBHHJENHJK_HMMINGHJGGH : public ::System::Object
{
public:
	::EIBHHJENHJK_FBLJJPOFPNE* FGBNBFHOKAA; // 0x10
	::ICEBNIECGBK IOKOLJDCKPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HMMINGHJGGH__CTOR_OFFSET))(this);
	}

	::System::Void HKDCEPKMNBH(::DPFNLOFNPDM DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::DPFNLOFNPDM))((::PBYTE)hIl2Cpp + EIBHHJENHJK_HMMINGHJGGH_HKDCEPKMNBH_OFFSET))(this, DJCNCELJPOM);
	}
};
