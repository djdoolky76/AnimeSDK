#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBCMNJILENI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC6C0)
#define BBCMNJILENI_DJOJPBPCLPD_1_OFFSET UNITYSDK_OFFSET(0x17753DB0)
#define BBCMNJILENI_DJOJPBPCLPD_OFFSET UNITYSDK_OFFSET(0x17753D40)
#define BBCMNJILENI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBCMNJILENI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBCMNJILENI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC6B0)
#define BBCMNJILENI___INIT_OFFSET UNITYSDK_OFFSET(0x7AC690)

inline static constexpr unsigned int BBCMNJILENI_TypeDefinitionIndex = 16519;

struct alignas(8) BBCMNJILENI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCMNJILENI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCMNJILENI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCMNJILENI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCMNJILENI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BBCMNJILENI DJOJPBPCLPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBCMNJILENI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCMNJILENI_DJOJPBPCLPD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BBCMNJILENI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBCMNJILENI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCMNJILENI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BBCMNJILENI DJOJPBPCLPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBCMNJILENI EIFONLCJOPG)
	{
		return ((::BBCMNJILENI(*)(::FlatBuffers::ByteBuffer*, ::BBCMNJILENI))((::PBYTE)hIl2Cpp + BBCMNJILENI_DJOJPBPCLPD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
