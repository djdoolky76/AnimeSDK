#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBICPDGDOKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJAAABJMPIN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CJAAABJMPIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1FC0)
#define CJAAABJMPIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CJAAABJMPIN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CJAAABJMPIN_KFILMIFBBKO_1_OFFSET UNITYSDK_OFFSET(0x17A88670)
#define CJAAABJMPIN_KFILMIFBBKO_OFFSET UNITYSDK_OFFSET(0x17A885D0)
#define CJAAABJMPIN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1FB0)
#define CJAAABJMPIN___INIT_OFFSET UNITYSDK_OFFSET(0x7B1F90)

inline static constexpr unsigned int CJAAABJMPIN_TypeDefinitionIndex = 12874;

struct alignas(8) CJAAABJMPIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAABJMPIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAAABJMPIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAABJMPIN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBICPDGDOKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBICPDGDOKF&))((::PBYTE)hIl2Cpp + CJAAABJMPIN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAAABJMPIN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CJAAABJMPIN KFILMIFBBKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CJAAABJMPIN EIFONLCJOPG)
	{
		return ((::CJAAABJMPIN(*)(::FlatBuffers::ByteBuffer*, ::CJAAABJMPIN))((::PBYTE)hIl2Cpp + CJAAABJMPIN_KFILMIFBBKO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CJAAABJMPIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJAAABJMPIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAAABJMPIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CJAAABJMPIN KFILMIFBBKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CJAAABJMPIN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJAAABJMPIN_KFILMIFBBKO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
