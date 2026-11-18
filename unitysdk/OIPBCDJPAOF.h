#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JIDIJONEKIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIPBCDJPAOF_APCEPHDBCOA_1_OFFSET UNITYSDK_OFFSET(0x1C0A4DC0)
#define OIPBCDJPAOF_APCEPHDBCOA_OFFSET UNITYSDK_OFFSET(0x1C0A4D50)
#define OIPBCDJPAOF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OIPBCDJPAOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F950)
#define OIPBCDJPAOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIPBCDJPAOF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OIPBCDJPAOF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81F990)
#define OIPBCDJPAOF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F9A0)
#define OIPBCDJPAOF___INIT_OFFSET UNITYSDK_OFFSET(0x81F930)

inline static constexpr unsigned int OIPBCDJPAOF_TypeDefinitionIndex = 11780;

struct alignas(8) OIPBCDJPAOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIPBCDJPAOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OIPBCDJPAOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIPBCDJPAOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JIDIJONEKIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JIDIJONEKIN&))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OIPBCDJPAOF APCEPHDBCOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIPBCDJPAOF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_APCEPHDBCOA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JIDIJONEKIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JIDIJONEKIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OIPBCDJPAOF APCEPHDBCOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OIPBCDJPAOF EIFONLCJOPG)
	{
		return ((::OIPBCDJPAOF(*)(::FlatBuffers::ByteBuffer*, ::OIPBCDJPAOF))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_APCEPHDBCOA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPBCDJPAOF_PPOMNIFACOL_OFFSET))(this);
	}
};
