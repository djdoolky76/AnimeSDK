#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNDDBHGHPEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMLFDMLFGKN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CMLFDMLFGKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2790)
#define CMLFDMLFGKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMLFDMLFGKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMLFDMLFGKN_IAKKJDHHEJC_1_OFFSET UNITYSDK_OFFSET(0x19506050)
#define CMLFDMLFGKN_IAKKJDHHEJC_OFFSET UNITYSDK_OFFSET(0x19505FE0)
#define CMLFDMLFGKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E27D0)
#define CMLFDMLFGKN___INIT_OFFSET UNITYSDK_OFFSET(0x7E2770)

inline static constexpr unsigned int CMLFDMLFGKN_TypeDefinitionIndex = 15261;

struct alignas(8) CMLFDMLFGKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMLFDMLFGKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CMLFDMLFGKN IAKKJDHHEJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMLFDMLFGKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_IAKKJDHHEJC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMLFDMLFGKN IAKKJDHHEJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMLFDMLFGKN EIFONLCJOPG)
	{
		return ((::CMLFDMLFGKN(*)(::FlatBuffers::ByteBuffer*, ::CMLFDMLFGKN))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_IAKKJDHHEJC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CMLFDMLFGKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMLFDMLFGKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNDDBHGHPEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNDDBHGHPEI&))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLFDMLFGKN_PPOMNIFACOL_OFFSET))(this);
	}
};
