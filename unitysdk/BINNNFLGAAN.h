#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EEKGPKLGJJJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BINNNFLGAAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BINNNFLGAAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED190)
#define BINNNFLGAAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BINNNFLGAAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BINNNFLGAAN_IKOIAILAICI_1_OFFSET UNITYSDK_OFFSET(0x19BEB1E0)
#define BINNNFLGAAN_IKOIAILAICI_OFFSET UNITYSDK_OFFSET(0x19BEB170)
#define BINNNFLGAAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED180)
#define BINNNFLGAAN___INIT_OFFSET UNITYSDK_OFFSET(0x7ED160)

inline static constexpr unsigned int BINNNFLGAAN_TypeDefinitionIndex = 12274;

struct alignas(8) BINNNFLGAAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINNNFLGAAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BINNNFLGAAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINNNFLGAAN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BINNNFLGAAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BINNNFLGAAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BINNNFLGAAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BINNNFLGAAN IKOIAILAICI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BINNNFLGAAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BINNNFLGAAN_IKOIAILAICI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EEKGPKLGJJJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEKGPKLGJJJ&))((::PBYTE)hIl2Cpp + BINNNFLGAAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BINNNFLGAAN IKOIAILAICI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BINNNFLGAAN EIFONLCJOPG)
	{
		return ((::BINNNFLGAAN(*)(::FlatBuffers::ByteBuffer*, ::BINNNFLGAAN))((::PBYTE)hIl2Cpp + BINNNFLGAAN_IKOIAILAICI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINNNFLGAAN_GHKKNCCLPAN_OFFSET))(this);
	}
};
