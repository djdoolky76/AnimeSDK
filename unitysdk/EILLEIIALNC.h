#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DGCPHIEDHNF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EILLEIIALNC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EILLEIIALNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x789570)
#define EILLEIIALNC_DIILHGLCOEK_1_OFFSET UNITYSDK_OFFSET(0x16629FC0)
#define EILLEIIALNC_DIILHGLCOEK_OFFSET UNITYSDK_OFFSET(0x16629F50)
#define EILLEIIALNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EILLEIIALNC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EILLEIIALNC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x789550)
#define EILLEIIALNC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x789560)
#define EILLEIIALNC___INIT_OFFSET UNITYSDK_OFFSET(0x789530)

inline static constexpr unsigned int EILLEIIALNC_TypeDefinitionIndex = 10815;

struct alignas(8) EILLEIIALNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILLEIIALNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EILLEIIALNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EILLEIIALNC DIILHGLCOEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EILLEIIALNC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EILLEIIALNC_DIILHGLCOEK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DGCPHIEDHNF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DGCPHIEDHNF&, ::System::Int32&))((::PBYTE)hIl2Cpp + EILLEIIALNC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EILLEIIALNC DIILHGLCOEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EILLEIIALNC EIFONLCJOPG)
	{
		return ((::EILLEIIALNC(*)(::FlatBuffers::ByteBuffer*, ::EILLEIIALNC))((::PBYTE)hIl2Cpp + EILLEIIALNC_DIILHGLCOEK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILLEIIALNC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EILLEIIALNC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DGCPHIEDHNF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DGCPHIEDHNF&))((::PBYTE)hIl2Cpp + EILLEIIALNC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EILLEIIALNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EILLEIIALNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EILLEIIALNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
