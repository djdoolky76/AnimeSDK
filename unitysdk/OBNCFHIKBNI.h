#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKPCOHDOBMC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBNCFHIKBNI_AAOOJFMOCKF_1_OFFSET UNITYSDK_OFFSET(0x1AD86F20)
#define OBNCFHIKBNI_AAOOJFMOCKF_OFFSET UNITYSDK_OFFSET(0x1AD86EB0)
#define OBNCFHIKBNI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBNCFHIKBNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805A90)
#define OBNCFHIKBNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBNCFHIKBNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBNCFHIKBNI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805A80)
#define OBNCFHIKBNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805AD0)
#define OBNCFHIKBNI___INIT_OFFSET UNITYSDK_OFFSET(0x805A60)

inline static constexpr unsigned int OBNCFHIKBNI_TypeDefinitionIndex = 15781;

struct alignas(8) OBNCFHIKBNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNCFHIKBNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MKPCOHDOBMC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKPCOHDOBMC&, ::System::Int32&))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OBNCFHIKBNI AAOOJFMOCKF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBNCFHIKBNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_AAOOJFMOCKF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OBNCFHIKBNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBNCFHIKBNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKPCOHDOBMC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKPCOHDOBMC&))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OBNCFHIKBNI AAOOJFMOCKF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBNCFHIKBNI EIFONLCJOPG)
	{
		return ((::OBNCFHIKBNI(*)(::FlatBuffers::ByteBuffer*, ::OBNCFHIKBNI))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_AAOOJFMOCKF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNCFHIKBNI_GHKKNCCLPAN_OFFSET))(this);
	}
};
