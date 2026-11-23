#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A152C8B3238F2872;
class AB642D1382756991;
class E54DF5A49C0FEEFD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B8F1BC0B48A1CED8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8F1BC0B48A1CED8_TypeDefinitionIndex = 879;

class B8F1BC0B48A1CED8 : public ::System::Object
{
public:
	::A152C8B3238F2872* AD13C6A9CD32769F; // 0x10
	::System::Collections::Generic::List_1<::AB642D1382756991*>* B788AA87173F6995; // 0x18
	::E54DF5A49C0FEEFD* FDE06535ED4102B1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8F1BC0B48A1CED8__CTOR_OFFSET))(this);
	}
};
