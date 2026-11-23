#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define F839084093EDF197__CTOR_OFFSET UNITYSDK_OFFSET(0x3898BB0)

inline static constexpr unsigned int F839084093EDF197_TypeDefinitionIndex = 18154;

class F839084093EDF197 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* B02863ACDA65188B; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* E12607A5FE524C8F; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F839084093EDF197__CTOR_OFFSET))(this);
	}
};
