#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPNMJNBOGDL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOPMEJIHBBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KOPMEJIHBBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DFEA0)
#define KOPMEJIHBBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOPMEJIHBBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KOPMEJIHBBC_IJLMBNIOMAF_1_OFFSET UNITYSDK_OFFSET(0x19370EF0)
#define KOPMEJIHBBC_IJLMBNIOMAF_OFFSET UNITYSDK_OFFSET(0x19370E80)
#define KOPMEJIHBBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DFE90)
#define KOPMEJIHBBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DFEE0)
#define KOPMEJIHBBC___INIT_OFFSET UNITYSDK_OFFSET(0x7DFE70)

inline static constexpr unsigned int KOPMEJIHBBC_TypeDefinitionIndex = 9728;

struct alignas(8) KOPMEJIHBBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOPMEJIHBBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KOPMEJIHBBC IJLMBNIOMAF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOPMEJIHBBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_IJLMBNIOMAF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MPNMJNBOGDL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPNMJNBOGDL&, ::System::Int32&))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KOPMEJIHBBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOPMEJIHBBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPNMJNBOGDL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPNMJNBOGDL&))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KOPMEJIHBBC IJLMBNIOMAF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KOPMEJIHBBC EIFONLCJOPG)
	{
		return ((::KOPMEJIHBBC(*)(::FlatBuffers::ByteBuffer*, ::KOPMEJIHBBC))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_IJLMBNIOMAF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPMEJIHBBC_PPOMNIFACOL_OFFSET))(this);
	}
};
