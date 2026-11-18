#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FOJKLIPOEFE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKLHIANNECC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AKLHIANNECC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F14D0)
#define AKLHIANNECC_CHLONDOFNNN_1_OFFSET UNITYSDK_OFFSET(0x19F10010)
#define AKLHIANNECC_CHLONDOFNNN_OFFSET UNITYSDK_OFFSET(0x19F0FFA0)
#define AKLHIANNECC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKLHIANNECC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKLHIANNECC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F14C0)
#define AKLHIANNECC___INIT_OFFSET UNITYSDK_OFFSET(0x7F14A0)

inline static constexpr unsigned int AKLHIANNECC_TypeDefinitionIndex = 15532;

struct alignas(8) AKLHIANNECC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLHIANNECC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKLHIANNECC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLHIANNECC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FOJKLIPOEFE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOJKLIPOEFE&))((::PBYTE)hIl2Cpp + AKLHIANNECC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AKLHIANNECC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKLHIANNECC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKLHIANNECC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AKLHIANNECC CHLONDOFNNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKLHIANNECC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKLHIANNECC_CHLONDOFNNN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::AKLHIANNECC CHLONDOFNNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKLHIANNECC EIFONLCJOPG)
	{
		return ((::AKLHIANNECC(*)(::FlatBuffers::ByteBuffer*, ::AKLHIANNECC))((::PBYTE)hIl2Cpp + AKLHIANNECC_CHLONDOFNNN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLHIANNECC_GHKKNCCLPAN_OFFSET))(this);
	}
};
