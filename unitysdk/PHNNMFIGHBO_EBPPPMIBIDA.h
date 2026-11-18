#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDDJCPNDLDN.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHNNMFIGHBO_EBPPPMIBIDA__CTOR_OFFSET UNITYSDK_OFFSET(0x194A2440)

inline static constexpr unsigned int PHNNMFIGHBO_EBPPPMIBIDA_TypeDefinitionIndex = 87380;

class PHNNMFIGHBO_EBPPPMIBIDA : public ::GDDJCPNDLDN
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PINBIBCJOEM; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* MDOFONPPAOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNNMFIGHBO_EBPPPMIBIDA__CTOR_OFFSET))(this);
	}
};
