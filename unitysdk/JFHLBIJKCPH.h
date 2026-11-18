#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIDJKBDDBDD.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFHLBIJKCPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1980F6C0)

inline static constexpr unsigned int JFHLBIJKCPH_TypeDefinitionIndex = 62953;

class JFHLBIJKCPH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FIDJKBDDBDD>* JNHKLHMCHJN; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DLJPHGPIANF; // 0x18
	::System::Int32 OFKMPBKEDLO; // 0x20
	::System::Boolean DBBIDCBDBDB; // 0x24
	::System::Byte _padding0[0x3];
	::FIDJKBDDBDD KEFFAPINCAG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLBIJKCPH__CTOR_OFFSET))(this);
	}
};
