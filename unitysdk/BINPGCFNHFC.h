#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNIKJDFFCOH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BINPGCFNHFC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BINPGCFNHFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9FB0)
#define BINPGCFNHFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BINPGCFNHFC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BINPGCFNHFC_JDOGFNGMBJK_1_OFFSET UNITYSDK_OFFSET(0x19AC7030)
#define BINPGCFNHFC_JDOGFNGMBJK_OFFSET UNITYSDK_OFFSET(0x19AC6FC0)
#define BINPGCFNHFC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E9FA0)
#define BINPGCFNHFC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9FF0)
#define BINPGCFNHFC___INIT_OFFSET UNITYSDK_OFFSET(0x7E9F80)

inline static constexpr unsigned int BINPGCFNHFC_TypeDefinitionIndex = 14624;

struct alignas(8) BINPGCFNHFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINPGCFNHFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BINPGCFNHFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BINPGCFNHFC JDOGFNGMBJK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BINPGCFNHFC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BINPGCFNHFC_JDOGFNGMBJK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PNIKJDFFCOH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNIKJDFFCOH&, ::System::Int32&))((::PBYTE)hIl2Cpp + BINPGCFNHFC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BINPGCFNHFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BINPGCFNHFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BINPGCFNHFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNIKJDFFCOH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNIKJDFFCOH&))((::PBYTE)hIl2Cpp + BINPGCFNHFC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BINPGCFNHFC JDOGFNGMBJK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BINPGCFNHFC EIFONLCJOPG)
	{
		return ((::BINPGCFNHFC(*)(::FlatBuffers::ByteBuffer*, ::BINPGCFNHFC))((::PBYTE)hIl2Cpp + BINPGCFNHFC_JDOGFNGMBJK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINPGCFNHFC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINPGCFNHFC_PPOMNIFACOL_OFFSET))(this);
	}
};
