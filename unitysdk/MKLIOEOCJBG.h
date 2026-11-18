#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCFPJCEGJLD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKLIOEOCJBG_AANFICMFILB_1_OFFSET UNITYSDK_OFFSET(0x1BA9C5A0)
#define MKLIOEOCJBG_AANFICMFILB_OFFSET UNITYSDK_OFFSET(0x1BA89330)
#define MKLIOEOCJBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKLIOEOCJBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A1A0)
#define MKLIOEOCJBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKLIOEOCJBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKLIOEOCJBG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A1E0)
#define MKLIOEOCJBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A1F0)
#define MKLIOEOCJBG___INIT_OFFSET UNITYSDK_OFFSET(0x81A180)

inline static constexpr unsigned int MKLIOEOCJBG_TypeDefinitionIndex = 16823;

struct alignas(8) MKLIOEOCJBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKLIOEOCJBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCFPJCEGJLD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCFPJCEGJLD&))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MKLIOEOCJBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKLIOEOCJBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCFPJCEGJLD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCFPJCEGJLD&, ::System::Int32&))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MKLIOEOCJBG AANFICMFILB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKLIOEOCJBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_AANFICMFILB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MKLIOEOCJBG AANFICMFILB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKLIOEOCJBG EIFONLCJOPG)
	{
		return ((::MKLIOEOCJBG(*)(::FlatBuffers::ByteBuffer*, ::MKLIOEOCJBG))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_AANFICMFILB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLIOEOCJBG_PPOMNIFACOL_OFFSET))(this);
	}
};
