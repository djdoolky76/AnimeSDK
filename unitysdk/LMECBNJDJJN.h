#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHNFFAPKBND.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMECBNJDJJN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMECBNJDJJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3B00)
#define LMECBNJDJJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMECBNJDJJN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMECBNJDJJN_LBIPPMFKFKG_1_OFFSET UNITYSDK_OFFSET(0x17FB7DA0)
#define LMECBNJDJJN_LBIPPMFKFKG_OFFSET UNITYSDK_OFFSET(0x17FB7D40)
#define LMECBNJDJJN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C3B40)
#define LMECBNJDJJN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3AF0)
#define LMECBNJDJJN___INIT_OFFSET UNITYSDK_OFFSET(0x7C3AD0)

inline static constexpr unsigned int LMECBNJDJJN_TypeDefinitionIndex = 16824;

struct alignas(8) LMECBNJDJJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECBNJDJJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMECBNJDJJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECBNJDJJN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LMECBNJDJJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMECBNJDJJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMECBNJDJJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHNFFAPKBND& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHNFFAPKBND&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMECBNJDJJN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LMECBNJDJJN LBIPPMFKFKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMECBNJDJJN EIFONLCJOPG)
	{
		return ((::LMECBNJDJJN(*)(::FlatBuffers::ByteBuffer*, ::LMECBNJDJJN))((::PBYTE)hIl2Cpp + LMECBNJDJJN_LBIPPMFKFKG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHNFFAPKBND& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHNFFAPKBND&))((::PBYTE)hIl2Cpp + LMECBNJDJJN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LMECBNJDJJN LBIPPMFKFKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMECBNJDJJN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMECBNJDJJN_LBIPPMFKFKG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECBNJDJJN_GHKKNCCLPAN_OFFSET))(this);
	}
};
