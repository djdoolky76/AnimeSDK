#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EGDMBLLCLBF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKJGHAAHGFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LKJGHAAHGFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5540)
#define LKJGHAAHGFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LKJGHAAHGFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LKJGHAAHGFN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5530)
#define LKJGHAAHGFN_PDNAJOPONGO_1_OFFSET UNITYSDK_OFFSET(0x1956C1E0)
#define LKJGHAAHGFN_PDNAJOPONGO_OFFSET UNITYSDK_OFFSET(0x1956C180)
#define LKJGHAAHGFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5580)
#define LKJGHAAHGFN___INIT_OFFSET UNITYSDK_OFFSET(0x7E5510)

inline static constexpr unsigned int LKJGHAAHGFN_TypeDefinitionIndex = 12809;

struct alignas(8) LKJGHAAHGFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKJGHAAHGFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EGDMBLLCLBF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGDMBLLCLBF&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EGDMBLLCLBF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EGDMBLLCLBF&))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LKJGHAAHGFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKJGHAAHGFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LKJGHAAHGFN PDNAJOPONGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LKJGHAAHGFN EIFONLCJOPG)
	{
		return ((::LKJGHAAHGFN(*)(::FlatBuffers::ByteBuffer*, ::LKJGHAAHGFN))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_PDNAJOPONGO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LKJGHAAHGFN PDNAJOPONGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKJGHAAHGFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_PDNAJOPONGO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGHAAHGFN_GHKKNCCLPAN_OFFSET))(this);
	}
};
