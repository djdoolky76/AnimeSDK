#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHIEPHBKMKH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEJIAANFHOE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GEJIAANFHOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F7ED0)
#define GEJIAANFHOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEJIAANFHOE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GEJIAANFHOE_GHOGAPCKJIO_1_OFFSET UNITYSDK_OFFSET(0x1A4D4FD0)
#define GEJIAANFHOE_GHOGAPCKJIO_OFFSET UNITYSDK_OFFSET(0x1A4D4F70)
#define GEJIAANFHOE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F7EC0)
#define GEJIAANFHOE___INIT_OFFSET UNITYSDK_OFFSET(0x7F7EA0)

inline static constexpr unsigned int GEJIAANFHOE_TypeDefinitionIndex = 17511;

struct alignas(8) GEJIAANFHOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJIAANFHOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJIAANFHOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJIAANFHOE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GEJIAANFHOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEJIAANFHOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJIAANFHOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHIEPHBKMKH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHIEPHBKMKH&))((::PBYTE)hIl2Cpp + GEJIAANFHOE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GEJIAANFHOE GHOGAPCKJIO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GEJIAANFHOE EIFONLCJOPG)
	{
		return ((::GEJIAANFHOE(*)(::FlatBuffers::ByteBuffer*, ::GEJIAANFHOE))((::PBYTE)hIl2Cpp + GEJIAANFHOE_GHOGAPCKJIO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJIAANFHOE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GEJIAANFHOE GHOGAPCKJIO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEJIAANFHOE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEJIAANFHOE_GHOGAPCKJIO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
