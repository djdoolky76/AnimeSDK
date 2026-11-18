#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHLKEKJAOGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNFGCMLPBEJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNFGCMLPBEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A62E0)
#define NNFGCMLPBEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNFGCMLPBEJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNFGCMLPBEJ_GPDJENADDMF_1_OFFSET UNITYSDK_OFFSET(0x17356520)
#define NNFGCMLPBEJ_GPDJENADDMF_OFFSET UNITYSDK_OFFSET(0x17356360)
#define NNFGCMLPBEJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6330)
#define NNFGCMLPBEJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6320)
#define NNFGCMLPBEJ___INIT_OFFSET UNITYSDK_OFFSET(0x7A62C0)

inline static constexpr unsigned int NNFGCMLPBEJ_TypeDefinitionIndex = 11483;

struct alignas(8) NNFGCMLPBEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NNFGCMLPBEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNFGCMLPBEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHLKEKJAOGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHLKEKJAOGM&))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NNFGCMLPBEJ GPDJENADDMF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNFGCMLPBEJ EIFONLCJOPG)
	{
		return ((::NNFGCMLPBEJ(*)(::FlatBuffers::ByteBuffer*, ::NNFGCMLPBEJ))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_GPDJENADDMF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CHLKEKJAOGM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHLKEKJAOGM&, ::System::Int32&))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NNFGCMLPBEJ GPDJENADDMF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNFGCMLPBEJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNFGCMLPBEJ_GPDJENADDMF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
