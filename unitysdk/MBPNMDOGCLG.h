#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IAHOMBOJMBP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBPNMDOGCLG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MBPNMDOGCLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D79B0)
#define MBPNMDOGCLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBPNMDOGCLG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MBPNMDOGCLG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7A00)
#define MBPNMDOGCLG_OEBBOPNJCIE_1_OFFSET UNITYSDK_OFFSET(0x18E03780)
#define MBPNMDOGCLG_OEBBOPNJCIE_OFFSET UNITYSDK_OFFSET(0x18E03710)
#define MBPNMDOGCLG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D79F0)
#define MBPNMDOGCLG___INIT_OFFSET UNITYSDK_OFFSET(0x7D7990)

inline static constexpr unsigned int MBPNMDOGCLG_TypeDefinitionIndex = 13241;

struct alignas(8) MBPNMDOGCLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBPNMDOGCLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MBPNMDOGCLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBPNMDOGCLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IAHOMBOJMBP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAHOMBOJMBP&))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MBPNMDOGCLG OEBBOPNJCIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBPNMDOGCLG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_OEBBOPNJCIE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MBPNMDOGCLG OEBBOPNJCIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MBPNMDOGCLG EIFONLCJOPG)
	{
		return ((::MBPNMDOGCLG(*)(::FlatBuffers::ByteBuffer*, ::MBPNMDOGCLG))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_OEBBOPNJCIE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IAHOMBOJMBP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IAHOMBOJMBP&, ::System::Int32&))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPNMDOGCLG_GHKKNCCLPAN_OFFSET))(this);
	}
};
