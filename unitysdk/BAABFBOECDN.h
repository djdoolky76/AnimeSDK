#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IOEHLAIDIAH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAABFBOECDN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BAABFBOECDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F4BB0)
#define BAABFBOECDN_EMNIGDBCNKI_1_OFFSET UNITYSDK_OFFSET(0x1A1681D0)
#define BAABFBOECDN_EMNIGDBCNKI_OFFSET UNITYSDK_OFFSET(0x1A168160)
#define BAABFBOECDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAABFBOECDN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BAABFBOECDN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F4C00)
#define BAABFBOECDN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F4BF0)
#define BAABFBOECDN___INIT_OFFSET UNITYSDK_OFFSET(0x7F4B90)

inline static constexpr unsigned int BAABFBOECDN_TypeDefinitionIndex = 13372;

struct alignas(8) BAABFBOECDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAABFBOECDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAABFBOECDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BAABFBOECDN EMNIGDBCNKI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAABFBOECDN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAABFBOECDN_EMNIGDBCNKI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BAABFBOECDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAABFBOECDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAABFBOECDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BAABFBOECDN EMNIGDBCNKI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BAABFBOECDN EIFONLCJOPG)
	{
		return ((::BAABFBOECDN(*)(::FlatBuffers::ByteBuffer*, ::BAABFBOECDN))((::PBYTE)hIl2Cpp + BAABFBOECDN_EMNIGDBCNKI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAABFBOECDN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAABFBOECDN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IOEHLAIDIAH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOEHLAIDIAH&, ::System::Int32&))((::PBYTE)hIl2Cpp + BAABFBOECDN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IOEHLAIDIAH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOEHLAIDIAH&))((::PBYTE)hIl2Cpp + BAABFBOECDN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
