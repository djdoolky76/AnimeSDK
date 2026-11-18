#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCNNHIKFHMP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGBAMOPDPKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FGBAMOPDPKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EAFD0)
#define FGBAMOPDPKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGBAMOPDPKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGBAMOPDPKO_KOCENCJIMFE_1_OFFSET UNITYSDK_OFFSET(0x19AF2B30)
#define FGBAMOPDPKO_KOCENCJIMFE_OFFSET UNITYSDK_OFFSET(0x19AF2830)
#define FGBAMOPDPKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EAFB0)
#define FGBAMOPDPKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EAFC0)
#define FGBAMOPDPKO___INIT_OFFSET UNITYSDK_OFFSET(0x7EAF90)

inline static constexpr unsigned int FGBAMOPDPKO_TypeDefinitionIndex = 15595;

struct alignas(8) FGBAMOPDPKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGBAMOPDPKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FGBAMOPDPKO KOCENCJIMFE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGBAMOPDPKO EIFONLCJOPG)
	{
		return ((::FGBAMOPDPKO(*)(::FlatBuffers::ByteBuffer*, ::FGBAMOPDPKO))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_KOCENCJIMFE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCNNHIKFHMP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCNNHIKFHMP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCNNHIKFHMP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCNNHIKFHMP&))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FGBAMOPDPKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGBAMOPDPKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FGBAMOPDPKO KOCENCJIMFE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGBAMOPDPKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGBAMOPDPKO_KOCENCJIMFE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
