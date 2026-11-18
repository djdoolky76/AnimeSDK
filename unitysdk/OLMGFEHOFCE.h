#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PAHCMBNMFHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLMGFEHOFCE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OLMGFEHOFCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0110)
#define OLMGFEHOFCE_EFGGJDMJHBB_1_OFFSET UNITYSDK_OFFSET(0x19DD01E0)
#define OLMGFEHOFCE_EFGGJDMJHBB_OFFSET UNITYSDK_OFFSET(0x19DD0140)
#define OLMGFEHOFCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLMGFEHOFCE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLMGFEHOFCE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F0160)
#define OLMGFEHOFCE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0150)
#define OLMGFEHOFCE___INIT_OFFSET UNITYSDK_OFFSET(0x7F00F0)

inline static constexpr unsigned int OLMGFEHOFCE_TypeDefinitionIndex = 10686;

struct alignas(8) OLMGFEHOFCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLMGFEHOFCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OLMGFEHOFCE EFGGJDMJHBB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLMGFEHOFCE EIFONLCJOPG)
	{
		return ((::OLMGFEHOFCE(*)(::FlatBuffers::ByteBuffer*, ::OLMGFEHOFCE))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_EFGGJDMJHBB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OLMGFEHOFCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLMGFEHOFCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OLMGFEHOFCE EFGGJDMJHBB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLMGFEHOFCE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_EFGGJDMJHBB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PAHCMBNMFHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PAHCMBNMFHN&))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 PJMKDPOEEAD, ::System::Int32 CHAJLNMAHOE, ::PAHCMBNMFHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::PAHCMBNMFHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + OLMGFEHOFCE_LLGCOCLACNA_OFFSET))(this, PJMKDPOEEAD, CHAJLNMAHOE, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
