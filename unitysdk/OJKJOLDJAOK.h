#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDMKAKCIMPA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJKJOLDJAOK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OJKJOLDJAOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FA10)
#define OJKJOLDJAOK_BLDGJKIJCFB_1_OFFSET UNITYSDK_OFFSET(0x1C0A6380)
#define OJKJOLDJAOK_BLDGJKIJCFB_OFFSET UNITYSDK_OFFSET(0x1C0A62E0)
#define OJKJOLDJAOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OJKJOLDJAOK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OJKJOLDJAOK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FA00)
#define OJKJOLDJAOK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F9F0)
#define OJKJOLDJAOK___INIT_OFFSET UNITYSDK_OFFSET(0x81F9D0)

inline static constexpr unsigned int OJKJOLDJAOK_TypeDefinitionIndex = 10430;

struct alignas(8) OJKJOLDJAOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJKJOLDJAOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDMKAKCIMPA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDMKAKCIMPA&))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CDMKAKCIMPA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDMKAKCIMPA&, ::System::Int32&))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OJKJOLDJAOK BLDGJKIJCFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OJKJOLDJAOK EIFONLCJOPG)
	{
		return ((::OJKJOLDJAOK(*)(::FlatBuffers::ByteBuffer*, ::OJKJOLDJAOK))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_BLDGJKIJCFB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OJKJOLDJAOK BLDGJKIJCFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJKJOLDJAOK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_BLDGJKIJCFB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OJKJOLDJAOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJKJOLDJAOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJKJOLDJAOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
