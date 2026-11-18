#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMAJCGPALCO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMKPIGHPOGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMKPIGHPOGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7661D0)
#define DMKPIGHPOGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMKPIGHPOGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMKPIGHPOGP_LDDKCODBDNA_1_OFFSET UNITYSDK_OFFSET(0x157A6E30)
#define DMKPIGHPOGP_LDDKCODBDNA_OFFSET UNITYSDK_OFFSET(0x157A6DC0)
#define DMKPIGHPOGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x766220)
#define DMKPIGHPOGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766210)
#define DMKPIGHPOGP___INIT_OFFSET UNITYSDK_OFFSET(0x7661B0)

inline static constexpr unsigned int DMKPIGHPOGP_TypeDefinitionIndex = 13063;

struct alignas(8) DMKPIGHPOGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKPIGHPOGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMAJCGPALCO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMAJCGPALCO&))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DMKPIGHPOGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMKPIGHPOGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DMKPIGHPOGP LDDKCODBDNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMKPIGHPOGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_LDDKCODBDNA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMAJCGPALCO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMAJCGPALCO&, ::System::Int32&))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DMKPIGHPOGP LDDKCODBDNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMKPIGHPOGP EIFONLCJOPG)
	{
		return ((::DMKPIGHPOGP(*)(::FlatBuffers::ByteBuffer*, ::DMKPIGHPOGP))((::PBYTE)hIl2Cpp + DMKPIGHPOGP_LDDKCODBDNA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
