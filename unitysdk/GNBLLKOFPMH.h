#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJOAELHFLAH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNBLLKOFPMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNBLLKOFPMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76E920)
#define GNBLLKOFPMH_DHFNIDIPGKD_1_OFFSET UNITYSDK_OFFSET(0x15A84D60)
#define GNBLLKOFPMH_DHFNIDIPGKD_OFFSET UNITYSDK_OFFSET(0x15A84C60)
#define GNBLLKOFPMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNBLLKOFPMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNBLLKOFPMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76E960)
#define GNBLLKOFPMH___INIT_OFFSET UNITYSDK_OFFSET(0x76E900)

inline static constexpr unsigned int GNBLLKOFPMH_TypeDefinitionIndex = 12358;

struct alignas(8) GNBLLKOFPMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBLLKOFPMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GNBLLKOFPMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBLLKOFPMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GNBLLKOFPMH DHFNIDIPGKD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNBLLKOFPMH EIFONLCJOPG)
	{
		return ((::GNBLLKOFPMH(*)(::FlatBuffers::ByteBuffer*, ::GNBLLKOFPMH))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_DHFNIDIPGKD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJOAELHFLAH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJOAELHFLAH&))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GNBLLKOFPMH DHFNIDIPGKD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBLLKOFPMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_DHFNIDIPGKD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBLLKOFPMH_PPOMNIFACOL_OFFSET))(this);
	}
};
