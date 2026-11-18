#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMEDHELDEM.h"

#define MODCHDPBFDI_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x11A29C50)
#define MODCHDPBFDI__CTOR_OFFSET UNITYSDK_OFFSET(0x11A29FF0)

inline static constexpr unsigned int MODCHDPBFDI_TypeDefinitionIndex = 85276;

class MODCHDPBFDI : public ::IFMEDHELDEM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODCHDPBFDI__CTOR_OFFSET))(this);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MODCHDPBFDI_GPKMPDHNCGL_OFFSET))(this);
	}
};
