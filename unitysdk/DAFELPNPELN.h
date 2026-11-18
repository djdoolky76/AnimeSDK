#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CJBOCHLCEPP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAFELPNPELN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DAFELPNPELN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5620)
#define DAFELPNPELN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAFELPNPELN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DAFELPNPELN_JJPAFAIIOMD_1_OFFSET UNITYSDK_OFFSET(0x1A1857D0)
#define DAFELPNPELN_JJPAFAIIOMD_OFFSET UNITYSDK_OFFSET(0x1A185760)
#define DAFELPNPELN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5670)
#define DAFELPNPELN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5660)
#define DAFELPNPELN___INIT_OFFSET UNITYSDK_OFFSET(0x7F5600)

inline static constexpr unsigned int DAFELPNPELN_TypeDefinitionIndex = 16165;

struct alignas(8) DAFELPNPELN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFELPNPELN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFELPNPELN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DAFELPNPELN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAFELPNPELN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFELPNPELN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CJBOCHLCEPP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJBOCHLCEPP&))((::PBYTE)hIl2Cpp + DAFELPNPELN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DAFELPNPELN JJPAFAIIOMD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAFELPNPELN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAFELPNPELN_JJPAFAIIOMD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFELPNPELN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CJBOCHLCEPP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CJBOCHLCEPP&, ::System::Int32&))((::PBYTE)hIl2Cpp + DAFELPNPELN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DAFELPNPELN JJPAFAIIOMD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DAFELPNPELN EIFONLCJOPG)
	{
		return ((::DAFELPNPELN(*)(::FlatBuffers::ByteBuffer*, ::DAFELPNPELN))((::PBYTE)hIl2Cpp + DAFELPNPELN_JJPAFAIIOMD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFELPNPELN_GHKKNCCLPAN_OFFSET))(this);
	}
};
