#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEALJIFCCEE__CTOR_OFFSET UNITYSDK_OFFSET(0xD423240)

inline static constexpr unsigned int LEALJIFCCEE_TypeDefinitionIndex = 66923;

class LEALJIFCCEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KMCNFBOKJIM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEALJIFCCEE__CTOR_OFFSET))(this);
	}
};
