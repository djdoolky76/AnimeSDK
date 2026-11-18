#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AHKDJNJBOPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDKIJLJIMJL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PDKIJLJIMJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x923BB0)
#define PDKIJLJIMJL_EBGLIMKNICK_1_OFFSET UNITYSDK_OFFSET(0x1EC84AB0)
#define PDKIJLJIMJL_EBGLIMKNICK_OFFSET UNITYSDK_OFFSET(0x1EC849B0)
#define PDKIJLJIMJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDKIJLJIMJL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PDKIJLJIMJL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x923C00)
#define PDKIJLJIMJL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x923BF0)
#define PDKIJLJIMJL___INIT_OFFSET UNITYSDK_OFFSET(0x923B90)

inline static constexpr unsigned int PDKIJLJIMJL_TypeDefinitionIndex = 13869;

struct alignas(8) PDKIJLJIMJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDKIJLJIMJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PDKIJLJIMJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDKIJLJIMJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PDKIJLJIMJL EBGLIMKNICK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PDKIJLJIMJL EIFONLCJOPG)
	{
		return ((::PDKIJLJIMJL(*)(::FlatBuffers::ByteBuffer*, ::PDKIJLJIMJL))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_EBGLIMKNICK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AHKDJNJBOPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHKDJNJBOPM&))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PDKIJLJIMJL EBGLIMKNICK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDKIJLJIMJL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_EBGLIMKNICK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AHKDJNJBOPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHKDJNJBOPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PDKIJLJIMJL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
