#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB454B58A0E2FAB5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A625D585357F45FC_E2A179F371447913_F89E000809C3CB5B_OFFSET UNITYSDK_OFFSET(0x38B4590)
#define A625D585357F45FC_E2A179F371447913__CTOR_OFFSET UNITYSDK_OFFSET(0x38B4810)

inline static constexpr unsigned int A625D585357F45FC_E2A179F371447913_TypeDefinitionIndex = 20280;

class A625D585357F45FC_E2A179F371447913 : public ::System::Object
{
public:
	::System::Int32 FD55D57A13F0B56C; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* F23A2FED1427BA00; // 0x18
	::System::Int32 B5A2829320456A07; // 0x20
	::System::Boolean E336E06855457F13; // 0x24
	::System::Byte _padding1[0x3];
	::System::Collections::Generic::List_1<::System::Int32>* EF484D4DB6179D5E; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* A398C23E2272E709; // 0x30

	::System::Void F89E000809C3CB5B(::BB454B58A0E2FAB5* E1A091262C10AC9B)
	{
		return ((::System::Void(*)(::PVOID, ::BB454B58A0E2FAB5*))((::PBYTE)hIl2Cpp + A625D585357F45FC_E2A179F371447913_F89E000809C3CB5B_OFFSET))(this, E1A091262C10AC9B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A625D585357F45FC_E2A179F371447913__CTOR_OFFSET))(this);
	}
};
