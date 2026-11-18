#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PBANHAJIKNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJFBEJAAECO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CJFBEJAAECO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7621D0)
#define CJFBEJAAECO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJFBEJAAECO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CJFBEJAAECO_JCCEACGMHJE_1_OFFSET UNITYSDK_OFFSET(0x15740DF0)
#define CJFBEJAAECO_JCCEACGMHJE_OFFSET UNITYSDK_OFFSET(0x15740D50)
#define CJFBEJAAECO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7621C0)
#define CJFBEJAAECO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762210)
#define CJFBEJAAECO___INIT_OFFSET UNITYSDK_OFFSET(0x7621A0)

inline static constexpr unsigned int CJFBEJAAECO_TypeDefinitionIndex = 17100;

struct alignas(8) CJFBEJAAECO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBEJAAECO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJFBEJAAECO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBEJAAECO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PBANHAJIKNM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBANHAJIKNM&, ::System::Int32&))((::PBYTE)hIl2Cpp + CJFBEJAAECO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CJFBEJAAECO JCCEACGMHJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CJFBEJAAECO EIFONLCJOPG)
	{
		return ((::CJFBEJAAECO(*)(::FlatBuffers::ByteBuffer*, ::CJFBEJAAECO))((::PBYTE)hIl2Cpp + CJFBEJAAECO_JCCEACGMHJE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CJFBEJAAECO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJFBEJAAECO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJFBEJAAECO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CJFBEJAAECO JCCEACGMHJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJFBEJAAECO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJFBEJAAECO_JCCEACGMHJE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PBANHAJIKNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBANHAJIKNM&))((::PBYTE)hIl2Cpp + CJFBEJAAECO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFBEJAAECO_PPOMNIFACOL_OFFSET))(this);
	}
};
