#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MEIJEDGKILG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMLHPOLIJDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IMLHPOLIJDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BEF10)
#define IMLHPOLIJDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMLHPOLIJDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IMLHPOLIJDL_KKPKJNNIBOM_1_OFFSET UNITYSDK_OFFSET(0x17C1FA10)
#define IMLHPOLIJDL_KKPKJNNIBOM_OFFSET UNITYSDK_OFFSET(0x17C1F9A0)
#define IMLHPOLIJDL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BEF60)
#define IMLHPOLIJDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BEF50)
#define IMLHPOLIJDL___INIT_OFFSET UNITYSDK_OFFSET(0x7BEEF0)

inline static constexpr unsigned int IMLHPOLIJDL_TypeDefinitionIndex = 11027;

struct alignas(8) IMLHPOLIJDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMLHPOLIJDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IMLHPOLIJDL KKPKJNNIBOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMLHPOLIJDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_KKPKJNNIBOM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IMLHPOLIJDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMLHPOLIJDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MEIJEDGKILG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEIJEDGKILG&))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IMLHPOLIJDL KKPKJNNIBOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IMLHPOLIJDL EIFONLCJOPG)
	{
		return ((::IMLHPOLIJDL(*)(::FlatBuffers::ByteBuffer*, ::IMLHPOLIJDL))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_KKPKJNNIBOM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MEIJEDGKILG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEIJEDGKILG&, ::System::Int32&))((::PBYTE)hIl2Cpp + IMLHPOLIJDL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
