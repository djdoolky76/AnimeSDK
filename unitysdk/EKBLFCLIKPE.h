#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JKLDIONMEJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKBLFCLIKPE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EKBLFCLIKPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807D30)
#define EKBLFCLIKPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKBLFCLIKPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EKBLFCLIKPE_PNEOHKPGNCJ_1_OFFSET UNITYSDK_OFFSET(0x1ADD56C0)
#define EKBLFCLIKPE_PNEOHKPGNCJ_OFFSET UNITYSDK_OFFSET(0x1ADD5650)
#define EKBLFCLIKPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807D70)
#define EKBLFCLIKPE___INIT_OFFSET UNITYSDK_OFFSET(0x807D10)

inline static constexpr unsigned int EKBLFCLIKPE_TypeDefinitionIndex = 17347;

struct alignas(8) EKBLFCLIKPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBLFCLIKPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EKBLFCLIKPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBLFCLIKPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EKBLFCLIKPE PNEOHKPGNCJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKBLFCLIKPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_PNEOHKPGNCJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EKBLFCLIKPE PNEOHKPGNCJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EKBLFCLIKPE EIFONLCJOPG)
	{
		return ((::EKBLFCLIKPE(*)(::FlatBuffers::ByteBuffer*, ::EKBLFCLIKPE))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_PNEOHKPGNCJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JKLDIONMEJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JKLDIONMEJH&))((::PBYTE)hIl2Cpp + EKBLFCLIKPE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
