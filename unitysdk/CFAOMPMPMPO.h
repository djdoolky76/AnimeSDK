#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLNEDOHBMBN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFAOMPMPMPO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CFAOMPMPMPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0710)
#define CFAOMPMPMPO_EAJGAAKIOLH_1_OFFSET UNITYSDK_OFFSET(0x18786900)
#define CFAOMPMPMPO_EAJGAAKIOLH_OFFSET UNITYSDK_OFFSET(0x18786800)
#define CFAOMPMPMPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CFAOMPMPMPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CFAOMPMPMPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0700)
#define CFAOMPMPMPO___INIT_OFFSET UNITYSDK_OFFSET(0x7D06E0)

inline static constexpr unsigned int CFAOMPMPMPO_TypeDefinitionIndex = 17279;

struct alignas(8) CFAOMPMPMPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFAOMPMPMPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CFAOMPMPMPO EAJGAAKIOLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CFAOMPMPMPO EIFONLCJOPG)
	{
		return ((::CFAOMPMPMPO(*)(::FlatBuffers::ByteBuffer*, ::CFAOMPMPMPO))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_EAJGAAKIOLH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CFAOMPMPMPO EAJGAAKIOLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFAOMPMPMPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_EAJGAAKIOLH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CFAOMPMPMPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CFAOMPMPMPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLNEDOHBMBN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLNEDOHBMBN&))((::PBYTE)hIl2Cpp + CFAOMPMPMPO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
