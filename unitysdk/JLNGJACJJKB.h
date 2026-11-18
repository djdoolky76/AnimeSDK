#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HCADPOBFPNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLNGJACJJKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JLNGJACJJKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDA30)
#define JLNGJACJJKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLNGJACJJKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JLNGJACJJKB_ILJOKCNINOA_1_OFFSET UNITYSDK_OFFSET(0x1A5F11E0)
#define JLNGJACJJKB_ILJOKCNINOA_OFFSET UNITYSDK_OFFSET(0x1A5F1140)
#define JLNGJACJJKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDA20)
#define JLNGJACJJKB___INIT_OFFSET UNITYSDK_OFFSET(0x7FDA00)

inline static constexpr unsigned int JLNGJACJJKB_TypeDefinitionIndex = 13022;

struct alignas(8) JLNGJACJJKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNGJACJJKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLNGJACJJKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JLNGJACJJKB ILJOKCNINOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JLNGJACJJKB EIFONLCJOPG)
	{
		return ((::JLNGJACJJKB(*)(::FlatBuffers::ByteBuffer*, ::JLNGJACJJKB))((::PBYTE)hIl2Cpp + JLNGJACJJKB_ILJOKCNINOA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JLNGJACJJKB ILJOKCNINOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLNGJACJJKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLNGJACJJKB_ILJOKCNINOA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNGJACJJKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JLNGJACJJKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLNGJACJJKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLNGJACJJKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HCADPOBFPNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HCADPOBFPNM&))((::PBYTE)hIl2Cpp + JLNGJACJJKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNGJACJJKB_GHKKNCCLPAN_OFFSET))(this);
	}
};
