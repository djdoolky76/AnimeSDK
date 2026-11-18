#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDMKFGHGDDI_HOCNBMGLHJG__CTOR_OFFSET UNITYSDK_OFFSET(0x136F4090)

inline static constexpr unsigned int PDMKFGHGDDI_HOCNBMGLHJG_TypeDefinitionIndex = 84211;

class PDMKFGHGDDI_HOCNBMGLHJG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LPCHIFBFJCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMKFGHGDDI_HOCNBMGLHJG__CTOR_OFFSET))(this);
	}
};
