#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MMPFAEHBBIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DELCPLBGDBC_AOHEBIPMNNI_1_OFFSET UNITYSDK_OFFSET(0x19C02030)
#define DELCPLBGDBC_AOHEBIPMNNI_OFFSET UNITYSDK_OFFSET(0x19C01FC0)
#define DELCPLBGDBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DELCPLBGDBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDB20)
#define DELCPLBGDBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DELCPLBGDBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DELCPLBGDBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EDB70)
#define DELCPLBGDBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDB60)
#define DELCPLBGDBC___INIT_OFFSET UNITYSDK_OFFSET(0x7EDB00)

inline static constexpr unsigned int DELCPLBGDBC_TypeDefinitionIndex = 12104;

struct alignas(8) DELCPLBGDBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELCPLBGDBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DELCPLBGDBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DELCPLBGDBC AOHEBIPMNNI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DELCPLBGDBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DELCPLBGDBC_AOHEBIPMNNI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DELCPLBGDBC AOHEBIPMNNI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DELCPLBGDBC EIFONLCJOPG)
	{
		return ((::DELCPLBGDBC(*)(::FlatBuffers::ByteBuffer*, ::DELCPLBGDBC))((::PBYTE)hIl2Cpp + DELCPLBGDBC_AOHEBIPMNNI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MMPFAEHBBIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MMPFAEHBBIN&))((::PBYTE)hIl2Cpp + DELCPLBGDBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DELCPLBGDBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DELCPLBGDBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DELCPLBGDBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELCPLBGDBC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MMPFAEHBBIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MMPFAEHBBIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DELCPLBGDBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DELCPLBGDBC_GHKKNCCLPAN_OFFSET))(this);
	}
};
