#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JKNHEAAMEHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDCCMHFPLEA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MDCCMHFPLEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819EA0)
#define MDCCMHFPLEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDCCMHFPLEA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MDCCMHFPLEA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819E90)
#define MDCCMHFPLEA_OPGBENINEKM_1_OFFSET UNITYSDK_OFFSET(0x1BA90BC0)
#define MDCCMHFPLEA_OPGBENINEKM_OFFSET UNITYSDK_OFFSET(0x1BA90B60)
#define MDCCMHFPLEA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819E80)
#define MDCCMHFPLEA___INIT_OFFSET UNITYSDK_OFFSET(0x819E60)

inline static constexpr unsigned int MDCCMHFPLEA_TypeDefinitionIndex = 9678;

struct alignas(8) MDCCMHFPLEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCCMHFPLEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JKNHEAAMEHI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JKNHEAAMEHI&, ::System::Int32&))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JKNHEAAMEHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JKNHEAAMEHI&))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MDCCMHFPLEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDCCMHFPLEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MDCCMHFPLEA OPGBENINEKM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MDCCMHFPLEA EIFONLCJOPG)
	{
		return ((::MDCCMHFPLEA(*)(::FlatBuffers::ByteBuffer*, ::MDCCMHFPLEA))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_OPGBENINEKM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MDCCMHFPLEA OPGBENINEKM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDCCMHFPLEA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDCCMHFPLEA_OPGBENINEKM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
