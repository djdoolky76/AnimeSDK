#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOCPFOAAKNG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAIOBCHGHFB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BAIOBCHGHFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806DB0)
#define BAIOBCHGHFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAIOBCHGHFB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BAIOBCHGHFB_HNFAMKDEKGB_1_OFFSET UNITYSDK_OFFSET(0x1ADAD8D0)
#define BAIOBCHGHFB_HNFAMKDEKGB_OFFSET UNITYSDK_OFFSET(0x1ADAD860)
#define BAIOBCHGHFB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806D90)
#define BAIOBCHGHFB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806DA0)
#define BAIOBCHGHFB___INIT_OFFSET UNITYSDK_OFFSET(0x806D70)

inline static constexpr unsigned int BAIOBCHGHFB_TypeDefinitionIndex = 11266;

struct alignas(8) BAIOBCHGHFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAIOBCHGHFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BAIOBCHGHFB HNFAMKDEKGB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAIOBCHGHFB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_HNFAMKDEKGB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOCPFOAAKNG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOCPFOAAKNG&, ::System::Int32&))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOCPFOAAKNG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOCPFOAAKNG&))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BAIOBCHGHFB HNFAMKDEKGB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BAIOBCHGHFB EIFONLCJOPG)
	{
		return ((::BAIOBCHGHFB(*)(::FlatBuffers::ByteBuffer*, ::BAIOBCHGHFB))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_HNFAMKDEKGB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BAIOBCHGHFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAIOBCHGHFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAIOBCHGHFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
