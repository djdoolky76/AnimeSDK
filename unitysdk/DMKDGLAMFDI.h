#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFMBHCMIIFN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMKDGLAMFDI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DMKDGLAMFDI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBB30)
#define DMKDGLAMFDI_BOEEMLDNHLF_1_OFFSET UNITYSDK_OFFSET(0x1A594C00)
#define DMKDGLAMFDI_BOEEMLDNHLF_OFFSET UNITYSDK_OFFSET(0x1A594B90)
#define DMKDGLAMFDI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMKDGLAMFDI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DMKDGLAMFDI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBB70)
#define DMKDGLAMFDI___INIT_OFFSET UNITYSDK_OFFSET(0x7FBB10)

inline static constexpr unsigned int DMKDGLAMFDI_TypeDefinitionIndex = 11781;

struct alignas(8) DMKDGLAMFDI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKDGLAMFDI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DMKDGLAMFDI BOEEMLDNHLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMKDGLAMFDI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_BOEEMLDNHLF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DMKDGLAMFDI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMKDGLAMFDI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFMBHCMIIFN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFMBHCMIIFN&))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DMKDGLAMFDI BOEEMLDNHLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DMKDGLAMFDI EIFONLCJOPG)
	{
		return ((::DMKDGLAMFDI(*)(::FlatBuffers::ByteBuffer*, ::DMKDGLAMFDI))((::PBYTE)hIl2Cpp + DMKDGLAMFDI_BOEEMLDNHLF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
