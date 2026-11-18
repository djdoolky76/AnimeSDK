#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BMPGJHGMOBJ_MKJIBEBMOBN__CTOR_OFFSET UNITYSDK_OFFSET(0x10E10090)

inline static constexpr unsigned int BMPGJHGMOBJ_MKJIBEBMOBN_TypeDefinitionIndex = 58014;

class BMPGJHGMOBJ_MKJIBEBMOBN : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DHGMNIGDJDM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_MKJIBEBMOBN__CTOR_OFFSET))(this);
	}
};
