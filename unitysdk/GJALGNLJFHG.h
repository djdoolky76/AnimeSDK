#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PEBGABGMONN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJALGNLJFHG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GJALGNLJFHG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB580)
#define GJALGNLJFHG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJALGNLJFHG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GJALGNLJFHG_HMADANPCFPL_1_OFFSET UNITYSDK_OFFSET(0x19AFBE20)
#define GJALGNLJFHG_HMADANPCFPL_OFFSET UNITYSDK_OFFSET(0x19AFBD20)
#define GJALGNLJFHG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB5C0)
#define GJALGNLJFHG___INIT_OFFSET UNITYSDK_OFFSET(0x7EB560)

inline static constexpr unsigned int GJALGNLJFHG_TypeDefinitionIndex = 15194;

struct alignas(8) GJALGNLJFHG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJALGNLJFHG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJALGNLJFHG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PEBGABGMONN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PEBGABGMONN&))((::PBYTE)hIl2Cpp + GJALGNLJFHG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GJALGNLJFHG HMADANPCFPL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GJALGNLJFHG EIFONLCJOPG)
	{
		return ((::GJALGNLJFHG(*)(::FlatBuffers::ByteBuffer*, ::GJALGNLJFHG))((::PBYTE)hIl2Cpp + GJALGNLJFHG_HMADANPCFPL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GJALGNLJFHG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJALGNLJFHG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJALGNLJFHG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJALGNLJFHG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJALGNLJFHG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GJALGNLJFHG HMADANPCFPL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJALGNLJFHG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJALGNLJFHG_HMADANPCFPL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
