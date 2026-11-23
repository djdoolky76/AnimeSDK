#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B39EE4FB2E5494BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B39EE4FB2E5494BD_TypeDefinitionIndex = 5805;

class B39EE4FB2E5494BD : public ::System::Object
{
public:
	::System::UInt32 AC9D511DAD4A4381; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::AB642D1382756991*>* E76570E9FFA1878D; // 0x18
	::System::Int32 B60305F43469DEEF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B39EE4FB2E5494BD__CTOR_OFFSET))(this);
	}
};
