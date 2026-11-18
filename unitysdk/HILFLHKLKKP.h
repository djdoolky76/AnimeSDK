#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHDNCEIKALM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HILFLHKLKKP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HILFLHKLKKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812070)
#define HILFLHKLKKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HILFLHKLKKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HILFLHKLKKP_GOMCDEAKFEI_1_OFFSET UNITYSDK_OFFSET(0x1B7C5560)
#define HILFLHKLKKP_GOMCDEAKFEI_OFFSET UNITYSDK_OFFSET(0x1B7C54C0)
#define HILFLHKLKKP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x812060)
#define HILFLHKLKKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812050)
#define HILFLHKLKKP___INIT_OFFSET UNITYSDK_OFFSET(0x812030)

inline static constexpr unsigned int HILFLHKLKKP_TypeDefinitionIndex = 13411;

struct alignas(8) HILFLHKLKKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFLHKLKKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HILFLHKLKKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HILFLHKLKKP GOMCDEAKFEI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HILFLHKLKKP EIFONLCJOPG)
	{
		return ((::HILFLHKLKKP(*)(::FlatBuffers::ByteBuffer*, ::HILFLHKLKKP))((::PBYTE)hIl2Cpp + HILFLHKLKKP_GOMCDEAKFEI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HILFLHKLKKP GOMCDEAKFEI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HILFLHKLKKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HILFLHKLKKP_GOMCDEAKFEI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFLHKLKKP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHDNCEIKALM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHDNCEIKALM&))((::PBYTE)hIl2Cpp + HILFLHKLKKP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHDNCEIKALM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHDNCEIKALM&, ::System::Int32&))((::PBYTE)hIl2Cpp + HILFLHKLKKP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFLHKLKKP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HILFLHKLKKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HILFLHKLKKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HILFLHKLKKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
