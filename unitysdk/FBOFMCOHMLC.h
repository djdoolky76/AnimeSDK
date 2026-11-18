#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKOEDJNDALO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBOFMCOHMLC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FBOFMCOHMLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7620)
#define FBOFMCOHMLC_DIHNPLNNOIE_1_OFFSET UNITYSDK_OFFSET(0x17456DC0)
#define FBOFMCOHMLC_DIHNPLNNOIE_OFFSET UNITYSDK_OFFSET(0x17456D50)
#define FBOFMCOHMLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBOFMCOHMLC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBOFMCOHMLC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7660)
#define FBOFMCOHMLC___INIT_OFFSET UNITYSDK_OFFSET(0x7A7600)

inline static constexpr unsigned int FBOFMCOHMLC_TypeDefinitionIndex = 16481;

struct alignas(8) FBOFMCOHMLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBOFMCOHMLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FBOFMCOHMLC DIHNPLNNOIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBOFMCOHMLC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_DIHNPLNNOIE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FBOFMCOHMLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBOFMCOHMLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKOEDJNDALO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKOEDJNDALO&))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FBOFMCOHMLC DIHNPLNNOIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBOFMCOHMLC EIFONLCJOPG)
	{
		return ((::FBOFMCOHMLC(*)(::FlatBuffers::ByteBuffer*, ::FBOFMCOHMLC))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_DIHNPLNNOIE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::UInt32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFMCOHMLC_PPOMNIFACOL_OFFSET))(this);
	}
};
