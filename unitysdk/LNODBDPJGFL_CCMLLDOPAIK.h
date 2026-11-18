#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNODBDPJGFL_CCMLLDOPAIK_NAELKKFHOMI_OFFSET UNITYSDK_OFFSET(0x1A62B9A0)
#define LNODBDPJGFL_CCMLLDOPAIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A629FE0)

inline static constexpr unsigned int LNODBDPJGFL_CCMLLDOPAIK_TypeDefinitionIndex = 43810;

class LNODBDPJGFL_CCMLLDOPAIK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LPPGFCHDKFM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNODBDPJGFL_CCMLLDOPAIK__CTOR_OFFSET))(this);
	}

	::System::Void NAELKKFHOMI(::System::Object* KHILBNJIAKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNODBDPJGFL_CCMLLDOPAIK_NAELKKFHOMI_OFFSET))(this, KHILBNJIAKA);
	}
};
