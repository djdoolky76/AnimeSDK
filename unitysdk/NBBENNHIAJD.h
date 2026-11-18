#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CMNDPIKDKGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBBENNHIAJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NBBENNHIAJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5F30)
#define NBBENNHIAJD_DDJMFMIKFOJ_1_OFFSET UNITYSDK_OFFSET(0x1734E340)
#define NBBENNHIAJD_DDJMFMIKFOJ_OFFSET UNITYSDK_OFFSET(0x1734E2A0)
#define NBBENNHIAJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBBENNHIAJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NBBENNHIAJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5F70)
#define NBBENNHIAJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5F20)
#define NBBENNHIAJD___INIT_OFFSET UNITYSDK_OFFSET(0x7A5F00)

inline static constexpr unsigned int NBBENNHIAJD_TypeDefinitionIndex = 12675;

struct alignas(8) NBBENNHIAJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBENNHIAJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBENNHIAJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBENNHIAJD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NBBENNHIAJD DDJMFMIKFOJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NBBENNHIAJD EIFONLCJOPG)
	{
		return ((::NBBENNHIAJD(*)(::FlatBuffers::ByteBuffer*, ::NBBENNHIAJD))((::PBYTE)hIl2Cpp + NBBENNHIAJD_DDJMFMIKFOJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NBBENNHIAJD DDJMFMIKFOJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBBENNHIAJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBENNHIAJD_DDJMFMIKFOJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBENNHIAJD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NBBENNHIAJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBBENNHIAJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBBENNHIAJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CMNDPIKDKGI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMNDPIKDKGI&, ::System::Int32&))((::PBYTE)hIl2Cpp + NBBENNHIAJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CMNDPIKDKGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMNDPIKDKGI&))((::PBYTE)hIl2Cpp + NBBENNHIAJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
