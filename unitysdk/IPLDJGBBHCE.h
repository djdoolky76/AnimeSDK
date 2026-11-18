#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GIDAOGFALGL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPLDJGBBHCE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IPLDJGBBHCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E6B0)
#define IPLDJGBBHCE_DIPKBFKKEHH_1_OFFSET UNITYSDK_OFFSET(0x1B4F36C0)
#define IPLDJGBBHCE_DIPKBFKKEHH_OFFSET UNITYSDK_OFFSET(0x1B4F34C0)
#define IPLDJGBBHCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPLDJGBBHCE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IPLDJGBBHCE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E6A0)
#define IPLDJGBBHCE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E690)
#define IPLDJGBBHCE___INIT_OFFSET UNITYSDK_OFFSET(0x80E670)

inline static constexpr unsigned int IPLDJGBBHCE_TypeDefinitionIndex = 11466;

struct alignas(8) IPLDJGBBHCE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLDJGBBHCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GIDAOGFALGL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIDAOGFALGL&))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IPLDJGBBHCE DIPKBFKKEHH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IPLDJGBBHCE EIFONLCJOPG)
	{
		return ((::IPLDJGBBHCE(*)(::FlatBuffers::ByteBuffer*, ::IPLDJGBBHCE))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_DIPKBFKKEHH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GIDAOGFALGL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIDAOGFALGL&, ::System::Int32&))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IPLDJGBBHCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPLDJGBBHCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IPLDJGBBHCE DIPKBFKKEHH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPLDJGBBHCE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPLDJGBBHCE_DIPKBFKKEHH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
