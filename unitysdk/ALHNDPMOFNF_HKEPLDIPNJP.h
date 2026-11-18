#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALHNDPMOFNF_HKEPLDIPNJP_DAKJNEBIAIN_OFFSET UNITYSDK_OFFSET(0x728440)

inline static constexpr unsigned int ALHNDPMOFNF_HKEPLDIPNJP_TypeDefinitionIndex = 86737;

struct alignas(8) ALHNDPMOFNF_HKEPLDIPNJP
{
	::System::UInt32 GGCKFEGMPLC; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* NBEKEGGFNJC; // 0x18

	::System::Collections::Generic::List_1<::System::Int32>* DAKJNEBIAIN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_HKEPLDIPNJP_DAKJNEBIAIN_OFFSET))(this);
	}
};
