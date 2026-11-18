#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFFIGHKEBOB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNIDFDFOJIG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNIDFDFOJIG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A440)
#define HNIDFDFOJIG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNIDFDFOJIG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNIDFDFOJIG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A430)
#define HNIDFDFOJIG_NCAAGJPIHOP_1_OFFSET UNITYSDK_OFFSET(0x1B126F30)
#define HNIDFDFOJIG_NCAAGJPIHOP_OFFSET UNITYSDK_OFFSET(0x1B126EC0)
#define HNIDFDFOJIG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A420)
#define HNIDFDFOJIG___INIT_OFFSET UNITYSDK_OFFSET(0x80A400)

inline static constexpr unsigned int HNIDFDFOJIG_TypeDefinitionIndex = 16869;

struct alignas(8) HNIDFDFOJIG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNIDFDFOJIG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNIDFDFOJIG NCAAGJPIHOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNIDFDFOJIG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_NCAAGJPIHOP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HNIDFDFOJIG NCAAGJPIHOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNIDFDFOJIG EIFONLCJOPG)
	{
		return ((::HNIDFDFOJIG(*)(::FlatBuffers::ByteBuffer*, ::HNIDFDFOJIG))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_NCAAGJPIHOP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IFFIGHKEBOB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFFIGHKEBOB&, ::System::Int32&))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IFFIGHKEBOB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFFIGHKEBOB&))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HNIDFDFOJIG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNIDFDFOJIG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNIDFDFOJIG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
