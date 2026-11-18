#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEIDNDJNFPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONDGBCEOFEF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ONDGBCEOFEF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C970)
#define ONDGBCEOFEF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONDGBCEOFEF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONDGBCEOFEF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80C950)
#define ONDGBCEOFEF_NAGNMMCMKMK_1_OFFSET UNITYSDK_OFFSET(0x1B343960)
#define ONDGBCEOFEF_NAGNMMCMKMK_OFFSET UNITYSDK_OFFSET(0x1B3438C0)
#define ONDGBCEOFEF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C960)
#define ONDGBCEOFEF___INIT_OFFSET UNITYSDK_OFFSET(0x80C930)

inline static constexpr unsigned int ONDGBCEOFEF_TypeDefinitionIndex = 13781;

struct alignas(8) ONDGBCEOFEF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDGBCEOFEF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AEIDNDJNFPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEIDNDJNFPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ONDGBCEOFEF NAGNMMCMKMK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONDGBCEOFEF EIFONLCJOPG)
	{
		return ((::ONDGBCEOFEF(*)(::FlatBuffers::ByteBuffer*, ::ONDGBCEOFEF))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_NAGNMMCMKMK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AEIDNDJNFPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEIDNDJNFPC&))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ONDGBCEOFEF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONDGBCEOFEF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONDGBCEOFEF NAGNMMCMKMK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONDGBCEOFEF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONDGBCEOFEF_NAGNMMCMKMK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
