#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNEOFHJCAMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x151ACAB0)
#define LNEOFHJCAMI__CTOR_OFFSET UNITYSDK_OFFSET(0x7535D0)

inline static constexpr unsigned int LNEOFHJCAMI_TypeDefinitionIndex = 83182;

struct alignas(8) LNEOFHJCAMI
{
	static ::LNEOFHJCAMI* StaticGet_FDJHEBHLJLD()
	{
		return (::LNEOFHJCAMI*)Il2CppClass::FromTypeDefinitionIndex(LNEOFHJCAMI_TypeDefinitionIndex)->GetStaticField(0x484A0);
	}
	::System::Boolean LCGNHLHPDLE; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* PLAAMNBJHFN; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* BIIOMNBENNJ; // 0x20

	::System::Void _ctor(::System::Boolean CAAFEGLOALC, ::System::String* LKLKNPHBNOC, ::System::Collections::Generic::List_1<::System::String*>* HFCIDKBCLLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LNEOFHJCAMI__CTOR_OFFSET))(this, CAAFEGLOALC, LKLKNPHBNOC, HFCIDKBCLLL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNEOFHJCAMI__CCTOR_OFFSET))();
	}
};
