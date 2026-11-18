#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OILINEJKLPH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIOJKONMBJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OIOJKONMBJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6DC0)
#define OIOJKONMBJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIOJKONMBJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OIOJKONMBJK_JGMEIFAHMDH_1_OFFSET UNITYSDK_OFFSET(0x195C6560)
#define OIOJKONMBJK_JGMEIFAHMDH_OFFSET UNITYSDK_OFFSET(0x195C64F0)
#define OIOJKONMBJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6DA0)
#define OIOJKONMBJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6DB0)
#define OIOJKONMBJK___INIT_OFFSET UNITYSDK_OFFSET(0x7E6D80)

inline static constexpr unsigned int OIOJKONMBJK_TypeDefinitionIndex = 9359;

struct alignas(8) OIOJKONMBJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOJKONMBJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIOJKONMBJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OIOJKONMBJK JGMEIFAHMDH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIOJKONMBJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIOJKONMBJK_JGMEIFAHMDH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOJKONMBJK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OILINEJKLPH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OILINEJKLPH&, ::System::Int32&))((::PBYTE)hIl2Cpp + OIOJKONMBJK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OILINEJKLPH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OILINEJKLPH&))((::PBYTE)hIl2Cpp + OIOJKONMBJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OIOJKONMBJK JGMEIFAHMDH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OIOJKONMBJK EIFONLCJOPG)
	{
		return ((::OIOJKONMBJK(*)(::FlatBuffers::ByteBuffer*, ::OIOJKONMBJK))((::PBYTE)hIl2Cpp + OIOJKONMBJK_JGMEIFAHMDH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOJKONMBJK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::OIOJKONMBJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIOJKONMBJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIOJKONMBJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
