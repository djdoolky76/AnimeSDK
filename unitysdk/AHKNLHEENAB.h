#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMKKAPGGMAF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHKNLHEENAB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AHKNLHEENAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4810)
#define AHKNLHEENAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHKNLHEENAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AHKNLHEENAB_KDCBMAPIPJN_1_OFFSET UNITYSDK_OFFSET(0x1A15E0F0)
#define AHKNLHEENAB_KDCBMAPIPJN_OFFSET UNITYSDK_OFFSET(0x1A15DFF0)
#define AHKNLHEENAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4850)
#define AHKNLHEENAB___INIT_OFFSET UNITYSDK_OFFSET(0x7F47F0)

inline static constexpr unsigned int AHKNLHEENAB_TypeDefinitionIndex = 12270;

struct alignas(8) AHKNLHEENAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKNLHEENAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHKNLHEENAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AHKNLHEENAB KDCBMAPIPJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AHKNLHEENAB EIFONLCJOPG)
	{
		return ((::AHKNLHEENAB(*)(::FlatBuffers::ByteBuffer*, ::AHKNLHEENAB))((::PBYTE)hIl2Cpp + AHKNLHEENAB_KDCBMAPIPJN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AHKNLHEENAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHKNLHEENAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHKNLHEENAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKNLHEENAB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AHKNLHEENAB KDCBMAPIPJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHKNLHEENAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHKNLHEENAB_KDCBMAPIPJN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKNLHEENAB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMKKAPGGMAF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMKKAPGGMAF&))((::PBYTE)hIl2Cpp + AHKNLHEENAB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
