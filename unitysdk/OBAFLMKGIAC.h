#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AODBEGKPGOI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBAFLMKGIAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBAFLMKGIAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6630)
#define OBAFLMKGIAC_BKFLCGNAOBE_1_OFFSET UNITYSDK_OFFSET(0x17360FE0)
#define OBAFLMKGIAC_BKFLCGNAOBE_OFFSET UNITYSDK_OFFSET(0x17360DC0)
#define OBAFLMKGIAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBAFLMKGIAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBAFLMKGIAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A6680)
#define OBAFLMKGIAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6670)
#define OBAFLMKGIAC___INIT_OFFSET UNITYSDK_OFFSET(0x7A6610)

inline static constexpr unsigned int OBAFLMKGIAC_TypeDefinitionIndex = 16768;

struct alignas(8) OBAFLMKGIAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBAFLMKGIAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AODBEGKPGOI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AODBEGKPGOI&))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OBAFLMKGIAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBAFLMKGIAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OBAFLMKGIAC BKFLCGNAOBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBAFLMKGIAC EIFONLCJOPG)
	{
		return ((::OBAFLMKGIAC(*)(::FlatBuffers::ByteBuffer*, ::OBAFLMKGIAC))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_BKFLCGNAOBE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AODBEGKPGOI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AODBEGKPGOI&, ::System::Int32&))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OBAFLMKGIAC BKFLCGNAOBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBAFLMKGIAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBAFLMKGIAC_BKFLCGNAOBE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
