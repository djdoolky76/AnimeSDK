#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLFNJCHBPFE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFAKCPPPFIK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FFAKCPPPFIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D41B0)
#define FFAKCPPPFIK_CFMJKJJGCHC_1_OFFSET UNITYSDK_OFFSET(0x18B98ED0)
#define FFAKCPPPFIK_CFMJKJJGCHC_OFFSET UNITYSDK_OFFSET(0x18B98E60)
#define FFAKCPPPFIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFAKCPPPFIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FFAKCPPPFIK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4200)
#define FFAKCPPPFIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D41F0)
#define FFAKCPPPFIK___INIT_OFFSET UNITYSDK_OFFSET(0x7D4190)

inline static constexpr unsigned int FFAKCPPPFIK_TypeDefinitionIndex = 15933;

struct alignas(8) FFAKCPPPFIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFAKCPPPFIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FFAKCPPPFIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFAKCPPPFIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FFAKCPPPFIK CFMJKJJGCHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFAKCPPPFIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_CFMJKJJGCHC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FFAKCPPPFIK CFMJKJJGCHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FFAKCPPPFIK EIFONLCJOPG)
	{
		return ((::FFAKCPPPFIK(*)(::FlatBuffers::ByteBuffer*, ::FFAKCPPPFIK))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_CFMJKJJGCHC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLFNJCHBPFE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLFNJCHBPFE&, ::System::Int32&))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLFNJCHBPFE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLFNJCHBPFE&))((::PBYTE)hIl2Cpp + FFAKCPPPFIK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
