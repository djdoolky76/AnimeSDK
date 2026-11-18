#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NHMAICJKDBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJPFGMCPOMO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HJPFGMCPOMO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A230)
#define HJPFGMCPOMO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJPFGMCPOMO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJPFGMCPOMO_KEOHKAFPJPO_1_OFFSET UNITYSDK_OFFSET(0x1B124150)
#define HJPFGMCPOMO_KEOHKAFPJPO_OFFSET UNITYSDK_OFFSET(0x1B1240E0)
#define HJPFGMCPOMO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A280)
#define HJPFGMCPOMO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A270)
#define HJPFGMCPOMO___INIT_OFFSET UNITYSDK_OFFSET(0x80A210)

inline static constexpr unsigned int HJPFGMCPOMO_TypeDefinitionIndex = 11091;

struct alignas(8) HJPFGMCPOMO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJPFGMCPOMO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HJPFGMCPOMO KEOHKAFPJPO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJPFGMCPOMO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_KEOHKAFPJPO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HJPFGMCPOMO KEOHKAFPJPO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJPFGMCPOMO EIFONLCJOPG)
	{
		return ((::HJPFGMCPOMO(*)(::FlatBuffers::ByteBuffer*, ::HJPFGMCPOMO))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_KEOHKAFPJPO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NHMAICJKDBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHMAICJKDBE&))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HJPFGMCPOMO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJPFGMCPOMO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NHMAICJKDBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NHMAICJKDBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + HJPFGMCPOMO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
