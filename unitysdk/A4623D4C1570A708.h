#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB15B066A5E7656D.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A4623D4C1570A708__CTOR_OFFSET UNITYSDK_OFFSET(0x244F630)

inline static constexpr unsigned int A4623D4C1570A708_TypeDefinitionIndex = 2461;

class A4623D4C1570A708 : public ::System::Object
{
public:
	::A4623D4C1570A708* F499A979184543FE; // 0x10
	::System::Collections::Generic::List_1<::A4623D4C1570A708*>* B1648319BD272055; // 0x18
	::System::UInt16 A75C21E58BFAE3D9; // 0x20
	::System::Byte _padding0[0x6];
	::FB15B066A5E7656D FDE28A8BD02E1940; // 0x28
	::System::String* F258E36C00C06AD2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4623D4C1570A708__CTOR_OFFSET))(this);
	}
};
