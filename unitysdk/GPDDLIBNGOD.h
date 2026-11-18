#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FIIJBJLJAKH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPDDLIBNGOD_BCNLLMABJMP_1_OFFSET UNITYSDK_OFFSET(0x166533A0)
#define GPDDLIBNGOD_BCNLLMABJMP_OFFSET UNITYSDK_OFFSET(0x16653340)
#define GPDDLIBNGOD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPDDLIBNGOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B4C0)
#define GPDDLIBNGOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPDDLIBNGOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPDDLIBNGOD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B510)
#define GPDDLIBNGOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B500)
#define GPDDLIBNGOD___INIT_OFFSET UNITYSDK_OFFSET(0x78B4A0)

inline static constexpr unsigned int GPDDLIBNGOD_TypeDefinitionIndex = 12647;

struct alignas(8) GPDDLIBNGOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPDDLIBNGOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FIIJBJLJAKH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIIJBJLJAKH&))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GPDDLIBNGOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPDDLIBNGOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPDDLIBNGOD BCNLLMABJMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPDDLIBNGOD EIFONLCJOPG)
	{
		return ((::GPDDLIBNGOD(*)(::FlatBuffers::ByteBuffer*, ::GPDDLIBNGOD))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_BCNLLMABJMP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GPDDLIBNGOD BCNLLMABJMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPDDLIBNGOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_BCNLLMABJMP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FIIJBJLJAKH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FIIJBJLJAKH&, ::System::Int32&))((::PBYTE)hIl2Cpp + GPDDLIBNGOD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
