#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INKIEKCGFDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJNBJAKLOIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JJNBJAKLOIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C450)
#define JJNBJAKLOIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJNBJAKLOIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JJNBJAKLOIP_IDCPONPMEEE_1_OFFSET UNITYSDK_OFFSET(0x1BAFBD90)
#define JJNBJAKLOIP_IDCPONPMEEE_OFFSET UNITYSDK_OFFSET(0x1BAFBD20)
#define JJNBJAKLOIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C440)
#define JJNBJAKLOIP___INIT_OFFSET UNITYSDK_OFFSET(0x81C420)

inline static constexpr unsigned int JJNBJAKLOIP_TypeDefinitionIndex = 13977;

struct alignas(8) JJNBJAKLOIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNBJAKLOIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INKIEKCGFDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INKIEKCGFDJ&))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JJNBJAKLOIP IDCPONPMEEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJNBJAKLOIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_IDCPONPMEEE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JJNBJAKLOIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJNBJAKLOIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JJNBJAKLOIP IDCPONPMEEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JJNBJAKLOIP EIFONLCJOPG)
	{
		return ((::JJNBJAKLOIP(*)(::FlatBuffers::ByteBuffer*, ::JJNBJAKLOIP))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_IDCPONPMEEE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNBJAKLOIP_GHKKNCCLPAN_OFFSET))(this);
	}
};
