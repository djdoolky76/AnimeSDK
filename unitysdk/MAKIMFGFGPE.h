#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFDPJKFGDDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAKIMFGFGPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MAKIMFGFGPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6230)
#define MAKIMFGFGPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAKIMFGFGPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MAKIMFGFGPE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6220)
#define MAKIMFGFGPE_PIHNJHGNAJD_1_OFFSET UNITYSDK_OFFSET(0x19599460)
#define MAKIMFGFGPE_PIHNJHGNAJD_OFFSET UNITYSDK_OFFSET(0x195993F0)
#define MAKIMFGFGPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6210)
#define MAKIMFGFGPE___INIT_OFFSET UNITYSDK_OFFSET(0x7E61F0)

inline static constexpr unsigned int MAKIMFGFGPE_TypeDefinitionIndex = 13948;

struct alignas(8) MAKIMFGFGPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAKIMFGFGPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFDPJKFGDDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFDPJKFGDDK&))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MAKIMFGFGPE PIHNJHGNAJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAKIMFGFGPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_PIHNJHGNAJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MAKIMFGFGPE PIHNJHGNAJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MAKIMFGFGPE EIFONLCJOPG)
	{
		return ((::MAKIMFGFGPE(*)(::FlatBuffers::ByteBuffer*, ::MAKIMFGFGPE))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_PIHNJHGNAJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GFDPJKFGDDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFDPJKFGDDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MAKIMFGFGPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAKIMFGFGPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAKIMFGFGPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
