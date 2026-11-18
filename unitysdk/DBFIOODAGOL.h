#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OMCNFDFGFCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBFIOODAGOL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DBFIOODAGOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2920)
#define DBFIOODAGOL_DOKBJPCHIFF_1_OFFSET UNITYSDK_OFFSET(0x19507DB0)
#define DBFIOODAGOL_DOKBJPCHIFF_OFFSET UNITYSDK_OFFSET(0x19507CB0)
#define DBFIOODAGOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBFIOODAGOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DBFIOODAGOL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2900)
#define DBFIOODAGOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2910)
#define DBFIOODAGOL___INIT_OFFSET UNITYSDK_OFFSET(0x7E28E0)

inline static constexpr unsigned int DBFIOODAGOL_TypeDefinitionIndex = 12684;

struct alignas(8) DBFIOODAGOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFIOODAGOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBFIOODAGOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OMCNFDFGFCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMCNFDFGFCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + DBFIOODAGOL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DBFIOODAGOL DOKBJPCHIFF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DBFIOODAGOL EIFONLCJOPG)
	{
		return ((::DBFIOODAGOL(*)(::FlatBuffers::ByteBuffer*, ::DBFIOODAGOL))((::PBYTE)hIl2Cpp + DBFIOODAGOL_DOKBJPCHIFF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFIOODAGOL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DBFIOODAGOL DOKBJPCHIFF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBFIOODAGOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBFIOODAGOL_DOKBJPCHIFF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OMCNFDFGFCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMCNFDFGFCB&))((::PBYTE)hIl2Cpp + DBFIOODAGOL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFIOODAGOL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DBFIOODAGOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBFIOODAGOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBFIOODAGOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
