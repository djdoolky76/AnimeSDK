#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FPMHMAKIJLJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNFBJJBFDMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNFBJJBFDMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B2F0)
#define GNFBJJBFDMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNFBJJBFDMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNFBJJBFDMG_JKPLFBNDOBG_1_OFFSET UNITYSDK_OFFSET(0x1BAD0E10)
#define GNFBJJBFDMG_JKPLFBNDOBG_OFFSET UNITYSDK_OFFSET(0x1BAD0DA0)
#define GNFBJJBFDMG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B340)
#define GNFBJJBFDMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B330)
#define GNFBJJBFDMG___INIT_OFFSET UNITYSDK_OFFSET(0x81B2D0)

inline static constexpr unsigned int GNFBJJBFDMG_TypeDefinitionIndex = 13214;

struct alignas(8) GNFBJJBFDMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNFBJJBFDMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FPMHMAKIJLJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPMHMAKIJLJ&))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GNFBJJBFDMG JKPLFBNDOBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNFBJJBFDMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_JKPLFBNDOBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GNFBJJBFDMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNFBJJBFDMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FPMHMAKIJLJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPMHMAKIJLJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GNFBJJBFDMG JKPLFBNDOBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNFBJJBFDMG EIFONLCJOPG)
	{
		return ((::GNFBJJBFDMG(*)(::FlatBuffers::ByteBuffer*, ::GNFBJJBFDMG))((::PBYTE)hIl2Cpp + GNFBJJBFDMG_JKPLFBNDOBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
