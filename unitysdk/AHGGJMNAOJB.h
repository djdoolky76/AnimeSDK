#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POGFDMOFPBI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHGGJMNAOJB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AHGGJMNAOJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x760E60)
#define AHGGJMNAOJB_CEOKEJOLLFB_1_OFFSET UNITYSDK_OFFSET(0x15721FC0)
#define AHGGJMNAOJB_CEOKEJOLLFB_OFFSET UNITYSDK_OFFSET(0x15721F50)
#define AHGGJMNAOJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHGGJMNAOJB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AHGGJMNAOJB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x760E50)
#define AHGGJMNAOJB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x760E40)
#define AHGGJMNAOJB___INIT_OFFSET UNITYSDK_OFFSET(0x760E20)

inline static constexpr unsigned int AHGGJMNAOJB_TypeDefinitionIndex = 10883;

struct alignas(8) AHGGJMNAOJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGGJMNAOJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AHGGJMNAOJB CEOKEJOLLFB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHGGJMNAOJB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_CEOKEJOLLFB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::POGFDMOFPBI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POGFDMOFPBI&, ::System::Int32&))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AHGGJMNAOJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHGGJMNAOJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AHGGJMNAOJB CEOKEJOLLFB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AHGGJMNAOJB EIFONLCJOPG)
	{
		return ((::AHGGJMNAOJB(*)(::FlatBuffers::ByteBuffer*, ::AHGGJMNAOJB))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_CEOKEJOLLFB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POGFDMOFPBI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POGFDMOFPBI&))((::PBYTE)hIl2Cpp + AHGGJMNAOJB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
