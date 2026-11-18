#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOKBABDIJDO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPAPIOILGBN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPAPIOILGBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5140)
#define GPAPIOILGBN_COKCPJHJHAD_1_OFFSET UNITYSDK_OFFSET(0x17BF42D0)
#define GPAPIOILGBN_COKCPJHJHAD_OFFSET UNITYSDK_OFFSET(0x17BF4260)
#define GPAPIOILGBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPAPIOILGBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPAPIOILGBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B5180)
#define GPAPIOILGBN___INIT_OFFSET UNITYSDK_OFFSET(0x7B5120)

inline static constexpr unsigned int GPAPIOILGBN_TypeDefinitionIndex = 11620;

struct alignas(8) GPAPIOILGBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPAPIOILGBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPAPIOILGBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GPAPIOILGBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPAPIOILGBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPAPIOILGBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPAPIOILGBN COKCPJHJHAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPAPIOILGBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPAPIOILGBN_COKCPJHJHAD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOKBABDIJDO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOKBABDIJDO&))((::PBYTE)hIl2Cpp + GPAPIOILGBN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPAPIOILGBN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GPAPIOILGBN COKCPJHJHAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPAPIOILGBN EIFONLCJOPG)
	{
		return ((::GPAPIOILGBN(*)(::FlatBuffers::ByteBuffer*, ::GPAPIOILGBN))((::PBYTE)hIl2Cpp + GPAPIOILGBN_COKCPJHJHAD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPAPIOILGBN_PPOMNIFACOL_OFFSET))(this);
	}
};
