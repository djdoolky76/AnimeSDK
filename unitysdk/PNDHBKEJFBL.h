#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GJLAJIFLOLF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNDHBKEJFBL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNDHBKEJFBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FFE0)
#define PNDHBKEJFBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNDHBKEJFBL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNDHBKEJFBL_JLOLNANBMGL_1_OFFSET UNITYSDK_OFFSET(0x1C0B3F70)
#define PNDHBKEJFBL_JLOLNANBMGL_OFFSET UNITYSDK_OFFSET(0x1C0B3DD0)
#define PNDHBKEJFBL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820020)
#define PNDHBKEJFBL___INIT_OFFSET UNITYSDK_OFFSET(0x81FFC0)

inline static constexpr unsigned int PNDHBKEJFBL_TypeDefinitionIndex = 10146;

struct alignas(8) PNDHBKEJFBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDHBKEJFBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PNDHBKEJFBL JLOLNANBMGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNDHBKEJFBL EIFONLCJOPG)
	{
		return ((::PNDHBKEJFBL(*)(::FlatBuffers::ByteBuffer*, ::PNDHBKEJFBL))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_JLOLNANBMGL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GJLAJIFLOLF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GJLAJIFLOLF&))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PNDHBKEJFBL JLOLNANBMGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNDHBKEJFBL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_JLOLNANBMGL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PNDHBKEJFBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNDHBKEJFBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDHBKEJFBL_PPOMNIFACOL_OFFSET))(this);
	}
};
