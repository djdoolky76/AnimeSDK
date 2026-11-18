#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OEPGEIMNDKC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGDOEAKOFFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OGDOEAKOFFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8034F0)
#define OGDOEAKOFFI_DBAOMKCOFLI_1_OFFSET UNITYSDK_OFFSET(0x1AB293E0)
#define OGDOEAKOFFI_DBAOMKCOFLI_OFFSET UNITYSDK_OFFSET(0x1AB29340)
#define OGDOEAKOFFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGDOEAKOFFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGDOEAKOFFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803530)
#define OGDOEAKOFFI___INIT_OFFSET UNITYSDK_OFFSET(0x8034D0)

inline static constexpr unsigned int OGDOEAKOFFI_TypeDefinitionIndex = 15477;

struct alignas(8) OGDOEAKOFFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGDOEAKOFFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OGDOEAKOFFI DBAOMKCOFLI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGDOEAKOFFI EIFONLCJOPG)
	{
		return ((::OGDOEAKOFFI(*)(::FlatBuffers::ByteBuffer*, ::OGDOEAKOFFI))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_DBAOMKCOFLI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OGDOEAKOFFI DBAOMKCOFLI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGDOEAKOFFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_DBAOMKCOFLI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OEPGEIMNDKC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OEPGEIMNDKC&))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OGDOEAKOFFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGDOEAKOFFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDOEAKOFFI_PPOMNIFACOL_OFFSET))(this);
	}
};
