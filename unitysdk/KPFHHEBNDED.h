#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PGDOGKAPDDF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPFHHEBNDED_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KPFHHEBNDED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EEF00)
#define KPFHHEBNDED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPFHHEBNDED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KPFHHEBNDED_KIAKEIHDIFN_1_OFFSET UNITYSDK_OFFSET(0x19D9D610)
#define KPFHHEBNDED_KIAKEIHDIFN_OFFSET UNITYSDK_OFFSET(0x19D9D5A0)
#define KPFHHEBNDED_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EEF40)
#define KPFHHEBNDED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EEF50)
#define KPFHHEBNDED___INIT_OFFSET UNITYSDK_OFFSET(0x7EEEE0)

inline static constexpr unsigned int KPFHHEBNDED_TypeDefinitionIndex = 12844;

struct alignas(8) KPFHHEBNDED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFHHEBNDED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPFHHEBNDED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KPFHHEBNDED KIAKEIHDIFN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPFHHEBNDED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPFHHEBNDED_KIAKEIHDIFN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFHHEBNDED_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KPFHHEBNDED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPFHHEBNDED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPFHHEBNDED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PGDOGKAPDDF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGDOGKAPDDF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KPFHHEBNDED_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFHHEBNDED_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PGDOGKAPDDF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PGDOGKAPDDF&))((::PBYTE)hIl2Cpp + KPFHHEBNDED_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KPFHHEBNDED KIAKEIHDIFN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KPFHHEBNDED EIFONLCJOPG)
	{
		return ((::KPFHHEBNDED(*)(::FlatBuffers::ByteBuffer*, ::KPFHHEBNDED))((::PBYTE)hIl2Cpp + KPFHHEBNDED_KIAKEIHDIFN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
