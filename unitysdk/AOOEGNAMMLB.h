#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LJEAHBBKIJO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOOEGNAMMLB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AOOEGNAMMLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7611B0)
#define AOOEGNAMMLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOOEGNAMMLB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AOOEGNAMMLB_LCADIBCBOGE_1_OFFSET UNITYSDK_OFFSET(0x15726670)
#define AOOEGNAMMLB_LCADIBCBOGE_OFFSET UNITYSDK_OFFSET(0x15726600)
#define AOOEGNAMMLB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7611A0)
#define AOOEGNAMMLB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7611F0)
#define AOOEGNAMMLB___INIT_OFFSET UNITYSDK_OFFSET(0x761180)

inline static constexpr unsigned int AOOEGNAMMLB_TypeDefinitionIndex = 11600;

struct alignas(8) AOOEGNAMMLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOOEGNAMMLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AOOEGNAMMLB LCADIBCBOGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOOEGNAMMLB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_LCADIBCBOGE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LJEAHBBKIJO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJEAHBBKIJO&, ::System::Int32&))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::AOOEGNAMMLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOOEGNAMMLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LJEAHBBKIJO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LJEAHBBKIJO&))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AOOEGNAMMLB LCADIBCBOGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AOOEGNAMMLB EIFONLCJOPG)
	{
		return ((::AOOEGNAMMLB(*)(::FlatBuffers::ByteBuffer*, ::AOOEGNAMMLB))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_LCADIBCBOGE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOEGNAMMLB_PPOMNIFACOL_OFFSET))(this);
	}
};
