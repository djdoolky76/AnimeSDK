#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPLAAIHKNCF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBIJJJJKFCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBIJJJJKFCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77B350)
#define LBIJJJJKFCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBIJJJJKFCD_GGEKOEBFKLI_1_OFFSET UNITYSDK_OFFSET(0x1612B300)
#define LBIJJJJKFCD_GGEKOEBFKLI_OFFSET UNITYSDK_OFFSET(0x1612B260)
#define LBIJJJJKFCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBIJJJJKFCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77B340)
#define LBIJJJJKFCD___INIT_OFFSET UNITYSDK_OFFSET(0x77B320)

inline static constexpr unsigned int LBIJJJJKFCD_TypeDefinitionIndex = 13211;

struct alignas(8) LBIJJJJKFCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBIJJJJKFCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPLAAIHKNCF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPLAAIHKNCF&))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LBIJJJJKFCD GGEKOEBFKLI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBIJJJJKFCD EIFONLCJOPG)
	{
		return ((::LBIJJJJKFCD(*)(::FlatBuffers::ByteBuffer*, ::LBIJJJJKFCD))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_GGEKOEBFKLI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LBIJJJJKFCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBIJJJJKFCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LBIJJJJKFCD GGEKOEBFKLI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBIJJJJKFCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBIJJJJKFCD_GGEKOEBFKLI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
