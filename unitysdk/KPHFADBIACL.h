#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMPOFOEKFJF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPHFADBIACL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KPHFADBIACL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758EF0)
#define KPHFADBIACL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPHFADBIACL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KPHFADBIACL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758ED0)
#define KPHFADBIACL_ODAJKAGCJEN_1_OFFSET UNITYSDK_OFFSET(0x1530B8D0)
#define KPHFADBIACL_ODAJKAGCJEN_OFFSET UNITYSDK_OFFSET(0x1530B630)
#define KPHFADBIACL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758EE0)
#define KPHFADBIACL___INIT_OFFSET UNITYSDK_OFFSET(0x758EB0)

inline static constexpr unsigned int KPHFADBIACL_TypeDefinitionIndex = 17031;

struct alignas(8) KPHFADBIACL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFADBIACL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPHFADBIACL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFADBIACL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KPHFADBIACL ODAJKAGCJEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KPHFADBIACL EIFONLCJOPG)
	{
		return ((::KPHFADBIACL(*)(::FlatBuffers::ByteBuffer*, ::KPHFADBIACL))((::PBYTE)hIl2Cpp + KPHFADBIACL_ODAJKAGCJEN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DMPOFOEKFJF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMPOFOEKFJF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KPHFADBIACL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KPHFADBIACL ODAJKAGCJEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPHFADBIACL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPHFADBIACL_ODAJKAGCJEN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHFADBIACL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMPOFOEKFJF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMPOFOEKFJF&))((::PBYTE)hIl2Cpp + KPHFADBIACL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KPHFADBIACL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPHFADBIACL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPHFADBIACL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
