#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLONBLJHLMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFEPPGIMPCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFEPPGIMPCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758110)
#define IFEPPGIMPCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFEPPGIMPCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFEPPGIMPCP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758100)
#define IFEPPGIMPCP_MDKAMIHJDII_1_OFFSET UNITYSDK_OFFSET(0x152E2E10)
#define IFEPPGIMPCP_MDKAMIHJDII_OFFSET UNITYSDK_OFFSET(0x152E2B10)
#define IFEPPGIMPCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7580F0)
#define IFEPPGIMPCP___INIT_OFFSET UNITYSDK_OFFSET(0x7580D0)

inline static constexpr unsigned int IFEPPGIMPCP_TypeDefinitionIndex = 11838;

struct alignas(8) IFEPPGIMPCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFEPPGIMPCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IFEPPGIMPCP MDKAMIHJDII(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFEPPGIMPCP EIFONLCJOPG)
	{
		return ((::IFEPPGIMPCP(*)(::FlatBuffers::ByteBuffer*, ::IFEPPGIMPCP))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_MDKAMIHJDII_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLONBLJHLMJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLONBLJHLMJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IFEPPGIMPCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFEPPGIMPCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFEPPGIMPCP MDKAMIHJDII_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFEPPGIMPCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_MDKAMIHJDII_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLONBLJHLMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLONBLJHLMJ&))((::PBYTE)hIl2Cpp + IFEPPGIMPCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
