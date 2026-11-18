#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBLFCPICMKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAAEPOHFBDF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KAAEPOHFBDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E45D0)
#define KAAEPOHFBDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KAAEPOHFBDF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KAAEPOHFBDF_HFEEDBIJDOJ_1_OFFSET UNITYSDK_OFFSET(0x19551890)
#define KAAEPOHFBDF_HFEEDBIJDOJ_OFFSET UNITYSDK_OFFSET(0x19551720)
#define KAAEPOHFBDF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E45B0)
#define KAAEPOHFBDF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E45C0)
#define KAAEPOHFBDF___INIT_OFFSET UNITYSDK_OFFSET(0x7E4590)

inline static constexpr unsigned int KAAEPOHFBDF_TypeDefinitionIndex = 9523;

struct alignas(8) KAAEPOHFBDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAAEPOHFBDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KAAEPOHFBDF HFEEDBIJDOJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KAAEPOHFBDF EIFONLCJOPG)
	{
		return ((::KAAEPOHFBDF(*)(::FlatBuffers::ByteBuffer*, ::KAAEPOHFBDF))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_HFEEDBIJDOJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBLFCPICMKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBLFCPICMKB&))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KAAEPOHFBDF HFEEDBIJDOJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAAEPOHFBDF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_HFEEDBIJDOJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KBLFCPICMKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBLFCPICMKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KAAEPOHFBDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KAAEPOHFBDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEPOHFBDF_GHKKNCCLPAN_OFFSET))(this);
	}
};
