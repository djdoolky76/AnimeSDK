#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OKFDAHOEAAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBAHAFKADMC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBAHAFKADMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811EF0)
#define HBAHAFKADMC_CDMPMDHNCKC_1_OFFSET UNITYSDK_OFFSET(0x1B7C08F0)
#define HBAHAFKADMC_CDMPMDHNCKC_OFFSET UNITYSDK_OFFSET(0x1B7C0850)
#define HBAHAFKADMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBAHAFKADMC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBAHAFKADMC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811EE0)
#define HBAHAFKADMC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811F30)
#define HBAHAFKADMC___INIT_OFFSET UNITYSDK_OFFSET(0x811EC0)

inline static constexpr unsigned int HBAHAFKADMC_TypeDefinitionIndex = 15159;

struct alignas(8) HBAHAFKADMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAHAFKADMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBAHAFKADMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OKFDAHOEAAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OKFDAHOEAAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HBAHAFKADMC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HBAHAFKADMC CDMPMDHNCKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBAHAFKADMC EIFONLCJOPG)
	{
		return ((::HBAHAFKADMC(*)(::FlatBuffers::ByteBuffer*, ::HBAHAFKADMC))((::PBYTE)hIl2Cpp + HBAHAFKADMC_CDMPMDHNCKC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HBAHAFKADMC CDMPMDHNCKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBAHAFKADMC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBAHAFKADMC_CDMPMDHNCKC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OKFDAHOEAAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OKFDAHOEAAK&))((::PBYTE)hIl2Cpp + HBAHAFKADMC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAHAFKADMC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HBAHAFKADMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBAHAFKADMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBAHAFKADMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAHAFKADMC_PPOMNIFACOL_OFFSET))(this);
	}
};
