#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDOJMLDEJOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PONEEOKDPPH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PONEEOKDPPH_BHDEJMCOLBL_1_OFFSET UNITYSDK_OFFSET(0x1FD7E700)
#define PONEEOKDPPH_BHDEJMCOLBL_OFFSET UNITYSDK_OFFSET(0x1FD7E690)
#define PONEEOKDPPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9A37D0)
#define PONEEOKDPPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PONEEOKDPPH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PONEEOKDPPH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9A37C0)
#define PONEEOKDPPH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9A37B0)
#define PONEEOKDPPH___INIT_OFFSET UNITYSDK_OFFSET(0x9A3790)

inline static constexpr unsigned int PONEEOKDPPH_TypeDefinitionIndex = 17568;

struct alignas(8) PONEEOKDPPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEEOKDPPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PONEEOKDPPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEEOKDPPH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEEOKDPPH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDOJMLDEJOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDOJMLDEJOD&))((::PBYTE)hIl2Cpp + PONEEOKDPPH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PONEEOKDPPH BHDEJMCOLBL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PONEEOKDPPH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PONEEOKDPPH_BHDEJMCOLBL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CDOJMLDEJOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDOJMLDEJOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + PONEEOKDPPH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PONEEOKDPPH BHDEJMCOLBL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PONEEOKDPPH EIFONLCJOPG)
	{
		return ((::PONEEOKDPPH(*)(::FlatBuffers::ByteBuffer*, ::PONEEOKDPPH))((::PBYTE)hIl2Cpp + PONEEOKDPPH_BHDEJMCOLBL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PONEEOKDPPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PONEEOKDPPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PONEEOKDPPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
