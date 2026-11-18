#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KJKKDIOEBOH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOPMINIGPEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOPMINIGPEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B580)
#define LOPMINIGPEH_GEMOGAKIGOI_1_OFFSET UNITYSDK_OFFSET(0x1B30D870)
#define LOPMINIGPEH_GEMOGAKIGOI_OFFSET UNITYSDK_OFFSET(0x1B30D800)
#define LOPMINIGPEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOPMINIGPEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOPMINIGPEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B570)
#define LOPMINIGPEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B560)
#define LOPMINIGPEH___INIT_OFFSET UNITYSDK_OFFSET(0x80B540)

inline static constexpr unsigned int LOPMINIGPEH_TypeDefinitionIndex = 13673;

struct alignas(8) LOPMINIGPEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPMINIGPEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOPMINIGPEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPMINIGPEH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KJKKDIOEBOH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJKKDIOEBOH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LOPMINIGPEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LOPMINIGPEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOPMINIGPEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOPMINIGPEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KJKKDIOEBOH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJKKDIOEBOH&))((::PBYTE)hIl2Cpp + LOPMINIGPEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LOPMINIGPEH GEMOGAKIGOI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOPMINIGPEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOPMINIGPEH_GEMOGAKIGOI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPMINIGPEH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LOPMINIGPEH GEMOGAKIGOI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOPMINIGPEH EIFONLCJOPG)
	{
		return ((::LOPMINIGPEH(*)(::FlatBuffers::ByteBuffer*, ::LOPMINIGPEH))((::PBYTE)hIl2Cpp + LOPMINIGPEH_GEMOGAKIGOI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
