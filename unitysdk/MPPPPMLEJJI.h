#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHOLOIFFLMA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPPPPMLEJJI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPPPPMLEJJI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEE80)
#define MPPPPMLEJJI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPPPPMLEJJI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPPPPMLEJJI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AEEC0)
#define MPPPPMLEJJI_MCAGEMCOCIG_1_OFFSET UNITYSDK_OFFSET(0x1D0BCCC0)
#define MPPPPMLEJJI_MCAGEMCOCIG_OFFSET UNITYSDK_OFFSET(0x1D0BCBC0)
#define MPPPPMLEJJI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEE70)
#define MPPPPMLEJJI___INIT_OFFSET UNITYSDK_OFFSET(0x8AEE50)

inline static constexpr unsigned int MPPPPMLEJJI_TypeDefinitionIndex = 9290;

struct alignas(8) MPPPPMLEJJI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPPPPMLEJJI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MPPPPMLEJJI MCAGEMCOCIG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPPPPMLEJJI EIFONLCJOPG)
	{
		return ((::MPPPPMLEJJI(*)(::FlatBuffers::ByteBuffer*, ::MPPPPMLEJJI))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_MCAGEMCOCIG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MPPPPMLEJJI MCAGEMCOCIG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPPPPMLEJJI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_MCAGEMCOCIG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MPPPPMLEJJI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPPPPMLEJJI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHOLOIFFLMA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHOLOIFFLMA&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHOLOIFFLMA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHOLOIFFLMA&))((::PBYTE)hIl2Cpp + MPPPPMLEJJI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
