#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCEMOEFKHCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDNBBPLEGHD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HDNBBPLEGHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5480)
#define HDNBBPLEGHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDNBBPLEGHD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HDNBBPLEGHD_KPFIGFGIBIJ_1_OFFSET UNITYSDK_OFFSET(0x17BF8E50)
#define HDNBBPLEGHD_KPFIGFGIBIJ_OFFSET UNITYSDK_OFFSET(0x17BF8DE0)
#define HDNBBPLEGHD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B5470)
#define HDNBBPLEGHD___INIT_OFFSET UNITYSDK_OFFSET(0x7B5450)

inline static constexpr unsigned int HDNBBPLEGHD_TypeDefinitionIndex = 12471;

struct alignas(8) HDNBBPLEGHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDNBBPLEGHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCEMOEFKHCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCEMOEFKHCI&))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HDNBBPLEGHD KPFIGFGIBIJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDNBBPLEGHD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_KPFIGFGIBIJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HDNBBPLEGHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDNBBPLEGHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HDNBBPLEGHD KPFIGFGIBIJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HDNBBPLEGHD EIFONLCJOPG)
	{
		return ((::HDNBBPLEGHD(*)(::FlatBuffers::ByteBuffer*, ::HDNBBPLEGHD))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_KPFIGFGIBIJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNBBPLEGHD_GHKKNCCLPAN_OFFSET))(this);
	}
};
