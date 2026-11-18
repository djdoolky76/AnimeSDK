#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMDECKMGHLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHMACFGNIFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHMACFGNIFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0570)
#define PHMACFGNIFG_ENGDAEFAECL_1_OFFSET UNITYSDK_OFFSET(0x19DADCD0)
#define PHMACFGNIFG_ENGDAEFAECL_OFFSET UNITYSDK_OFFSET(0x19DDBFA0)
#define PHMACFGNIFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHMACFGNIFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHMACFGNIFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F05B0)
#define PHMACFGNIFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0560)
#define PHMACFGNIFG___INIT_OFFSET UNITYSDK_OFFSET(0x7F0540)

inline static constexpr unsigned int PHMACFGNIFG_TypeDefinitionIndex = 13031;

struct alignas(8) PHMACFGNIFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMACFGNIFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHMACFGNIFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHMACFGNIFG ENGDAEFAECL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHMACFGNIFG EIFONLCJOPG)
	{
		return ((::PHMACFGNIFG(*)(::FlatBuffers::ByteBuffer*, ::PHMACFGNIFG))((::PBYTE)hIl2Cpp + PHMACFGNIFG_ENGDAEFAECL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMACFGNIFG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMACFGNIFG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PHMACFGNIFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHMACFGNIFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHMACFGNIFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMDECKMGHLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMDECKMGHLJ&))((::PBYTE)hIl2Cpp + PHMACFGNIFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PHMACFGNIFG ENGDAEFAECL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHMACFGNIFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHMACFGNIFG_ENGDAEFAECL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMDECKMGHLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMDECKMGHLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHMACFGNIFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
