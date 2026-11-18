#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DNODPPHMGGE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOOAFGGNKBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BOOAFGGNKBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1780)
#define BOOAFGGNKBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOOAFGGNKBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOOAFGGNKBE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C17C0)
#define BOOAFGGNKBE_OLMDCPCECEP_1_OFFSET UNITYSDK_OFFSET(0x17F00E50)
#define BOOAFGGNKBE_OLMDCPCECEP_OFFSET UNITYSDK_OFFSET(0x17F00DE0)
#define BOOAFGGNKBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1770)
#define BOOAFGGNKBE___INIT_OFFSET UNITYSDK_OFFSET(0x7C1750)

inline static constexpr unsigned int BOOAFGGNKBE_TypeDefinitionIndex = 13201;

struct alignas(8) BOOAFGGNKBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOOAFGGNKBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DNODPPHMGGE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNODPPHMGGE&))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BOOAFGGNKBE OLMDCPCECEP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOOAFGGNKBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_OLMDCPCECEP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BOOAFGGNKBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOOAFGGNKBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOOAFGGNKBE OLMDCPCECEP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOOAFGGNKBE EIFONLCJOPG)
	{
		return ((::BOOAFGGNKBE(*)(::FlatBuffers::ByteBuffer*, ::BOOAFGGNKBE))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_OLMDCPCECEP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DNODPPHMGGE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DNODPPHMGGE&, ::System::Int32&))((::PBYTE)hIl2Cpp + BOOAFGGNKBE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
