#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCEPPCGPMHL__CTOR_OFFSET UNITYSDK_OFFSET(0xF894060)

inline static constexpr unsigned int JCEPPCGPMHL_TypeDefinitionIndex = 66874;

class JCEPPCGPMHL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* OKFJBEKNFBE; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* FGIJGLMKNBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JCEPPCGPMHL__CTOR_OFFSET))(this, FGIJGLMKNBB);
	}
};
