#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFHIIOKFOIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1520A6F0)

inline static constexpr unsigned int KFHIIOKFOIF_TypeDefinitionIndex = 60355;

class KFHIIOKFOIF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MNMHNOPFOOL; // 0x10
	::System::Boolean POBECEBJGFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHIIOKFOIF__CTOR_OFFSET))(this);
	}
};
