#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KCEBNEEDFFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCGGEJGAOAE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCGGEJGAOAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A76E0)
#define FCGGEJGAOAE_BKGHPNFILEI_1_OFFSET UNITYSDK_OFFSET(0x174579F0)
#define FCGGEJGAOAE_BKGHPNFILEI_OFFSET UNITYSDK_OFFSET(0x17457990)
#define FCGGEJGAOAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCGGEJGAOAE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCGGEJGAOAE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A76D0)
#define FCGGEJGAOAE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7720)
#define FCGGEJGAOAE___INIT_OFFSET UNITYSDK_OFFSET(0x7A76B0)

inline static constexpr unsigned int FCGGEJGAOAE_TypeDefinitionIndex = 15907;

struct alignas(8) FCGGEJGAOAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCGGEJGAOAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KCEBNEEDFFD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCEBNEEDFFD&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FCGGEJGAOAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCGGEJGAOAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FCGGEJGAOAE BKGHPNFILEI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCGGEJGAOAE EIFONLCJOPG)
	{
		return ((::FCGGEJGAOAE(*)(::FlatBuffers::ByteBuffer*, ::FCGGEJGAOAE))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_BKGHPNFILEI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FCGGEJGAOAE BKGHPNFILEI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCGGEJGAOAE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_BKGHPNFILEI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KCEBNEEDFFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KCEBNEEDFFD&))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGGEJGAOAE_PPOMNIFACOL_OFFSET))(this);
	}
};
