#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FOOBOONGLKI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBHFEBFMGKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JBHFEBFMGKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5390)
#define JBHFEBFMGKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBHFEBFMGKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBHFEBFMGKO_MNDFJAHINKM_1_OFFSET UNITYSDK_OFFSET(0x18BC6600)
#define JBHFEBFMGKO_MNDFJAHINKM_OFFSET UNITYSDK_OFFSET(0x18BC6590)
#define JBHFEBFMGKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D53D0)
#define JBHFEBFMGKO___INIT_OFFSET UNITYSDK_OFFSET(0x7D5370)

inline static constexpr unsigned int JBHFEBFMGKO_TypeDefinitionIndex = 12566;

struct alignas(8) JBHFEBFMGKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBHFEBFMGKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JBHFEBFMGKO MNDFJAHINKM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBHFEBFMGKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_MNDFJAHINKM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JBHFEBFMGKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBHFEBFMGKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JBHFEBFMGKO MNDFJAHINKM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBHFEBFMGKO EIFONLCJOPG)
	{
		return ((::JBHFEBFMGKO(*)(::FlatBuffers::ByteBuffer*, ::JBHFEBFMGKO))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_MNDFJAHINKM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FOOBOONGLKI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FOOBOONGLKI&))((::PBYTE)hIl2Cpp + JBHFEBFMGKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
