#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGALHEGIJCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALEMPPLEEKK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ALEMPPLEEKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1580)
#define ALEMPPLEEKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALEMPPLEEKK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ALEMPPLEEKK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1570)
#define ALEMPPLEEKK_NPBPDJKHJOL_1_OFFSET UNITYSDK_OFFSET(0x19F10750)
#define ALEMPPLEEKK_NPBPDJKHJOL_OFFSET UNITYSDK_OFFSET(0x19F106B0)
#define ALEMPPLEEKK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F15C0)
#define ALEMPPLEEKK___INIT_OFFSET UNITYSDK_OFFSET(0x7F1550)

inline static constexpr unsigned int ALEMPPLEEKK_TypeDefinitionIndex = 15677;

struct alignas(8) ALEMPPLEEKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALEMPPLEEKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ALEMPPLEEKK NPBPDJKHJOL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ALEMPPLEEKK EIFONLCJOPG)
	{
		return ((::ALEMPPLEEKK(*)(::FlatBuffers::ByteBuffer*, ::ALEMPPLEEKK))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_NPBPDJKHJOL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ALEMPPLEEKK NPBPDJKHJOL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALEMPPLEEKK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_NPBPDJKHJOL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LGALHEGIJCL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGALHEGIJCL&, ::System::Int32&))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::ALEMPPLEEKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALEMPPLEEKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGALHEGIJCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGALHEGIJCL&))((::PBYTE)hIl2Cpp + ALEMPPLEEKK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
