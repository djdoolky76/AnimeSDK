#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMAGKBMCBEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F642290)

inline static constexpr unsigned int KMAGKBMCBEC_TypeDefinitionIndex = 94634;

class KMAGKBMCBEC : public ::CGGLJLECNJM
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* DGJAJMKBLIG; // 0x20
	::System::UInt32 FLEDHKJGAEP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAGKBMCBEC__CTOR_OFFSET))(this);
	}
};
