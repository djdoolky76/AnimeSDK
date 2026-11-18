#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_DOINKBCEALL_OBCFLJLOGMH_OFFSET UNITYSDK_OFFSET(0x13A883B0)
#define PCMENEMPLGF_DOINKBCEALL__CTOR_OFFSET UNITYSDK_OFFSET(0x13A883A0)

inline static constexpr unsigned int PCMENEMPLGF_DOINKBCEALL_TypeDefinitionIndex = 62870;

class PCMENEMPLGF_DOINKBCEALL : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* FNLFIGOIPMM; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MJMEDDHCABL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_DOINKBCEALL__CTOR_OFFSET))(this);
	}

	::System::Void OBCFLJLOGMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_DOINKBCEALL_OBCFLJLOGMH_OFFSET))(this);
	}
};
