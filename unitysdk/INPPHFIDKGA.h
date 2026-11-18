#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMDNLGGOIIH.h"

class ECFKCNGMEKJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INPPHFIDKGA_AMODPADDIKK_OFFSET UNITYSDK_OFFSET(0x13AB1190)
#define INPPHFIDKGA__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB13E0)

inline static constexpr unsigned int INPPHFIDKGA_TypeDefinitionIndex = 72378;

class INPPHFIDKGA : public ::BMDNLGGOIIH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPPHFIDKGA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::ECFKCNGMEKJ*>* AMODPADDIKK()
	{
		return ((::System::Collections::Generic::List_1<::ECFKCNGMEKJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPPHFIDKGA_AMODPADDIKK_OFFSET))(this);
	}
};
