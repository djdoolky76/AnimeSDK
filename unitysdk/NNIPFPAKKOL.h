#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MEHNAMHCHOK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNIPFPAKKOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNIPFPAKKOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6440)
#define NNIPFPAKKOL_EIHPPKNHHLH_1_OFFSET UNITYSDK_OFFSET(0x173571B0)
#define NNIPFPAKKOL_EIHPPKNHHLH_OFFSET UNITYSDK_OFFSET(0x17357140)
#define NNIPFPAKKOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNIPFPAKKOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNIPFPAKKOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6430)
#define NNIPFPAKKOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6420)
#define NNIPFPAKKOL___INIT_OFFSET UNITYSDK_OFFSET(0x7A6400)

inline static constexpr unsigned int NNIPFPAKKOL_TypeDefinitionIndex = 15411;

struct alignas(8) NNIPFPAKKOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNIPFPAKKOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NNIPFPAKKOL EIHPPKNHHLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNIPFPAKKOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_EIHPPKNHHLH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NNIPFPAKKOL EIHPPKNHHLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNIPFPAKKOL EIFONLCJOPG)
	{
		return ((::NNIPFPAKKOL(*)(::FlatBuffers::ByteBuffer*, ::NNIPFPAKKOL))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_EIHPPKNHHLH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MEHNAMHCHOK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEHNAMHCHOK&, ::System::Int32&))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MEHNAMHCHOK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEHNAMHCHOK&))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NNIPFPAKKOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNIPFPAKKOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNIPFPAKKOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
