#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMHAIAPLKKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CEFBMFECEHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CEFBMFECEHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C18D0)
#define CEFBMFECEHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEFBMFECEHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CEFBMFECEHB_KLOIFJCDAEK_1_OFFSET UNITYSDK_OFFSET(0x17F08990)
#define CEFBMFECEHB_KLOIFJCDAEK_OFFSET UNITYSDK_OFFSET(0x17F08930)
#define CEFBMFECEHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1910)
#define CEFBMFECEHB___INIT_OFFSET UNITYSDK_OFFSET(0x7C18B0)

inline static constexpr unsigned int CEFBMFECEHB_TypeDefinitionIndex = 11167;

struct alignas(8) CEFBMFECEHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFBMFECEHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEFBMFECEHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CEFBMFECEHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEFBMFECEHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEFBMFECEHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFBMFECEHB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMHAIAPLKKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMHAIAPLKKF&))((::PBYTE)hIl2Cpp + CEFBMFECEHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CEFBMFECEHB KLOIFJCDAEK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CEFBMFECEHB EIFONLCJOPG)
	{
		return ((::CEFBMFECEHB(*)(::FlatBuffers::ByteBuffer*, ::CEFBMFECEHB))((::PBYTE)hIl2Cpp + CEFBMFECEHB_KLOIFJCDAEK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFBMFECEHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CEFBMFECEHB KLOIFJCDAEK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEFBMFECEHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEFBMFECEHB_KLOIFJCDAEK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
