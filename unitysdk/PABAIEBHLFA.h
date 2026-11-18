#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GMHCFCHNEPD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PABAIEBHLFA_ADNAEJAOFEG_1_OFFSET UNITYSDK_OFFSET(0x1AB3C470)
#define PABAIEBHLFA_ADNAEJAOFEG_OFFSET UNITYSDK_OFFSET(0x1AB3C400)
#define PABAIEBHLFA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PABAIEBHLFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803AF0)
#define PABAIEBHLFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PABAIEBHLFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PABAIEBHLFA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x803B40)
#define PABAIEBHLFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803B30)
#define PABAIEBHLFA___INIT_OFFSET UNITYSDK_OFFSET(0x803AD0)

inline static constexpr unsigned int PABAIEBHLFA_TypeDefinitionIndex = 14226;

struct alignas(8) PABAIEBHLFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAIEBHLFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PABAIEBHLFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PABAIEBHLFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PABAIEBHLFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PABAIEBHLFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PABAIEBHLFA ADNAEJAOFEG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PABAIEBHLFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PABAIEBHLFA_ADNAEJAOFEG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAIEBHLFA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PABAIEBHLFA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GMHCFCHNEPD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMHCFCHNEPD&, ::System::Int32&))((::PBYTE)hIl2Cpp + PABAIEBHLFA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PABAIEBHLFA ADNAEJAOFEG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PABAIEBHLFA EIFONLCJOPG)
	{
		return ((::PABAIEBHLFA(*)(::FlatBuffers::ByteBuffer*, ::PABAIEBHLFA))((::PBYTE)hIl2Cpp + PABAIEBHLFA_ADNAEJAOFEG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GMHCFCHNEPD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMHCFCHNEPD&))((::PBYTE)hIl2Cpp + PABAIEBHLFA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
