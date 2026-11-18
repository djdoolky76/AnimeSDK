#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KONECBMJFMC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMGFDEIKFLB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMGFDEIKFLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E69D0)
#define NMGFDEIKFLB_CGNNBGBEOEE_1_OFFSET UNITYSDK_OFFSET(0x195BCB20)
#define NMGFDEIKFLB_CGNNBGBEOEE_OFFSET UNITYSDK_OFFSET(0x195BCAB0)
#define NMGFDEIKFLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMGFDEIKFLB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMGFDEIKFLB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6A10)
#define NMGFDEIKFLB___INIT_OFFSET UNITYSDK_OFFSET(0x7E69B0)

inline static constexpr unsigned int NMGFDEIKFLB_TypeDefinitionIndex = 17154;

struct alignas(8) NMGFDEIKFLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMGFDEIKFLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KONECBMJFMC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KONECBMJFMC&))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NMGFDEIKFLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMGFDEIKFLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NMGFDEIKFLB CGNNBGBEOEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMGFDEIKFLB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_CGNNBGBEOEE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NMGFDEIKFLB CGNNBGBEOEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMGFDEIKFLB EIFONLCJOPG)
	{
		return ((::NMGFDEIKFLB(*)(::FlatBuffers::ByteBuffer*, ::NMGFDEIKFLB))((::PBYTE)hIl2Cpp + NMGFDEIKFLB_CGNNBGBEOEE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
