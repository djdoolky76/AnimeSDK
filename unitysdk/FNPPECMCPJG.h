#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DHEMBKBAALG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNPPECMCPJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNPPECMCPJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x755C00)
#define FNPPECMCPJG_EDKBNFKJDEL_1_OFFSET UNITYSDK_OFFSET(0x152C61B0)
#define FNPPECMCPJG_EDKBNFKJDEL_OFFSET UNITYSDK_OFFSET(0x152C6150)
#define FNPPECMCPJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNPPECMCPJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNPPECMCPJG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x755C40)
#define FNPPECMCPJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x755BF0)
#define FNPPECMCPJG___INIT_OFFSET UNITYSDK_OFFSET(0x755BD0)

inline static constexpr unsigned int FNPPECMCPJG_TypeDefinitionIndex = 12089;

struct alignas(8) FNPPECMCPJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPPECMCPJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPPECMCPJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPPECMCPJG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FNPPECMCPJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNPPECMCPJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPPECMCPJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FNPPECMCPJG EDKBNFKJDEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNPPECMCPJG EIFONLCJOPG)
	{
		return ((::FNPPECMCPJG(*)(::FlatBuffers::ByteBuffer*, ::FNPPECMCPJG))((::PBYTE)hIl2Cpp + FNPPECMCPJG_EDKBNFKJDEL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPPECMCPJG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FNPPECMCPJG EDKBNFKJDEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNPPECMCPJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPPECMCPJG_EDKBNFKJDEL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DHEMBKBAALG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHEMBKBAALG&))((::PBYTE)hIl2Cpp + FNPPECMCPJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DHEMBKBAALG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DHEMBKBAALG&, ::System::Int32&))((::PBYTE)hIl2Cpp + FNPPECMCPJG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
