#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGJLLNLGJOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJNIGNMCEHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OJNIGNMCEHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C6E0)
#define OJNIGNMCEHN_BNEDEEHGDGI_1_OFFSET UNITYSDK_OFFSET(0x1B33FC30)
#define OJNIGNMCEHN_BNEDEEHGDGI_OFFSET UNITYSDK_OFFSET(0x1B33FB90)
#define OJNIGNMCEHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OJNIGNMCEHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OJNIGNMCEHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C720)
#define OJNIGNMCEHN___INIT_OFFSET UNITYSDK_OFFSET(0x80C6C0)

inline static constexpr unsigned int OJNIGNMCEHN_TypeDefinitionIndex = 16801;

struct alignas(8) OJNIGNMCEHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJNIGNMCEHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OJNIGNMCEHN BNEDEEHGDGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OJNIGNMCEHN EIFONLCJOPG)
	{
		return ((::OJNIGNMCEHN(*)(::FlatBuffers::ByteBuffer*, ::OJNIGNMCEHN))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_BNEDEEHGDGI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OJNIGNMCEHN BNEDEEHGDGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJNIGNMCEHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_BNEDEEHGDGI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OJNIGNMCEHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJNIGNMCEHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGJLLNLGJOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGJLLNLGJOD&))((::PBYTE)hIl2Cpp + OJNIGNMCEHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
