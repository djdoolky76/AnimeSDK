#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BBKBOBLLCNO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFKODJALLAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AFKODJALLAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9220)
#define AFKODJALLAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFKODJALLAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AFKODJALLAJ_KGBAJOFCOPG_1_OFFSET UNITYSDK_OFFSET(0x1A5172F0)
#define AFKODJALLAJ_KGBAJOFCOPG_OFFSET UNITYSDK_OFFSET(0x1A517280)
#define AFKODJALLAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9210)
#define AFKODJALLAJ___INIT_OFFSET UNITYSDK_OFFSET(0x7F91F0)

inline static constexpr unsigned int AFKODJALLAJ_TypeDefinitionIndex = 16546;

struct alignas(8) AFKODJALLAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKODJALLAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFKODJALLAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKODJALLAJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AFKODJALLAJ KGBAJOFCOPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFKODJALLAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFKODJALLAJ_KGBAJOFCOPG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AFKODJALLAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFKODJALLAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFKODJALLAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AFKODJALLAJ KGBAJOFCOPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AFKODJALLAJ EIFONLCJOPG)
	{
		return ((::AFKODJALLAJ(*)(::FlatBuffers::ByteBuffer*, ::AFKODJALLAJ))((::PBYTE)hIl2Cpp + AFKODJALLAJ_KGBAJOFCOPG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BBKBOBLLCNO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BBKBOBLLCNO&))((::PBYTE)hIl2Cpp + AFKODJALLAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKODJALLAJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
