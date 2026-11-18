#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INKLDEKDGDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEJFCIOLADO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IEJFCIOLADO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758070)
#define IEJFCIOLADO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IEJFCIOLADO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IEJFCIOLADO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x758060)
#define IEJFCIOLADO_PAPCGJJLOMH_1_OFFSET UNITYSDK_OFFSET(0x152E2160)
#define IEJFCIOLADO_PAPCGJJLOMH_OFFSET UNITYSDK_OFFSET(0x152E2100)
#define IEJFCIOLADO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758050)
#define IEJFCIOLADO___INIT_OFFSET UNITYSDK_OFFSET(0x758030)

inline static constexpr unsigned int IEJFCIOLADO_TypeDefinitionIndex = 10730;

struct alignas(8) IEJFCIOLADO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJFCIOLADO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEJFCIOLADO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJFCIOLADO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INKLDEKDGDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INKLDEKDGDN&))((::PBYTE)hIl2Cpp + IEJFCIOLADO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::INKLDEKDGDN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INKLDEKDGDN&, ::System::Int32&))((::PBYTE)hIl2Cpp + IEJFCIOLADO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IEJFCIOLADO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEJFCIOLADO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEJFCIOLADO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IEJFCIOLADO PAPCGJJLOMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IEJFCIOLADO EIFONLCJOPG)
	{
		return ((::IEJFCIOLADO(*)(::FlatBuffers::ByteBuffer*, ::IEJFCIOLADO))((::PBYTE)hIl2Cpp + IEJFCIOLADO_PAPCGJJLOMH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJFCIOLADO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IEJFCIOLADO PAPCGJJLOMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEJFCIOLADO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEJFCIOLADO_PAPCGJJLOMH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
