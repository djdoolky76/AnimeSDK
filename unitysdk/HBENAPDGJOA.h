#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLPFNHCNPEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBENAPDGJOA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBENAPDGJOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814110)
#define HBENAPDGJOA_EJMCMLDANNL_1_OFFSET UNITYSDK_OFFSET(0x1B873D40)
#define HBENAPDGJOA_EJMCMLDANNL_OFFSET UNITYSDK_OFFSET(0x1B873CA0)
#define HBENAPDGJOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBENAPDGJOA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBENAPDGJOA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814150)
#define HBENAPDGJOA___INIT_OFFSET UNITYSDK_OFFSET(0x8140F0)

inline static constexpr unsigned int HBENAPDGJOA_TypeDefinitionIndex = 14717;

struct alignas(8) HBENAPDGJOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBENAPDGJOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBENAPDGJOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HBENAPDGJOA EJMCMLDANNL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBENAPDGJOA EIFONLCJOPG)
	{
		return ((::HBENAPDGJOA(*)(::FlatBuffers::ByteBuffer*, ::HBENAPDGJOA))((::PBYTE)hIl2Cpp + HBENAPDGJOA_EJMCMLDANNL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HBENAPDGJOA EJMCMLDANNL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBENAPDGJOA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBENAPDGJOA_EJMCMLDANNL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HBENAPDGJOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBENAPDGJOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBENAPDGJOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBENAPDGJOA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBENAPDGJOA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLPFNHCNPEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLPFNHCNPEN&))((::PBYTE)hIl2Cpp + HBENAPDGJOA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
