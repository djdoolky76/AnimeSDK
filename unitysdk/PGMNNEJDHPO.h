#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CMNLGDOJIHI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGMNNEJDHPO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PGMNNEJDHPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938130)
#define PGMNNEJDHPO_ECIPFDECHFP_1_OFFSET UNITYSDK_OFFSET(0x1EE01440)
#define PGMNNEJDHPO_ECIPFDECHFP_OFFSET UNITYSDK_OFFSET(0x1EE013D0)
#define PGMNNEJDHPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGMNNEJDHPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PGMNNEJDHPO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x938170)
#define PGMNNEJDHPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938180)
#define PGMNNEJDHPO___INIT_OFFSET UNITYSDK_OFFSET(0x938110)

inline static constexpr unsigned int PGMNNEJDHPO_TypeDefinitionIndex = 11382;

struct alignas(8) PGMNNEJDHPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGMNNEJDHPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PGMNNEJDHPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGMNNEJDHPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CMNLGDOJIHI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMNLGDOJIHI&, ::System::Int32&))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CMNLGDOJIHI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CMNLGDOJIHI&))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PGMNNEJDHPO ECIPFDECHFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGMNNEJDHPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_ECIPFDECHFP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PGMNNEJDHPO ECIPFDECHFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PGMNNEJDHPO EIFONLCJOPG)
	{
		return ((::PGMNNEJDHPO(*)(::FlatBuffers::ByteBuffer*, ::PGMNNEJDHPO))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_ECIPFDECHFP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMNNEJDHPO_PPOMNIFACOL_OFFSET))(this);
	}
};
