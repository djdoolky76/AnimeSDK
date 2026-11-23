#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB454B58A0E2FAB5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A625D585357F45FC_E21EEC6E68BB6AF2_F89E000809C3CB5B_OFFSET UNITYSDK_OFFSET(0x38B2610)
#define A625D585357F45FC_E21EEC6E68BB6AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x38B26D0)

inline static constexpr unsigned int A625D585357F45FC_E21EEC6E68BB6AF2_TypeDefinitionIndex = 20285;

class A625D585357F45FC_E21EEC6E68BB6AF2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* E3ADABD460DA2204; // 0x10
	::System::Int32 FA5545FCA0711CBC; // 0x18
	::System::Int32 A486BB90597081E7; // 0x1C
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* B634781626E0AA54; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* A016EB53104F5767; // 0x28

	::System::Void F89E000809C3CB5B(::BB454B58A0E2FAB5* E1A091262C10AC9B)
	{
		return ((::System::Void(*)(::PVOID, ::BB454B58A0E2FAB5*))((::PBYTE)hIl2Cpp + A625D585357F45FC_E21EEC6E68BB6AF2_F89E000809C3CB5B_OFFSET))(this, E1A091262C10AC9B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A625D585357F45FC_E21EEC6E68BB6AF2__CTOR_OFFSET))(this);
	}
};
