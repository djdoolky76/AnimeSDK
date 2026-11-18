#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/COACMBFBENN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDFFJEHHBLF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NDFFJEHHBLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BE80)
#define NDFFJEHHBLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDFFJEHHBLF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NDFFJEHHBLF_GNDIBGCGEGJ_1_OFFSET UNITYSDK_OFFSET(0x1B326A50)
#define NDFFJEHHBLF_GNDIBGCGEGJ_OFFSET UNITYSDK_OFFSET(0x1B3269E0)
#define NDFFJEHHBLF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BEC0)
#define NDFFJEHHBLF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BED0)
#define NDFFJEHHBLF___INIT_OFFSET UNITYSDK_OFFSET(0x80BE60)

inline static constexpr unsigned int NDFFJEHHBLF_TypeDefinitionIndex = 10155;

struct alignas(8) NDFFJEHHBLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDFFJEHHBLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NDFFJEHHBLF GNDIBGCGEGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDFFJEHHBLF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_GNDIBGCGEGJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDFFJEHHBLF GNDIBGCGEGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NDFFJEHHBLF EIFONLCJOPG)
	{
		return ((::NDFFJEHHBLF(*)(::FlatBuffers::ByteBuffer*, ::NDFFJEHHBLF))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_GNDIBGCGEGJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::COACMBFBENN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COACMBFBENN&))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NDFFJEHHBLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDFFJEHHBLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::COACMBFBENN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::COACMBFBENN&, ::System::Int32&))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFFJEHHBLF_PPOMNIFACOL_OFFSET))(this);
	}
};
