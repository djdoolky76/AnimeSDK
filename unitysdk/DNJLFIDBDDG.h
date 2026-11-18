#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CKLDABNCGMI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNJLFIDBDDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DNJLFIDBDDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F59B0)
#define DNJLFIDBDDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNJLFIDBDDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DNJLFIDBDDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5A00)
#define DNJLFIDBDDG_MEPMEPOOLNA_1_OFFSET UNITYSDK_OFFSET(0x1A191740)
#define DNJLFIDBDDG_MEPMEPOOLNA_OFFSET UNITYSDK_OFFSET(0x1A191680)
#define DNJLFIDBDDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F59F0)
#define DNJLFIDBDDG___INIT_OFFSET UNITYSDK_OFFSET(0x7F5990)

inline static constexpr unsigned int DNJLFIDBDDG_TypeDefinitionIndex = 16859;

struct alignas(8) DNJLFIDBDDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNJLFIDBDDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DNJLFIDBDDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNJLFIDBDDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DNJLFIDBDDG MEPMEPOOLNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DNJLFIDBDDG EIFONLCJOPG)
	{
		return ((::DNJLFIDBDDG(*)(::FlatBuffers::ByteBuffer*, ::DNJLFIDBDDG))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_MEPMEPOOLNA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DNJLFIDBDDG MEPMEPOOLNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNJLFIDBDDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_MEPMEPOOLNA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CKLDABNCGMI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKLDABNCGMI&, ::System::Int32&))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CKLDABNCGMI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CKLDABNCGMI&))((::PBYTE)hIl2Cpp + DNJLFIDBDDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
