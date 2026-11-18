#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNLPLIFCPPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIEECAGFGOB_ADAPHPJHBNH_1_OFFSET UNITYSDK_OFFSET(0x19F1B180)
#define BIEECAGFGOB_ADAPHPJHBNH_OFFSET UNITYSDK_OFFSET(0x19F1B080)
#define BIEECAGFGOB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BIEECAGFGOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1870)
#define BIEECAGFGOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIEECAGFGOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BIEECAGFGOB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1850)
#define BIEECAGFGOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1860)
#define BIEECAGFGOB___INIT_OFFSET UNITYSDK_OFFSET(0x7F1830)

inline static constexpr unsigned int BIEECAGFGOB_TypeDefinitionIndex = 16437;

struct alignas(8) BIEECAGFGOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEECAGFGOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEECAGFGOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNLPLIFCPPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNLPLIFCPPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BIEECAGFGOB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BIEECAGFGOB ADAPHPJHBNH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BIEECAGFGOB EIFONLCJOPG)
	{
		return ((::BIEECAGFGOB(*)(::FlatBuffers::ByteBuffer*, ::BIEECAGFGOB))((::PBYTE)hIl2Cpp + BIEECAGFGOB_ADAPHPJHBNH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEECAGFGOB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNLPLIFCPPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNLPLIFCPPM&))((::PBYTE)hIl2Cpp + BIEECAGFGOB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BIEECAGFGOB ADAPHPJHBNH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIEECAGFGOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEECAGFGOB_ADAPHPJHBNH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BIEECAGFGOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIEECAGFGOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEECAGFGOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEECAGFGOB_GHKKNCCLPAN_OFFSET))(this);
	}
};
