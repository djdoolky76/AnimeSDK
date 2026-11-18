#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKICHLJKDHA_JGLJHGFNCCB_JFDBJKLLOPF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKICHLJKDHA_JGLJHGFNCCB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7766B0)

inline static constexpr unsigned int GKICHLJKDHA_JGLJHGFNCCB_TypeDefinitionIndex = 88004;

struct alignas(8) GKICHLJKDHA_JGLJHGFNCCB
{
	::GKICHLJKDHA_JGLJHGFNCCB_JFDBJKLLOPF PLNOPNKNAKJ; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Object*>* HOHDCOPKPCF; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* KAPEMLPEAPP; // 0x20
	::System::Nullable_1<::System::Object*> JMINOGAOFIL; // 0x28

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKICHLJKDHA_JGLJHGFNCCB_NPOLNFDBOOD_OFFSET))(this);
	}
};
