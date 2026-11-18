#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPDFFPFECBB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBLOFGBBHKD_AMOKHBDPFBP_1_OFFSET UNITYSDK_OFFSET(0x17779290)
#define DBLOFGBBHKD_AMOKHBDPFBP_OFFSET UNITYSDK_OFFSET(0x17779230)
#define DBLOFGBBHKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DBLOFGBBHKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD650)
#define DBLOFGBBHKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBLOFGBBHKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DBLOFGBBHKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD640)
#define DBLOFGBBHKD___INIT_OFFSET UNITYSDK_OFFSET(0x7AD620)

inline static constexpr unsigned int DBLOFGBBHKD_TypeDefinitionIndex = 14014;

struct alignas(8) DBLOFGBBHKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBLOFGBBHKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPDFFPFECBB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPDFFPFECBB&))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DBLOFGBBHKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBLOFGBBHKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DBLOFGBBHKD AMOKHBDPFBP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DBLOFGBBHKD EIFONLCJOPG)
	{
		return ((::DBLOFGBBHKD(*)(::FlatBuffers::ByteBuffer*, ::DBLOFGBBHKD))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_AMOKHBDPFBP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DBLOFGBBHKD AMOKHBDPFBP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBLOFGBBHKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBLOFGBBHKD_AMOKHBDPFBP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
