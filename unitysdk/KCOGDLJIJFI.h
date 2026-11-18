#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCOGDLJIJFI__CTOR_OFFSET UNITYSDK_OFFSET(0x178F2130)

inline static constexpr unsigned int KCOGDLJIJFI_TypeDefinitionIndex = 82038;

class KCOGDLJIJFI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DNFEPFHKJCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOGDLJIJFI__CTOR_OFFSET))(this);
	}
};
