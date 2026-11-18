#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCKLHFKJAHH_DBEMGEKEAAO_OFFSET UNITYSDK_OFFSET(0x1A7E3770)
#define PCKLHFKJAHH_HDKAECAOGCI_OFFSET UNITYSDK_OFFSET(0x1A7E3800)
#define PCKLHFKJAHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E36F0)

inline static constexpr unsigned int PCKLHFKJAHH_TypeDefinitionIndex = 74813;

class PCKLHFKJAHH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PCKLHFKJAHH*>* GLCOCNJJLKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKLHFKJAHH__CTOR_OFFSET))(this);
	}

	::PCKLHFKJAHH* DBEMGEKEAAO(::PCKLHFKJAHH* HHIJHDFHPOI)
	{
		return ((::PCKLHFKJAHH*(*)(::PVOID, ::PCKLHFKJAHH*))((::PBYTE)hIl2Cpp + PCKLHFKJAHH_DBEMGEKEAAO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Int32 HDKAECAOGCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKLHFKJAHH_HDKAECAOGCI_OFFSET))(this);
	}
};
