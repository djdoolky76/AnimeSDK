#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNPHNIKEBAL;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOFINEMJMHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5150)

inline static constexpr unsigned int GOFINEMJMHG_TypeDefinitionIndex = 29131;

class GOFINEMJMHG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedList_1<::BNPHNIKEBAL*>*>* PFMILOONLJM; // 0x10
	::System::UInt16 OAJGJDDIPKH; // 0x18
	::System::Byte _padding0[0x6];
	::System::UInt64 DNAMHBAACOF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFINEMJMHG__CTOR_OFFSET))(this);
	}
};
