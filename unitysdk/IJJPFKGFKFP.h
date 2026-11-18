#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCAHMONLDAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJJPFKGFKFP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IJJPFKGFKFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD370)
#define IJJPFKGFKFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJJPFKGFKFP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJJPFKGFKFP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD360)
#define IJJPFKGFKFP_MBHNANKBLDO_1_OFFSET UNITYSDK_OFFSET(0x1A5DF7E0)
#define IJJPFKGFKFP_MBHNANKBLDO_OFFSET UNITYSDK_OFFSET(0x1A5DF770)
#define IJJPFKGFKFP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD350)
#define IJJPFKGFKFP___INIT_OFFSET UNITYSDK_OFFSET(0x7FD330)

inline static constexpr unsigned int IJJPFKGFKFP_TypeDefinitionIndex = 15248;

struct alignas(8) IJJPFKGFKFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJJPFKGFKFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IJJPFKGFKFP MBHNANKBLDO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJJPFKGFKFP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_MBHNANKBLDO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJJPFKGFKFP MBHNANKBLDO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJJPFKGFKFP EIFONLCJOPG)
	{
		return ((::IJJPFKGFKFP(*)(::FlatBuffers::ByteBuffer*, ::IJJPFKGFKFP))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_MBHNANKBLDO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCAHMONLDAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCAHMONLDAE&))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 CLCMGLOJKOB, ::DCAHMONLDAE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::DCAHMONLDAE&, ::System::Int32&))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, CLCMGLOJKOB, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IJJPFKGFKFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJJPFKGFKFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJJPFKGFKFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
