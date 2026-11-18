#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NEOGDJAKOKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJIACFJENMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IJIACFJENMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF570)
#define IJIACFJENMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJIACFJENMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJIACFJENMA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF5C0)
#define IJIACFJENMA_MICCEMFNDHC_1_OFFSET UNITYSDK_OFFSET(0x19350C50)
#define IJIACFJENMA_MICCEMFNDHC_OFFSET UNITYSDK_OFFSET(0x19350BE0)
#define IJIACFJENMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF5B0)
#define IJIACFJENMA___INIT_OFFSET UNITYSDK_OFFSET(0x7DF550)

inline static constexpr unsigned int IJIACFJENMA_TypeDefinitionIndex = 11062;

struct alignas(8) IJIACFJENMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIACFJENMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJIACFJENMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IJIACFJENMA MICCEMFNDHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJIACFJENMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJIACFJENMA_MICCEMFNDHC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIACFJENMA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IJIACFJENMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJIACFJENMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJIACFJENMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJIACFJENMA MICCEMFNDHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJIACFJENMA EIFONLCJOPG)
	{
		return ((::IJIACFJENMA(*)(::FlatBuffers::ByteBuffer*, ::IJIACFJENMA))((::PBYTE)hIl2Cpp + IJIACFJENMA_MICCEMFNDHC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIACFJENMA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NEOGDJAKOKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEOGDJAKOKD&))((::PBYTE)hIl2Cpp + IJIACFJENMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NEOGDJAKOKD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NEOGDJAKOKD&, ::System::Int32&))((::PBYTE)hIl2Cpp + IJIACFJENMA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
