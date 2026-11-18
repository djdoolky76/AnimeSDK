#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LLFIEKLMILG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGKBLMKDDBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGKBLMKDDBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C530)
#define OGKBLMKDDBC_FNOJLMPEDDN_1_OFFSET UNITYSDK_OFFSET(0x1B33BE10)
#define OGKBLMKDDBC_FNOJLMPEDDN_OFFSET UNITYSDK_OFFSET(0x1B33BDA0)
#define OGKBLMKDDBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGKBLMKDDBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGKBLMKDDBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80C580)
#define OGKBLMKDDBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C570)
#define OGKBLMKDDBC___INIT_OFFSET UNITYSDK_OFFSET(0x80C510)

inline static constexpr unsigned int OGKBLMKDDBC_TypeDefinitionIndex = 10806;

struct alignas(8) OGKBLMKDDBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGKBLMKDDBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OGKBLMKDDBC FNOJLMPEDDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGKBLMKDDBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_FNOJLMPEDDN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OGKBLMKDDBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGKBLMKDDBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LLFIEKLMILG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLFIEKLMILG&))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LLFIEKLMILG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LLFIEKLMILG&, ::System::Int32&))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OGKBLMKDDBC FNOJLMPEDDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGKBLMKDDBC EIFONLCJOPG)
	{
		return ((::OGKBLMKDDBC(*)(::FlatBuffers::ByteBuffer*, ::OGKBLMKDDBC))((::PBYTE)hIl2Cpp + OGKBLMKDDBC_FNOJLMPEDDN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
