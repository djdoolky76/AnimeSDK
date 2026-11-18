#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HOBBACEAOCJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKDAKNGKANB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKDAKNGKANB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F85E0)
#define HKDAKNGKANB_DNNJOPIEGPB_1_OFFSET UNITYSDK_OFFSET(0x1A4F1BE0)
#define HKDAKNGKANB_DNNJOPIEGPB_OFFSET UNITYSDK_OFFSET(0x1A4F1B70)
#define HKDAKNGKANB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKDAKNGKANB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKDAKNGKANB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8620)
#define HKDAKNGKANB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F85D0)
#define HKDAKNGKANB___INIT_OFFSET UNITYSDK_OFFSET(0x7F85B0)

inline static constexpr unsigned int HKDAKNGKANB_TypeDefinitionIndex = 14911;

struct alignas(8) HKDAKNGKANB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDAKNGKANB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKDAKNGKANB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDAKNGKANB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HKDAKNGKANB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKDAKNGKANB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKDAKNGKANB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDAKNGKANB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HOBBACEAOCJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOBBACEAOCJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + HKDAKNGKANB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HKDAKNGKANB DNNJOPIEGPB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKDAKNGKANB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKDAKNGKANB_DNNJOPIEGPB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HKDAKNGKANB DNNJOPIEGPB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKDAKNGKANB EIFONLCJOPG)
	{
		return ((::HKDAKNGKANB(*)(::FlatBuffers::ByteBuffer*, ::HKDAKNGKANB))((::PBYTE)hIl2Cpp + HKDAKNGKANB_DNNJOPIEGPB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HOBBACEAOCJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HOBBACEAOCJ&))((::PBYTE)hIl2Cpp + HKDAKNGKANB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
