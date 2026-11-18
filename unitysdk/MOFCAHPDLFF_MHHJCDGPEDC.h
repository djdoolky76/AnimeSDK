#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOFCAHPDLFF_MHHJCDGPEDC_AGKOPPJIBNO_OFFSET UNITYSDK_OFFSET(0x12744740)
#define MOFCAHPDLFF_MHHJCDGPEDC_BDONLAGFFCI_OFFSET UNITYSDK_OFFSET(0x12744730)
#define MOFCAHPDLFF_MHHJCDGPEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x12744720)

inline static constexpr unsigned int MOFCAHPDLFF_MHHJCDGPEDC_TypeDefinitionIndex = 68518;

class MOFCAHPDLFF_MHHJCDGPEDC : public ::System::Object
{
public:
	::System::Boolean PCIEHDPJIDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_MHHJCDGPEDC__CTOR_OFFSET))(this);
	}

	::System::Void BDONLAGFFCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_MHHJCDGPEDC_BDONLAGFFCI_OFFSET))(this);
	}

	::System::Boolean AGKOPPJIBNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_MHHJCDGPEDC_AGKOPPJIBNO_OFFSET))(this);
	}
};
