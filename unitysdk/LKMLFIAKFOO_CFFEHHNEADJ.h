#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMLFIAKFOO_CFFEHHNEADJ_CJGPFDEEEAD_OFFSET UNITYSDK_OFFSET(0x16C62350)
#define LKMLFIAKFOO_CFFEHHNEADJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16C62340)

inline static constexpr unsigned int LKMLFIAKFOO_CFFEHHNEADJ_TypeDefinitionIndex = 43597;

class LKMLFIAKFOO_CFFEHHNEADJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JGGELGHFMLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_CFFEHHNEADJ__CTOR_OFFSET))(this);
	}

	::System::Boolean CJGPFDEEEAD(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_CFFEHHNEADJ_CJGPFDEEEAD_OFFSET))(this, HAAEBCOBKFF);
	}
};
