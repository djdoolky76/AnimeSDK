#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FKJBFKKENHO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJNHPFDBPPG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJNHPFDBPPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA620)
#define NJNHPFDBPPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJNHPFDBPPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJNHPFDBPPG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DA600)
#define NJNHPFDBPPG_LPNABEGECMI_1_OFFSET UNITYSDK_OFFSET(0x1911FFB0)
#define NJNHPFDBPPG_LPNABEGECMI_OFFSET UNITYSDK_OFFSET(0x1911FF10)
#define NJNHPFDBPPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA610)
#define NJNHPFDBPPG___INIT_OFFSET UNITYSDK_OFFSET(0x7DA5E0)

inline static constexpr unsigned int NJNHPFDBPPG_TypeDefinitionIndex = 10182;

struct alignas(8) NJNHPFDBPPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJNHPFDBPPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FKJBFKKENHO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKJBFKKENHO&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NJNHPFDBPPG LPNABEGECMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJNHPFDBPPG EIFONLCJOPG)
	{
		return ((::NJNHPFDBPPG(*)(::FlatBuffers::ByteBuffer*, ::NJNHPFDBPPG))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_LPNABEGECMI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NJNHPFDBPPG LPNABEGECMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJNHPFDBPPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_LPNABEGECMI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NJNHPFDBPPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJNHPFDBPPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FKJBFKKENHO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKJBFKKENHO&))((::PBYTE)hIl2Cpp + NJNHPFDBPPG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
