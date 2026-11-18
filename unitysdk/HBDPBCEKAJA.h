#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KABFOLDHLKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBDPBCEKAJA_AMDCCPNOIJH_1_OFFSET UNITYSDK_OFFSET(0x17BF64D0)
#define HBDPBCEKAJA_AMDCCPNOIJH_OFFSET UNITYSDK_OFFSET(0x17BF6470)
#define HBDPBCEKAJA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HBDPBCEKAJA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5300)
#define HBDPBCEKAJA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBDPBCEKAJA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HBDPBCEKAJA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B5350)
#define HBDPBCEKAJA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B5340)
#define HBDPBCEKAJA___INIT_OFFSET UNITYSDK_OFFSET(0x7B52E0)

inline static constexpr unsigned int HBDPBCEKAJA_TypeDefinitionIndex = 14962;

struct alignas(8) HBDPBCEKAJA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBDPBCEKAJA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HBDPBCEKAJA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBDPBCEKAJA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KABFOLDHLKK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KABFOLDHLKK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HBDPBCEKAJA AMDCCPNOIJH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HBDPBCEKAJA EIFONLCJOPG)
	{
		return ((::HBDPBCEKAJA(*)(::FlatBuffers::ByteBuffer*, ::HBDPBCEKAJA))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_AMDCCPNOIJH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HBDPBCEKAJA AMDCCPNOIJH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBDPBCEKAJA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_AMDCCPNOIJH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KABFOLDHLKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KABFOLDHLKK&))((::PBYTE)hIl2Cpp + HBDPBCEKAJA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
