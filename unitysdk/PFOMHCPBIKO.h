#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MLJIBNABKGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFOMHCPBIKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFOMHCPBIKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FBC0)
#define PFOMHCPBIKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFOMHCPBIKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFOMHCPBIKO_KACJNEOMMHG_1_OFFSET UNITYSDK_OFFSET(0x1C0ACF30)
#define PFOMHCPBIKO_KACJNEOMMHG_OFFSET UNITYSDK_OFFSET(0x1C0ACEC0)
#define PFOMHCPBIKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FC10)
#define PFOMHCPBIKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FC00)
#define PFOMHCPBIKO___INIT_OFFSET UNITYSDK_OFFSET(0x81FBA0)

inline static constexpr unsigned int PFOMHCPBIKO_TypeDefinitionIndex = 10938;

struct alignas(8) PFOMHCPBIKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFOMHCPBIKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PFOMHCPBIKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFOMHCPBIKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PFOMHCPBIKO KACJNEOMMHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFOMHCPBIKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_KACJNEOMMHG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PFOMHCPBIKO KACJNEOMMHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFOMHCPBIKO EIFONLCJOPG)
	{
		return ((::PFOMHCPBIKO(*)(::FlatBuffers::ByteBuffer*, ::PFOMHCPBIKO))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_KACJNEOMMHG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MLJIBNABKGM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLJIBNABKGM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MLJIBNABKGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MLJIBNABKGM&))((::PBYTE)hIl2Cpp + PFOMHCPBIKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
