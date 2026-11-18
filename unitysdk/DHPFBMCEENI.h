#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LFOJJEIOODH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHPFBMCEENI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHPFBMCEENI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816F60)
#define DHPFBMCEENI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHPFBMCEENI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHPFBMCEENI_IILKIKCHAHF_1_OFFSET UNITYSDK_OFFSET(0x1B9A7670)
#define DHPFBMCEENI_IILKIKCHAHF_OFFSET UNITYSDK_OFFSET(0x1B9A7600)
#define DHPFBMCEENI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x816FB0)
#define DHPFBMCEENI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816FA0)
#define DHPFBMCEENI___INIT_OFFSET UNITYSDK_OFFSET(0x816F40)

inline static constexpr unsigned int DHPFBMCEENI_TypeDefinitionIndex = 12855;

struct alignas(8) DHPFBMCEENI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPFBMCEENI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHPFBMCEENI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPFBMCEENI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DHPFBMCEENI IILKIKCHAHF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHPFBMCEENI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHPFBMCEENI_IILKIKCHAHF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LFOJJEIOODH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFOJJEIOODH&))((::PBYTE)hIl2Cpp + DHPFBMCEENI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DHPFBMCEENI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHPFBMCEENI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHPFBMCEENI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DHPFBMCEENI IILKIKCHAHF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHPFBMCEENI EIFONLCJOPG)
	{
		return ((::DHPFBMCEENI(*)(::FlatBuffers::ByteBuffer*, ::DHPFBMCEENI))((::PBYTE)hIl2Cpp + DHPFBMCEENI_IILKIKCHAHF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPFBMCEENI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LFOJJEIOODH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LFOJJEIOODH&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHPFBMCEENI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
