#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMPFOMALOMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOGIABENICP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EOGIABENICP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F6200)
#define EOGIABENICP_CNNNGHDLHGC_1_OFFSET UNITYSDK_OFFSET(0x1A1A4B00)
#define EOGIABENICP_CNNNGHDLHGC_OFFSET UNITYSDK_OFFSET(0x1A1A4A00)
#define EOGIABENICP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EOGIABENICP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EOGIABENICP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F61F0)
#define EOGIABENICP___INIT_OFFSET UNITYSDK_OFFSET(0x7F61D0)

inline static constexpr unsigned int EOGIABENICP_TypeDefinitionIndex = 16912;

struct alignas(8) EOGIABENICP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGIABENICP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOGIABENICP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EOGIABENICP CNNNGHDLHGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EOGIABENICP EIFONLCJOPG)
	{
		return ((::EOGIABENICP(*)(::FlatBuffers::ByteBuffer*, ::EOGIABENICP))((::PBYTE)hIl2Cpp + EOGIABENICP_CNNNGHDLHGC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGIABENICP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EOGIABENICP CNNNGHDLHGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOGIABENICP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOGIABENICP_CNNNGHDLHGC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMPFOMALOMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMPFOMALOMD&))((::PBYTE)hIl2Cpp + EOGIABENICP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGIABENICP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EOGIABENICP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOGIABENICP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOGIABENICP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
