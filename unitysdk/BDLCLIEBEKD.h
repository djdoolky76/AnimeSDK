#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLHJJNEGDDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDLCLIEBEKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BDLCLIEBEKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC780)
#define BDLCLIEBEKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDLCLIEBEKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDLCLIEBEKD_JCOFJFGLKGG_1_OFFSET UNITYSDK_OFFSET(0x17757E20)
#define BDLCLIEBEKD_JCOFJFGLKGG_OFFSET UNITYSDK_OFFSET(0x17757DB0)
#define BDLCLIEBEKD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AC760)
#define BDLCLIEBEKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC770)
#define BDLCLIEBEKD___INIT_OFFSET UNITYSDK_OFFSET(0x7AC740)

inline static constexpr unsigned int BDLCLIEBEKD_TypeDefinitionIndex = 16459;

struct alignas(8) BDLCLIEBEKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDLCLIEBEKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PLHJJNEGDDJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLHJJNEGDDJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BDLCLIEBEKD JCOFJFGLKGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDLCLIEBEKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_JCOFJFGLKGG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BDLCLIEBEKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDLCLIEBEKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BDLCLIEBEKD JCOFJFGLKGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDLCLIEBEKD EIFONLCJOPG)
	{
		return ((::BDLCLIEBEKD(*)(::FlatBuffers::ByteBuffer*, ::BDLCLIEBEKD))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_JCOFJFGLKGG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLHJJNEGDDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLHJJNEGDDJ&))((::PBYTE)hIl2Cpp + BDLCLIEBEKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
