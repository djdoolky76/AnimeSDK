#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFCGGCNLLMM_KNCADFCKCML_JGEINCJAGOF_OFFSET UNITYSDK_OFFSET(0x16D720A0)
#define AFCGGCNLLMM_KNCADFCKCML__CTOR_OFFSET UNITYSDK_OFFSET(0x16D72090)

inline static constexpr unsigned int AFCGGCNLLMM_KNCADFCKCML_TypeDefinitionIndex = 81014;

class AFCGGCNLLMM_KNCADFCKCML : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CHFPOOJBNLC; // 0x10
	::System::Int32 KJPNMJJONNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCGGCNLLMM_KNCADFCKCML__CTOR_OFFSET))(this);
	}

	::System::Void JGEINCJAGOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCGGCNLLMM_KNCADFCKCML_JGEINCJAGOF_OFFSET))(this);
	}
};
