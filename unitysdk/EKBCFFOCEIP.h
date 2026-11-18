#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMBGHPAEGKJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKBCFFOCEIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EKBCFFOCEIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F6010)
#define EKBCFFOCEIP_GAGJBCGMAIG_1_OFFSET UNITYSDK_OFFSET(0x1A1A1E30)
#define EKBCFFOCEIP_GAGJBCGMAIG_OFFSET UNITYSDK_OFFSET(0x1A1A1B30)
#define EKBCFFOCEIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKBCFFOCEIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EKBCFFOCEIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F6050)
#define EKBCFFOCEIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F6060)
#define EKBCFFOCEIP___INIT_OFFSET UNITYSDK_OFFSET(0x7F5FF0)

inline static constexpr unsigned int EKBCFFOCEIP_TypeDefinitionIndex = 10018;

struct alignas(8) EKBCFFOCEIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBCFFOCEIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EKBCFFOCEIP GAGJBCGMAIG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EKBCFFOCEIP EIFONLCJOPG)
	{
		return ((::EKBCFFOCEIP(*)(::FlatBuffers::ByteBuffer*, ::EKBCFFOCEIP))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_GAGJBCGMAIG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EKBCFFOCEIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBCFFOCEIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OMBGHPAEGKJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMBGHPAEGKJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EKBCFFOCEIP GAGJBCGMAIG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBCFFOCEIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_GAGJBCGMAIG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMBGHPAEGKJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMBGHPAEGKJ&))((::PBYTE)hIl2Cpp + EKBCFFOCEIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
