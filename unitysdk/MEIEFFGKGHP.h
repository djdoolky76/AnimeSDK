#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBBEBCJNLMO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEIEFFGKGHP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEIEFFGKGHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B800)
#define MEIEFFGKGHP_FFNBHNLLOEF_1_OFFSET UNITYSDK_OFFSET(0x1B311CF0)
#define MEIEFFGKGHP_FFNBHNLLOEF_OFFSET UNITYSDK_OFFSET(0x1B311A30)
#define MEIEFFGKGHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEIEFFGKGHP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEIEFFGKGHP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B850)
#define MEIEFFGKGHP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B840)
#define MEIEFFGKGHP___INIT_OFFSET UNITYSDK_OFFSET(0x80B7E0)

inline static constexpr unsigned int MEIEFFGKGHP_TypeDefinitionIndex = 17321;

struct alignas(8) MEIEFFGKGHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEIEFFGKGHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MEIEFFGKGHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEIEFFGKGHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MEIEFFGKGHP FFNBHNLLOEF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEIEFFGKGHP EIFONLCJOPG)
	{
		return ((::MEIEFFGKGHP(*)(::FlatBuffers::ByteBuffer*, ::MEIEFFGKGHP))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_FFNBHNLLOEF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBBEBCJNLMO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBBEBCJNLMO&, ::System::Int32&))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBBEBCJNLMO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBBEBCJNLMO&))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MEIEFFGKGHP FFNBHNLLOEF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEIEFFGKGHP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEIEFFGKGHP_FFNBHNLLOEF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
