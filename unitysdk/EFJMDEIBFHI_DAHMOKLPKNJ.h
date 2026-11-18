#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EFJMDEIBFHI_DAHMOKLPKNJ_AMOPKFHOCKL_OFFSET UNITYSDK_OFFSET(0x1722D7A0)
#define EFJMDEIBFHI_DAHMOKLPKNJ_KNAABLCEKPC_OFFSET UNITYSDK_OFFSET(0x1722D790)
#define EFJMDEIBFHI_DAHMOKLPKNJ_NHKPLFEDDGP_OFFSET UNITYSDK_OFFSET(0x1722D7B0)
#define EFJMDEIBFHI_DAHMOKLPKNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1722D780)

inline static constexpr unsigned int EFJMDEIBFHI_DAHMOKLPKNJ_TypeDefinitionIndex = 82258;

class EFJMDEIBFHI_DAHMOKLPKNJ : public ::System::Object
{
public:
	::System::Nullable_1<::System::Boolean> GOIJJCEKPOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_DAHMOKLPKNJ__CTOR_OFFSET))(this);
	}

	::System::Void KNAABLCEKPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_DAHMOKLPKNJ_KNAABLCEKPC_OFFSET))(this);
	}

	::System::Void AMOPKFHOCKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_DAHMOKLPKNJ_AMOPKFHOCKL_OFFSET))(this);
	}

	::System::Boolean NHKPLFEDDGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_DAHMOKLPKNJ_NHKPLFEDDGP_OFFSET))(this);
	}
};
