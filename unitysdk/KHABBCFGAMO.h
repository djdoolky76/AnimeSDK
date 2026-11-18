#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IPFAHNLPFJP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHABBCFGAMO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHABBCFGAMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C6C0)
#define KHABBCFGAMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHABBCFGAMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHABBCFGAMO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81C6B0)
#define KHABBCFGAMO_OFOAEBJFMMP_1_OFFSET UNITYSDK_OFFSET(0x1BB01FE0)
#define KHABBCFGAMO_OFOAEBJFMMP_OFFSET UNITYSDK_OFFSET(0x1BB00F60)
#define KHABBCFGAMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C6A0)
#define KHABBCFGAMO___INIT_OFFSET UNITYSDK_OFFSET(0x81C680)

inline static constexpr unsigned int KHABBCFGAMO_TypeDefinitionIndex = 9509;

struct alignas(8) KHABBCFGAMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHABBCFGAMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHABBCFGAMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHABBCFGAMO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IPFAHNLPFJP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPFAHNLPFJP&, ::System::Int32&))((::PBYTE)hIl2Cpp + KHABBCFGAMO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KHABBCFGAMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHABBCFGAMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHABBCFGAMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHABBCFGAMO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KHABBCFGAMO OFOAEBJFMMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHABBCFGAMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHABBCFGAMO_OFOAEBJFMMP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IPFAHNLPFJP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IPFAHNLPFJP&))((::PBYTE)hIl2Cpp + KHABBCFGAMO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KHABBCFGAMO OFOAEBJFMMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHABBCFGAMO EIFONLCJOPG)
	{
		return ((::KHABBCFGAMO(*)(::FlatBuffers::ByteBuffer*, ::KHABBCFGAMO))((::PBYTE)hIl2Cpp + KHABBCFGAMO_OFOAEBJFMMP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
