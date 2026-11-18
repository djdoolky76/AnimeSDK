#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLIACEPMOKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKKCKFHGGPG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKKCKFHGGPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF930)
#define JKKCKFHGGPG_BMINJHDGNPP_1_OFFSET UNITYSDK_OFFSET(0x1935D970)
#define JKKCKFHGGPG_BMINJHDGNPP_OFFSET UNITYSDK_OFFSET(0x1935D900)
#define JKKCKFHGGPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKKCKFHGGPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKKCKFHGGPG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF920)
#define JKKCKFHGGPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF910)
#define JKKCKFHGGPG___INIT_OFFSET UNITYSDK_OFFSET(0x7DF8F0)

inline static constexpr unsigned int JKKCKFHGGPG_TypeDefinitionIndex = 9232;

struct alignas(8) JKKCKFHGGPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKKCKFHGGPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLIACEPMOKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLIACEPMOKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JKKCKFHGGPG BMINJHDGNPP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKKCKFHGGPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_BMINJHDGNPP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JKKCKFHGGPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKKCKFHGGPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLIACEPMOKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLIACEPMOKB&))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JKKCKFHGGPG BMINJHDGNPP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKKCKFHGGPG EIFONLCJOPG)
	{
		return ((::JKKCKFHGGPG(*)(::FlatBuffers::ByteBuffer*, ::JKKCKFHGGPG))((::PBYTE)hIl2Cpp + JKKCKFHGGPG_BMINJHDGNPP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
