#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CFCNEDACPDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABKCPDFOCHN_AIDJNBLGBGO_1_OFFSET UNITYSDK_OFFSET(0x1B9800B0)
#define ABKCPDFOCHN_AIDJNBLGBGO_OFFSET UNITYSDK_OFFSET(0x1B980010)
#define ABKCPDFOCHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABKCPDFOCHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815D40)
#define ABKCPDFOCHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABKCPDFOCHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABKCPDFOCHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815D30)
#define ABKCPDFOCHN___INIT_OFFSET UNITYSDK_OFFSET(0x815D10)

inline static constexpr unsigned int ABKCPDFOCHN_TypeDefinitionIndex = 13944;

struct alignas(8) ABKCPDFOCHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABKCPDFOCHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ABKCPDFOCHN AIDJNBLGBGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABKCPDFOCHN EIFONLCJOPG)
	{
		return ((::ABKCPDFOCHN(*)(::FlatBuffers::ByteBuffer*, ::ABKCPDFOCHN))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_AIDJNBLGBGO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ABKCPDFOCHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABKCPDFOCHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ABKCPDFOCHN AIDJNBLGBGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABKCPDFOCHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_AIDJNBLGBGO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CFCNEDACPDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CFCNEDACPDM&))((::PBYTE)hIl2Cpp + ABKCPDFOCHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
