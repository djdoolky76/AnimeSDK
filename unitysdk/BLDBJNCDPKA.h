#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECEOBOHAGOB.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLDBJNCDPKA_PHGLEGJKOMI_OFFSET UNITYSDK_OFFSET(0x19F1BD30)
#define BLDBJNCDPKA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1BD20)

inline static constexpr unsigned int BLDBJNCDPKA_TypeDefinitionIndex = 17483;

class BLDBJNCDPKA : public ::ECEOBOHAGOB
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* OENBDHILGJD; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDBJNCDPKA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* PHGLEGJKOMI()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDBJNCDPKA_PHGLEGJKOMI_OFFSET))(this);
	}
};
