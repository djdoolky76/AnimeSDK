#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CBCBKJPCKHB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKHHMGLDNHE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKHHMGLDNHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816AC0)
#define CKHHMGLDNHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKHHMGLDNHE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKHHMGLDNHE_HINMIGACOJO_1_OFFSET UNITYSDK_OFFSET(0x1B99BA40)
#define CKHHMGLDNHE_HINMIGACOJO_OFFSET UNITYSDK_OFFSET(0x1B99B900)
#define CKHHMGLDNHE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816AB0)
#define CKHHMGLDNHE___INIT_OFFSET UNITYSDK_OFFSET(0x816A90)

inline static constexpr unsigned int CKHHMGLDNHE_TypeDefinitionIndex = 9251;

struct alignas(8) CKHHMGLDNHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKHHMGLDNHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CKHHMGLDNHE HINMIGACOJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKHHMGLDNHE EIFONLCJOPG)
	{
		return ((::CKHHMGLDNHE(*)(::FlatBuffers::ByteBuffer*, ::CKHHMGLDNHE))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_HINMIGACOJO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CKHHMGLDNHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKHHMGLDNHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CBCBKJPCKHB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CBCBKJPCKHB&))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CKHHMGLDNHE HINMIGACOJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKHHMGLDNHE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_HINMIGACOJO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHHMGLDNHE_GHKKNCCLPAN_OFFSET))(this);
	}
};
