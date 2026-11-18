#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGCLOKHMDIC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCPFBHPCJDB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OCPFBHPCJDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E620)
#define OCPFBHPCJDB_CLCNGDNJIDN_1_OFFSET UNITYSDK_OFFSET(0x1BF779B0)
#define OCPFBHPCJDB_CLCNGDNJIDN_OFFSET UNITYSDK_OFFSET(0x1BF77940)
#define OCPFBHPCJDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCPFBHPCJDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OCPFBHPCJDB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E610)
#define OCPFBHPCJDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E660)
#define OCPFBHPCJDB___INIT_OFFSET UNITYSDK_OFFSET(0x81E5F0)

inline static constexpr unsigned int OCPFBHPCJDB_TypeDefinitionIndex = 12308;

struct alignas(8) OCPFBHPCJDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCPFBHPCJDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGCLOKHMDIC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGCLOKHMDIC&, ::System::Int32&))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OCPFBHPCJDB CLCNGDNJIDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCPFBHPCJDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_CLCNGDNJIDN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OCPFBHPCJDB CLCNGDNJIDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OCPFBHPCJDB EIFONLCJOPG)
	{
		return ((::OCPFBHPCJDB(*)(::FlatBuffers::ByteBuffer*, ::OCPFBHPCJDB))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_CLCNGDNJIDN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OCPFBHPCJDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCPFBHPCJDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGCLOKHMDIC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGCLOKHMDIC&))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPFBHPCJDB_PPOMNIFACOL_OFFSET))(this);
	}
};
