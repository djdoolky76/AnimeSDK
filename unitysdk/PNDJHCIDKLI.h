#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PNDJHCIDKLI_NCGAIGHMGGN_OFFSET UNITYSDK_OFFSET(0x1C66D8E0)
#define PNDJHCIDKLI_PFLGMEACMMF_OFFSET UNITYSDK_OFFSET(0x1C66D8D0)
#define PNDJHCIDKLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66D8F0)

inline static constexpr unsigned int PNDJHCIDKLI_TypeDefinitionIndex = 66492;

class PNDJHCIDKLI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDJHCIDKLI__CTOR_OFFSET))(this);
	}

	::System::Boolean PFLGMEACMMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDJHCIDKLI_PFLGMEACMMF_OFFSET))(this);
	}

	::System::Boolean NCGAIGHMGGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDJHCIDKLI_NCGAIGHMGGN_OFFSET))(this);
	}
};
