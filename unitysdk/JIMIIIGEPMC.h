#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AMGFANCCNPH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIMIIIGEPMC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIMIIIGEPMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4340)
#define JIMIIIGEPMC_BPMKMDAHFIC_1_OFFSET UNITYSDK_OFFSET(0x1954ADA0)
#define JIMIIIGEPMC_BPMKMDAHFIC_OFFSET UNITYSDK_OFFSET(0x1954AD40)
#define JIMIIIGEPMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIMIIIGEPMC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIMIIIGEPMC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4390)
#define JIMIIIGEPMC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4380)
#define JIMIIIGEPMC___INIT_OFFSET UNITYSDK_OFFSET(0x7E4320)

inline static constexpr unsigned int JIMIIIGEPMC_TypeDefinitionIndex = 14154;

struct alignas(8) JIMIIIGEPMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMIIIGEPMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JIMIIIGEPMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIMIIIGEPMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AMGFANCCNPH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMGFANCCNPH&))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JIMIIIGEPMC BPMKMDAHFIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIMIIIGEPMC EIFONLCJOPG)
	{
		return ((::JIMIIIGEPMC(*)(::FlatBuffers::ByteBuffer*, ::JIMIIIGEPMC))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_BPMKMDAHFIC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JIMIIIGEPMC BPMKMDAHFIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIMIIIGEPMC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_BPMKMDAHFIC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AMGFANCCNPH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AMGFANCCNPH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JIMIIIGEPMC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
