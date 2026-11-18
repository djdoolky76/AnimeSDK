#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define POFIMLGOIGD_KCMIIDGHEIB_KIBKMMDLHFD_OFFSET UNITYSDK_OFFSET(0x1B9FAE20)
#define POFIMLGOIGD_KCMIIDGHEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FAE10)

inline static constexpr unsigned int POFIMLGOIGD_KCMIIDGHEIB_TypeDefinitionIndex = 57467;

class POFIMLGOIGD_KCMIIDGHEIB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NNPGAKEMPFD; // 0x10
	::System::Boolean MJDCENABBGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KCMIIDGHEIB__CTOR_OFFSET))(this);
	}

	::System::Void KIBKMMDLHFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_KCMIIDGHEIB_KIBKMMDLHFD_OFFSET))(this);
	}
};
