#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNCBGOOEKHP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COJHMLMIBOP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define COJHMLMIBOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5580)
#define COJHMLMIBOP_EIGGJBANOCK_1_OFFSET UNITYSDK_OFFSET(0x1A1828E0)
#define COJHMLMIBOP_EIGGJBANOCK_OFFSET UNITYSDK_OFFSET(0x1A182880)
#define COJHMLMIBOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COJHMLMIBOP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define COJHMLMIBOP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5570)
#define COJHMLMIBOP___INIT_OFFSET UNITYSDK_OFFSET(0x7F5550)

inline static constexpr unsigned int COJHMLMIBOP_TypeDefinitionIndex = 10128;

struct alignas(8) COJHMLMIBOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COJHMLMIBOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJHMLMIBOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FNCBGOOEKHP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNCBGOOEKHP&))((::PBYTE)hIl2Cpp + COJHMLMIBOP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COJHMLMIBOP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJHMLMIBOP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::COJHMLMIBOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COJHMLMIBOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJHMLMIBOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::COJHMLMIBOP EIGGJBANOCK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::COJHMLMIBOP EIFONLCJOPG)
	{
		return ((::COJHMLMIBOP(*)(::FlatBuffers::ByteBuffer*, ::COJHMLMIBOP))((::PBYTE)hIl2Cpp + COJHMLMIBOP_EIGGJBANOCK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::COJHMLMIBOP EIGGJBANOCK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COJHMLMIBOP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJHMLMIBOP_EIGGJBANOCK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
