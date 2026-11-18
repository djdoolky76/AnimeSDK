#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AOOEBCMOIAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNHCFJJEBLG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNHCFJJEBLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6380)
#define NNHCFJJEBLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNHCFJJEBLG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNHCFJJEBLG_JJCDLDNBHDE_1_OFFSET UNITYSDK_OFFSET(0x17356CB0)
#define NNHCFJJEBLG_JJCDLDNBHDE_OFFSET UNITYSDK_OFFSET(0x173569B0)
#define NNHCFJJEBLG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A63C0)
#define NNHCFJJEBLG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A63D0)
#define NNHCFJJEBLG___INIT_OFFSET UNITYSDK_OFFSET(0x7A6360)

inline static constexpr unsigned int NNHCFJJEBLG_TypeDefinitionIndex = 16837;

struct alignas(8) NNHCFJJEBLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNHCFJJEBLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NNHCFJJEBLG JJCDLDNBHDE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNHCFJJEBLG EIFONLCJOPG)
	{
		return ((::NNHCFJJEBLG(*)(::FlatBuffers::ByteBuffer*, ::NNHCFJJEBLG))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_JJCDLDNBHDE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NNHCFJJEBLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNHCFJJEBLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AOOEBCMOIAI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AOOEBCMOIAI&, ::System::Int32&))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AOOEBCMOIAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AOOEBCMOIAI&))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NNHCFJJEBLG JJCDLDNBHDE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNHCFJJEBLG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNHCFJJEBLG_JJCDLDNBHDE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
