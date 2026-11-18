#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LMPKGFKIHMO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLCHMHELCMB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GLCHMHELCMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCB70)
#define GLCHMHELCMB_DALGPPHFBCF_1_OFFSET UNITYSDK_OFFSET(0x1A5C31B0)
#define GLCHMHELCMB_DALGPPHFBCF_OFFSET UNITYSDK_OFFSET(0x1A5C3140)
#define GLCHMHELCMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLCHMHELCMB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GLCHMHELCMB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FCB50)
#define GLCHMHELCMB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCB60)
#define GLCHMHELCMB___INIT_OFFSET UNITYSDK_OFFSET(0x7FCB30)

inline static constexpr unsigned int GLCHMHELCMB_TypeDefinitionIndex = 13630;

struct alignas(8) GLCHMHELCMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCHMHELCMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLCHMHELCMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCHMHELCMB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LMPKGFKIHMO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMPKGFKIHMO&))((::PBYTE)hIl2Cpp + GLCHMHELCMB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LMPKGFKIHMO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LMPKGFKIHMO&, ::System::Int32&))((::PBYTE)hIl2Cpp + GLCHMHELCMB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCHMHELCMB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GLCHMHELCMB DALGPPHFBCF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLCHMHELCMB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLCHMHELCMB_DALGPPHFBCF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GLCHMHELCMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLCHMHELCMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLCHMHELCMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GLCHMHELCMB DALGPPHFBCF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GLCHMHELCMB EIFONLCJOPG)
	{
		return ((::GLCHMHELCMB(*)(::FlatBuffers::ByteBuffer*, ::GLCHMHELCMB))((::PBYTE)hIl2Cpp + GLCHMHELCMB_DALGPPHFBCF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
