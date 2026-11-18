#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PINIBJHANOF_HBPCJOIMDLG_BAOCFMIEOGM_OFFSET UNITYSDK_OFFSET(0x5FAD30)
#define PINIBJHANOF_HBPCJOIMDLG_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x75C810)

inline static constexpr unsigned int PINIBJHANOF_HBPCJOIMDLG_TypeDefinitionIndex = 62691;

struct alignas(8) PINIBJHANOF_HBPCJOIMDLG
{
	::System::Int32 BOBGEDKOMCM; // 0x10
	::System::Int32 MIAEEMDJAOH; // 0x14
	::System::Int32 LLPBKGNLNJH; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* OHOOIKANEEG; // 0x20

	::System::Int32 BAOCFMIEOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PINIBJHANOF_HBPCJOIMDLG_BAOCFMIEOGM_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PINIBJHANOF_HBPCJOIMDLG_FFCPIEDHBDP_OFFSET))(this);
	}
};
