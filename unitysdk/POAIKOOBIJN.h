#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGLLHEKMIGH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POAIKOOBIJN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POAIKOOBIJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9A3660)
#define POAIKOOBIJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POAIKOOBIJN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POAIKOOBIJN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9A3650)
#define POAIKOOBIJN_OIPDJMAKAFD_1_OFFSET UNITYSDK_OFFSET(0x1FD7CCD0)
#define POAIKOOBIJN_OIPDJMAKAFD_OFFSET UNITYSDK_OFFSET(0x1FD7CC60)
#define POAIKOOBIJN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9A3640)
#define POAIKOOBIJN___INIT_OFFSET UNITYSDK_OFFSET(0x9A3620)

inline static constexpr unsigned int POAIKOOBIJN_TypeDefinitionIndex = 9954;

struct alignas(8) POAIKOOBIJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POAIKOOBIJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POAIKOOBIJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POAIKOOBIJN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::POAIKOOBIJN OIPDJMAKAFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POAIKOOBIJN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POAIKOOBIJN_OIPDJMAKAFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POAIKOOBIJN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::POAIKOOBIJN OIPDJMAKAFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POAIKOOBIJN EIFONLCJOPG)
	{
		return ((::POAIKOOBIJN(*)(::FlatBuffers::ByteBuffer*, ::POAIKOOBIJN))((::PBYTE)hIl2Cpp + POAIKOOBIJN_OIPDJMAKAFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGLLHEKMIGH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGLLHEKMIGH&, ::System::Int32&))((::PBYTE)hIl2Cpp + POAIKOOBIJN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::POAIKOOBIJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POAIKOOBIJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POAIKOOBIJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGLLHEKMIGH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGLLHEKMIGH&))((::PBYTE)hIl2Cpp + POAIKOOBIJN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
