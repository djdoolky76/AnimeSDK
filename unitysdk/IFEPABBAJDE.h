#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLHPJNFEINM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFEPABBAJDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFEPABBAJDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F2D0)
#define IFEPABBAJDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFEPABBAJDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFEPABBAJDE_JIEJLNDFHAO_1_OFFSET UNITYSDK_OFFSET(0x15A95480)
#define IFEPABBAJDE_JIEJLNDFHAO_OFFSET UNITYSDK_OFFSET(0x15A95420)
#define IFEPABBAJDE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F320)
#define IFEPABBAJDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F310)
#define IFEPABBAJDE___INIT_OFFSET UNITYSDK_OFFSET(0x76F2B0)

inline static constexpr unsigned int IFEPABBAJDE_TypeDefinitionIndex = 13806;

struct alignas(8) IFEPABBAJDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEPABBAJDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFEPABBAJDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IFEPABBAJDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFEPABBAJDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFEPABBAJDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEPABBAJDE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEPABBAJDE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FLHPJNFEINM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLHPJNFEINM&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFEPABBAJDE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FLHPJNFEINM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLHPJNFEINM&))((::PBYTE)hIl2Cpp + IFEPABBAJDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IFEPABBAJDE JIEJLNDFHAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFEPABBAJDE EIFONLCJOPG)
	{
		return ((::IFEPABBAJDE(*)(::FlatBuffers::ByteBuffer*, ::IFEPABBAJDE))((::PBYTE)hIl2Cpp + IFEPABBAJDE_JIEJLNDFHAO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IFEPABBAJDE JIEJLNDFHAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFEPABBAJDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFEPABBAJDE_JIEJLNDFHAO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
