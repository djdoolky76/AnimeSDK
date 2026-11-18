#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EOOBLEALPIO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCELCMABIHL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCELCMABIHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810300)
#define LCELCMABIHL_DFIJIHDPABJ_1_OFFSET UNITYSDK_OFFSET(0x1B647520)
#define LCELCMABIHL_DFIJIHDPABJ_OFFSET UNITYSDK_OFFSET(0x1B647280)
#define LCELCMABIHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCELCMABIHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCELCMABIHL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x810340)
#define LCELCMABIHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810350)
#define LCELCMABIHL___INIT_OFFSET UNITYSDK_OFFSET(0x8102E0)

inline static constexpr unsigned int LCELCMABIHL_TypeDefinitionIndex = 13202;

struct alignas(8) LCELCMABIHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCELCMABIHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCELCMABIHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCELCMABIHL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LCELCMABIHL DFIJIHDPABJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCELCMABIHL EIFONLCJOPG)
	{
		return ((::LCELCMABIHL(*)(::FlatBuffers::ByteBuffer*, ::LCELCMABIHL))((::PBYTE)hIl2Cpp + LCELCMABIHL_DFIJIHDPABJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LCELCMABIHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCELCMABIHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCELCMABIHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EOOBLEALPIO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOOBLEALPIO&))((::PBYTE)hIl2Cpp + LCELCMABIHL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EOOBLEALPIO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EOOBLEALPIO&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCELCMABIHL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LCELCMABIHL DFIJIHDPABJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCELCMABIHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCELCMABIHL_DFIJIHDPABJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCELCMABIHL_PPOMNIFACOL_OFFSET))(this);
	}
};
