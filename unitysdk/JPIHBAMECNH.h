#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNKFJKENGFE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPIHBAMECNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JPIHBAMECNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77AFE0)
#define JPIHBAMECNH_EEKLGEOACEC_1_OFFSET UNITYSDK_OFFSET(0x1611EA30)
#define JPIHBAMECNH_EEKLGEOACEC_OFFSET UNITYSDK_OFFSET(0x1611E930)
#define JPIHBAMECNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPIHBAMECNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JPIHBAMECNH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x77AFD0)
#define JPIHBAMECNH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77B020)
#define JPIHBAMECNH___INIT_OFFSET UNITYSDK_OFFSET(0x77AFB0)

inline static constexpr unsigned int JPIHBAMECNH_TypeDefinitionIndex = 14675;

struct alignas(8) JPIHBAMECNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIHBAMECNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPIHBAMECNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FNKFJKENGFE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNKFJKENGFE&, ::System::Int32&))((::PBYTE)hIl2Cpp + JPIHBAMECNH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FNKFJKENGFE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNKFJKENGFE&))((::PBYTE)hIl2Cpp + JPIHBAMECNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JPIHBAMECNH EEKLGEOACEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JPIHBAMECNH EIFONLCJOPG)
	{
		return ((::JPIHBAMECNH(*)(::FlatBuffers::ByteBuffer*, ::JPIHBAMECNH))((::PBYTE)hIl2Cpp + JPIHBAMECNH_EEKLGEOACEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIHBAMECNH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JPIHBAMECNH EEKLGEOACEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPIHBAMECNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPIHBAMECNH_EEKLGEOACEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JPIHBAMECNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPIHBAMECNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPIHBAMECNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIHBAMECNH_PPOMNIFACOL_OFFSET))(this);
	}
};
