#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HENFDFLDPJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLEMPEHCDFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DLEMPEHCDFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x788BC0)
#define DLEMPEHCDFG_DGDBBHAKOLC_1_OFFSET UNITYSDK_OFFSET(0x1661C210)
#define DLEMPEHCDFG_DGDBBHAKOLC_OFFSET UNITYSDK_OFFSET(0x1661C1A0)
#define DLEMPEHCDFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLEMPEHCDFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DLEMPEHCDFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x788BA0)
#define DLEMPEHCDFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x788BB0)
#define DLEMPEHCDFG___INIT_OFFSET UNITYSDK_OFFSET(0x788B80)

inline static constexpr unsigned int DLEMPEHCDFG_TypeDefinitionIndex = 15557;

struct alignas(8) DLEMPEHCDFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEMPEHCDFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HENFDFLDPJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HENFDFLDPJL&))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HENFDFLDPJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HENFDFLDPJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DLEMPEHCDFG DGDBBHAKOLC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLEMPEHCDFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_DGDBBHAKOLC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DLEMPEHCDFG DGDBBHAKOLC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DLEMPEHCDFG EIFONLCJOPG)
	{
		return ((::DLEMPEHCDFG(*)(::FlatBuffers::ByteBuffer*, ::DLEMPEHCDFG))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_DGDBBHAKOLC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DLEMPEHCDFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLEMPEHCDFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLEMPEHCDFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
