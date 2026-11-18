#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KAMFODPJHDM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHIDDCPCCHP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JHIDDCPCCHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80FB20)
#define JHIDDCPCCHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHIDDCPCCHP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JHIDDCPCCHP_MNIJLCKKLON_1_OFFSET UNITYSDK_OFFSET(0x1B632280)
#define JHIDDCPCCHP_MNIJLCKKLON_OFFSET UNITYSDK_OFFSET(0x1B632210)
#define JHIDDCPCCHP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80FB60)
#define JHIDDCPCCHP___INIT_OFFSET UNITYSDK_OFFSET(0x80FB00)

inline static constexpr unsigned int JHIDDCPCCHP_TypeDefinitionIndex = 10338;

struct alignas(8) JHIDDCPCCHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIDDCPCCHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KAMFODPJHDM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KAMFODPJHDM&))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JHIDDCPCCHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHIDDCPCCHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JHIDDCPCCHP MNIJLCKKLON(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHIDDCPCCHP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_MNIJLCKKLON_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JHIDDCPCCHP MNIJLCKKLON_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JHIDDCPCCHP EIFONLCJOPG)
	{
		return ((::JHIDDCPCCHP(*)(::FlatBuffers::ByteBuffer*, ::JHIDDCPCCHP))((::PBYTE)hIl2Cpp + JHIDDCPCCHP_MNIJLCKKLON_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
