#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFBKCFKADJD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIEDAEKLEMA_AFJLAEHJNFM_1_OFFSET UNITYSDK_OFFSET(0x1A59D740)
#define EIEDAEKLEMA_AFJLAEHJNFM_OFFSET UNITYSDK_OFFSET(0x1A59D5A0)
#define EIEDAEKLEMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIEDAEKLEMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBE30)
#define EIEDAEKLEMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIEDAEKLEMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIEDAEKLEMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBE70)
#define EIEDAEKLEMA___INIT_OFFSET UNITYSDK_OFFSET(0x7FBE10)

inline static constexpr unsigned int EIEDAEKLEMA_TypeDefinitionIndex = 11222;

struct alignas(8) EIEDAEKLEMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIEDAEKLEMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EIEDAEKLEMA AFJLAEHJNFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIEDAEKLEMA EIFONLCJOPG)
	{
		return ((::EIEDAEKLEMA(*)(::FlatBuffers::ByteBuffer*, ::EIEDAEKLEMA))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_AFJLAEHJNFM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EIEDAEKLEMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIEDAEKLEMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFBKCFKADJD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFBKCFKADJD&))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EIEDAEKLEMA AFJLAEHJNFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIEDAEKLEMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIEDAEKLEMA_AFJLAEHJNFM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
