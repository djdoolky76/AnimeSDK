#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HENOIOILMGG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKAIINMJOMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GKAIINMJOMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B4ED0)
#define GKAIINMJOMJ_FECFFLNKHFH_1_OFFSET UNITYSDK_OFFSET(0x17BF0CC0)
#define GKAIINMJOMJ_FECFFLNKHFH_OFFSET UNITYSDK_OFFSET(0x17BF09C0)
#define GKAIINMJOMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKAIINMJOMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKAIINMJOMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B4EB0)
#define GKAIINMJOMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B4EC0)
#define GKAIINMJOMJ___INIT_OFFSET UNITYSDK_OFFSET(0x7B4E90)

inline static constexpr unsigned int GKAIINMJOMJ_TypeDefinitionIndex = 15922;

struct alignas(8) GKAIINMJOMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKAIINMJOMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GKAIINMJOMJ FECFFLNKHFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKAIINMJOMJ EIFONLCJOPG)
	{
		return ((::GKAIINMJOMJ(*)(::FlatBuffers::ByteBuffer*, ::GKAIINMJOMJ))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_FECFFLNKHFH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HENOIOILMGG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HENOIOILMGG&, ::System::Int32&))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GKAIINMJOMJ FECFFLNKHFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKAIINMJOMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_FECFFLNKHFH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HENOIOILMGG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HENOIOILMGG&))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GKAIINMJOMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKAIINMJOMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKAIINMJOMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
