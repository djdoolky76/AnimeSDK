#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIHMMHIBOFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15E656B0)

inline static constexpr unsigned int FIHMMHIBOFO_TypeDefinitionIndex = 54860;

class FIHMMHIBOFO : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MOOHFHCPOIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMHIBOFO__CTOR_OFFSET))(this);
	}
};
