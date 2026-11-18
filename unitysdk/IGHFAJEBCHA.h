#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAOGCHBLMEN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGHFAJEBCHA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IGHFAJEBCHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BEC30)
#define IGHFAJEBCHA_DDEEEPJICCN_1_OFFSET UNITYSDK_OFFSET(0x17C1BD30)
#define IGHFAJEBCHA_DDEEEPJICCN_OFFSET UNITYSDK_OFFSET(0x17C1BCD0)
#define IGHFAJEBCHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGHFAJEBCHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IGHFAJEBCHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BEC20)
#define IGHFAJEBCHA___INIT_OFFSET UNITYSDK_OFFSET(0x7BEC00)

inline static constexpr unsigned int IGHFAJEBCHA_TypeDefinitionIndex = 11304;

struct alignas(8) IGHFAJEBCHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGHFAJEBCHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IGHFAJEBCHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGHFAJEBCHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BAOGCHBLMEN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAOGCHBLMEN&))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IGHFAJEBCHA DDEEEPJICCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IGHFAJEBCHA EIFONLCJOPG)
	{
		return ((::IGHFAJEBCHA(*)(::FlatBuffers::ByteBuffer*, ::IGHFAJEBCHA))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_DDEEEPJICCN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IGHFAJEBCHA DDEEEPJICCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGHFAJEBCHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_DDEEEPJICCN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGHFAJEBCHA_GHKKNCCLPAN_OFFSET))(this);
	}
};
