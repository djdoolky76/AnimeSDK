#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DANOECEANMM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECKIDBBOAOG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ECKIDBBOAOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0E20)
#define ECKIDBBOAOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECKIDBBOAOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ECKIDBBOAOG_KINABJBABFM_1_OFFSET UNITYSDK_OFFSET(0x187A3EA0)
#define ECKIDBBOAOG_KINABJBABFM_OFFSET UNITYSDK_OFFSET(0x187A3C00)
#define ECKIDBBOAOG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0E10)
#define ECKIDBBOAOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0E00)
#define ECKIDBBOAOG___INIT_OFFSET UNITYSDK_OFFSET(0x7D0DE0)

inline static constexpr unsigned int ECKIDBBOAOG_TypeDefinitionIndex = 11054;

struct alignas(8) ECKIDBBOAOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECKIDBBOAOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ECKIDBBOAOG KINABJBABFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ECKIDBBOAOG EIFONLCJOPG)
	{
		return ((::ECKIDBBOAOG(*)(::FlatBuffers::ByteBuffer*, ::ECKIDBBOAOG))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_KINABJBABFM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DANOECEANMM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DANOECEANMM&, ::System::Int32&))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ECKIDBBOAOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECKIDBBOAOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DANOECEANMM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DANOECEANMM&))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ECKIDBBOAOG KINABJBABFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECKIDBBOAOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECKIDBBOAOG_KINABJBABFM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
