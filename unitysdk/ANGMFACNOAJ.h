#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OELJBPIGDGC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANGMFACNOAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ANGMFACNOAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1FB0)
#define ANGMFACNOAJ_CBKHENFDBJF_1_OFFSET UNITYSDK_OFFSET(0x194F1A90)
#define ANGMFACNOAJ_CBKHENFDBJF_OFFSET UNITYSDK_OFFSET(0x194F1A20)
#define ANGMFACNOAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANGMFACNOAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANGMFACNOAJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E1FA0)
#define ANGMFACNOAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1FF0)
#define ANGMFACNOAJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E1F80)

inline static constexpr unsigned int ANGMFACNOAJ_TypeDefinitionIndex = 10559;

struct alignas(8) ANGMFACNOAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANGMFACNOAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ANGMFACNOAJ CBKHENFDBJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANGMFACNOAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_CBKHENFDBJF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ANGMFACNOAJ CBKHENFDBJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANGMFACNOAJ EIFONLCJOPG)
	{
		return ((::ANGMFACNOAJ(*)(::FlatBuffers::ByteBuffer*, ::ANGMFACNOAJ))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_CBKHENFDBJF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OELJBPIGDGC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OELJBPIGDGC&, ::System::Int32&))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OELJBPIGDGC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OELJBPIGDGC&))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ANGMFACNOAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANGMFACNOAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGMFACNOAJ_PPOMNIFACOL_OFFSET))(this);
	}
};
