#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JBJAGHHGEJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMKKGHFHGFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMKKGHFHGFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7560)
#define EMKKGHFHGFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMKKGHFHGFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMKKGHFHGFI_MFHMNNDJKBF_1_OFFSET UNITYSDK_OFFSET(0x17451940)
#define EMKKGHFHGFI_MFHMNNDJKBF_OFFSET UNITYSDK_OFFSET(0x174517A0)
#define EMKKGHFHGFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7550)
#define EMKKGHFHGFI___INIT_OFFSET UNITYSDK_OFFSET(0x7A7530)

inline static constexpr unsigned int EMKKGHFHGFI_TypeDefinitionIndex = 13437;

struct alignas(8) EMKKGHFHGFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMKKGHFHGFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EMKKGHFHGFI MFHMNNDJKBF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMKKGHFHGFI EIFONLCJOPG)
	{
		return ((::EMKKGHFHGFI(*)(::FlatBuffers::ByteBuffer*, ::EMKKGHFHGFI))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_MFHMNNDJKBF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JBJAGHHGEJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JBJAGHHGEJH&))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EMKKGHFHGFI MFHMNNDJKBF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMKKGHFHGFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_MFHMNNDJKBF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EMKKGHFHGFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMKKGHFHGFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMKKGHFHGFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
