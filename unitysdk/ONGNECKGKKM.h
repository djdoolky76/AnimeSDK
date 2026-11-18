#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PKGDHDNLMFH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONGNECKGKKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONGNECKGKKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820B30)
#define ONGNECKGKKM_FMEKNAAKCLN_1_OFFSET UNITYSDK_OFFSET(0x1C1A3F20)
#define ONGNECKGKKM_FMEKNAAKCLN_OFFSET UNITYSDK_OFFSET(0x1C1A3EC0)
#define ONGNECKGKKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONGNECKGKKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONGNECKGKKM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820B20)
#define ONGNECKGKKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820B70)
#define ONGNECKGKKM___INIT_OFFSET UNITYSDK_OFFSET(0x820B00)

inline static constexpr unsigned int ONGNECKGKKM_TypeDefinitionIndex = 13006;

struct alignas(8) ONGNECKGKKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNECKGKKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGNECKGKKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PKGDHDNLMFH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKGDHDNLMFH&))((::PBYTE)hIl2Cpp + ONGNECKGKKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PKGDHDNLMFH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PKGDHDNLMFH&, ::System::Int32&))((::PBYTE)hIl2Cpp + ONGNECKGKKM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ONGNECKGKKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGNECKGKKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGNECKGKKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNECKGKKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ONGNECKGKKM FMEKNAAKCLN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONGNECKGKKM EIFONLCJOPG)
	{
		return ((::ONGNECKGKKM(*)(::FlatBuffers::ByteBuffer*, ::ONGNECKGKKM))((::PBYTE)hIl2Cpp + ONGNECKGKKM_FMEKNAAKCLN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGNECKGKKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ONGNECKGKKM FMEKNAAKCLN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGNECKGKKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGNECKGKKM_FMEKNAAKCLN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
