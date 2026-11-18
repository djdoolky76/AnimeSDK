#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NFMBHLJFOEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCEHBAHPDGM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCEHBAHPDGM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EADF0)
#define FCEHBAHPDGM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCEHBAHPDGM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCEHBAHPDGM_PKDHOHEGFNB_1_OFFSET UNITYSDK_OFFSET(0x19AED700)
#define FCEHBAHPDGM_PKDHOHEGFNB_OFFSET UNITYSDK_OFFSET(0x19AED690)
#define FCEHBAHPDGM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EADE0)
#define FCEHBAHPDGM___INIT_OFFSET UNITYSDK_OFFSET(0x7EADC0)

inline static constexpr unsigned int FCEHBAHPDGM_TypeDefinitionIndex = 14086;

struct alignas(8) FCEHBAHPDGM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCEHBAHPDGM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FCEHBAHPDGM PKDHOHEGFNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCEHBAHPDGM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_PKDHOHEGFNB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NFMBHLJFOEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NFMBHLJFOEN&))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::FCEHBAHPDGM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCEHBAHPDGM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FCEHBAHPDGM PKDHOHEGFNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCEHBAHPDGM EIFONLCJOPG)
	{
		return ((::FCEHBAHPDGM(*)(::FlatBuffers::ByteBuffer*, ::FCEHBAHPDGM))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_PKDHOHEGFNB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHBAHPDGM_GHKKNCCLPAN_OFFSET))(this);
	}
};
