#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HAFOOCOAEAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFLMLOBEFDG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KFLMLOBEFDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80ED80)
#define KFLMLOBEFDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFLMLOBEFDG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KFLMLOBEFDG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80EDD0)
#define KFLMLOBEFDG_NEJNKOKCJKA_1_OFFSET UNITYSDK_OFFSET(0x1B502A30)
#define KFLMLOBEFDG_NEJNKOKCJKA_OFFSET UNITYSDK_OFFSET(0x1B5029D0)
#define KFLMLOBEFDG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EDC0)
#define KFLMLOBEFDG___INIT_OFFSET UNITYSDK_OFFSET(0x80ED60)

inline static constexpr unsigned int KFLMLOBEFDG_TypeDefinitionIndex = 15601;

struct alignas(8) KFLMLOBEFDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLMLOBEFDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KFLMLOBEFDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFLMLOBEFDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HAFOOCOAEAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAFOOCOAEAP&))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KFLMLOBEFDG NEJNKOKCJKA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KFLMLOBEFDG EIFONLCJOPG)
	{
		return ((::KFLMLOBEFDG(*)(::FlatBuffers::ByteBuffer*, ::KFLMLOBEFDG))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_NEJNKOKCJKA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KFLMLOBEFDG NEJNKOKCJKA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFLMLOBEFDG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_NEJNKOKCJKA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HAFOOCOAEAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAFOOCOAEAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + KFLMLOBEFDG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
