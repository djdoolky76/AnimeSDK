#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDMCLCBFPLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHKPEFLFCNI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHKPEFLFCNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0500)
#define BHKPEFLFCNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHKPEFLFCNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHKPEFLFCNI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0540)
#define BHKPEFLFCNI_MBKAPBJBOAK_1_OFFSET UNITYSDK_OFFSET(0x1877A8E0)
#define BHKPEFLFCNI_MBKAPBJBOAK_OFFSET UNITYSDK_OFFSET(0x1877A7A0)
#define BHKPEFLFCNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D04F0)
#define BHKPEFLFCNI___INIT_OFFSET UNITYSDK_OFFSET(0x7D04D0)

inline static constexpr unsigned int BHKPEFLFCNI_TypeDefinitionIndex = 17318;

struct alignas(8) BHKPEFLFCNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHKPEFLFCNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BHKPEFLFCNI MBKAPBJBOAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHKPEFLFCNI EIFONLCJOPG)
	{
		return ((::BHKPEFLFCNI(*)(::FlatBuffers::ByteBuffer*, ::BHKPEFLFCNI))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_MBKAPBJBOAK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDMCLCBFPLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDMCLCBFPLM&))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BHKPEFLFCNI MBKAPBJBOAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHKPEFLFCNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_MBKAPBJBOAK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BHKPEFLFCNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHKPEFLFCNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDMCLCBFPLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDMCLCBFPLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BHKPEFLFCNI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
