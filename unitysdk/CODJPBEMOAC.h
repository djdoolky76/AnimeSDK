#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PGFEHMPHNBK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CODJPBEMOAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CODJPBEMOAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2860)
#define CODJPBEMOAC_DFAFEIHMOEB_1_OFFSET UNITYSDK_OFFSET(0x19506CB0)
#define CODJPBEMOAC_DFAFEIHMOEB_OFFSET UNITYSDK_OFFSET(0x19506C10)
#define CODJPBEMOAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CODJPBEMOAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CODJPBEMOAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2840)
#define CODJPBEMOAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2850)
#define CODJPBEMOAC___INIT_OFFSET UNITYSDK_OFFSET(0x7E2820)

inline static constexpr unsigned int CODJPBEMOAC_TypeDefinitionIndex = 11531;

struct alignas(8) CODJPBEMOAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODJPBEMOAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODJPBEMOAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PGFEHMPHNBK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGFEHMPHNBK&, ::System::Int32&))((::PBYTE)hIl2Cpp + CODJPBEMOAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODJPBEMOAC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CODJPBEMOAC DFAFEIHMOEB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CODJPBEMOAC EIFONLCJOPG)
	{
		return ((::CODJPBEMOAC(*)(::FlatBuffers::ByteBuffer*, ::CODJPBEMOAC))((::PBYTE)hIl2Cpp + CODJPBEMOAC_DFAFEIHMOEB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PGFEHMPHNBK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGFEHMPHNBK&))((::PBYTE)hIl2Cpp + CODJPBEMOAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CODJPBEMOAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CODJPBEMOAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODJPBEMOAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODJPBEMOAC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CODJPBEMOAC DFAFEIHMOEB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CODJPBEMOAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CODJPBEMOAC_DFAFEIHMOEB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
