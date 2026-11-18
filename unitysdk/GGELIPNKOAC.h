#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOOOIMGAEMP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGELIPNKOAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGELIPNKOAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC980)
#define GGELIPNKOAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGELIPNKOAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGELIPNKOAC_LKFOFJKGAMP_1_OFFSET UNITYSDK_OFFSET(0x1A5BEBE0)
#define GGELIPNKOAC_LKFOFJKGAMP_OFFSET UNITYSDK_OFFSET(0x1A5BEB70)
#define GGELIPNKOAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FC970)
#define GGELIPNKOAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC960)
#define GGELIPNKOAC___INIT_OFFSET UNITYSDK_OFFSET(0x7FC940)

inline static constexpr unsigned int GGELIPNKOAC_TypeDefinitionIndex = 13619;

struct alignas(8) GGELIPNKOAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGELIPNKOAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGELIPNKOAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGELIPNKOAC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GGELIPNKOAC LKFOFJKGAMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGELIPNKOAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGELIPNKOAC_LKFOFJKGAMP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JOOOIMGAEMP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOOOIMGAEMP&, ::System::Int32&))((::PBYTE)hIl2Cpp + GGELIPNKOAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GGELIPNKOAC LKFOFJKGAMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGELIPNKOAC EIFONLCJOPG)
	{
		return ((::GGELIPNKOAC(*)(::FlatBuffers::ByteBuffer*, ::GGELIPNKOAC))((::PBYTE)hIl2Cpp + GGELIPNKOAC_LKFOFJKGAMP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GGELIPNKOAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGELIPNKOAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGELIPNKOAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOOOIMGAEMP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOOOIMGAEMP&))((::PBYTE)hIl2Cpp + GGELIPNKOAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGELIPNKOAC_GHKKNCCLPAN_OFFSET))(this);
	}
};
