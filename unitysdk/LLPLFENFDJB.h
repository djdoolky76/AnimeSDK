#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DLPBHLCBPGA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLPLFENFDJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LLPLFENFDJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810FE0)
#define LLPLFENFDJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLPLFENFDJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LLPLFENFDJB_HCDBLMHAHMP_1_OFFSET UNITYSDK_OFFSET(0x1B6547E0)
#define LLPLFENFDJB_HCDBLMHAHMP_OFFSET UNITYSDK_OFFSET(0x1B6511E0)
#define LLPLFENFDJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811020)
#define LLPLFENFDJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810FD0)
#define LLPLFENFDJB___INIT_OFFSET UNITYSDK_OFFSET(0x810FB0)

inline static constexpr unsigned int LLPLFENFDJB_TypeDefinitionIndex = 14729;

struct alignas(8) LLPLFENFDJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPLFENFDJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLPLFENFDJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LLPLFENFDJB HCDBLMHAHMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLPLFENFDJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLPLFENFDJB_HCDBLMHAHMP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPLFENFDJB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LLPLFENFDJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLPLFENFDJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLPLFENFDJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LLPLFENFDJB HCDBLMHAHMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LLPLFENFDJB EIFONLCJOPG)
	{
		return ((::LLPLFENFDJB(*)(::FlatBuffers::ByteBuffer*, ::LLPLFENFDJB))((::PBYTE)hIl2Cpp + LLPLFENFDJB_HCDBLMHAHMP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DLPBHLCBPGA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLPBHLCBPGA&))((::PBYTE)hIl2Cpp + LLPLFENFDJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPLFENFDJB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DLPBHLCBPGA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLPBHLCBPGA&, ::System::Int32&))((::PBYTE)hIl2Cpp + LLPLFENFDJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
