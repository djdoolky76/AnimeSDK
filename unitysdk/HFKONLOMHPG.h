#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DMFEAJJFKEA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFKONLOMHPG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFKONLOMHPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x756ED0)
#define HFKONLOMHPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFKONLOMHPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFKONLOMHPG_JLNGCBIBJNB_1_OFFSET UNITYSDK_OFFSET(0x152D9BA0)
#define HFKONLOMHPG_JLNGCBIBJNB_OFFSET UNITYSDK_OFFSET(0x152D9900)
#define HFKONLOMHPG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x756EC0)
#define HFKONLOMHPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x756EB0)
#define HFKONLOMHPG___INIT_OFFSET UNITYSDK_OFFSET(0x756E90)

inline static constexpr unsigned int HFKONLOMHPG_TypeDefinitionIndex = 12951;

struct alignas(8) HFKONLOMHPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKONLOMHPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFKONLOMHPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKONLOMHPG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HFKONLOMHPG JLNGCBIBJNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFKONLOMHPG EIFONLCJOPG)
	{
		return ((::HFKONLOMHPG(*)(::FlatBuffers::ByteBuffer*, ::HFKONLOMHPG))((::PBYTE)hIl2Cpp + HFKONLOMHPG_JLNGCBIBJNB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DMFEAJJFKEA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMFEAJJFKEA&, ::System::Int32&))((::PBYTE)hIl2Cpp + HFKONLOMHPG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HFKONLOMHPG JLNGCBIBJNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFKONLOMHPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFKONLOMHPG_JLNGCBIBJNB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKONLOMHPG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HFKONLOMHPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFKONLOMHPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFKONLOMHPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DMFEAJJFKEA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DMFEAJJFKEA&))((::PBYTE)hIl2Cpp + HFKONLOMHPG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
