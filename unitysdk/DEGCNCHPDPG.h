#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GEHABKADDPJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEGCNCHPDPG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEGCNCHPDPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0BE0)
#define DEGCNCHPDPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEGCNCHPDPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEGCNCHPDPG_LGPKMKMDANM_1_OFFSET UNITYSDK_OFFSET(0x18797860)
#define DEGCNCHPDPG_LGPKMKMDANM_OFFSET UNITYSDK_OFFSET(0x187977A0)
#define DEGCNCHPDPG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0C30)
#define DEGCNCHPDPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0C20)
#define DEGCNCHPDPG___INIT_OFFSET UNITYSDK_OFFSET(0x7D0BC0)

inline static constexpr unsigned int DEGCNCHPDPG_TypeDefinitionIndex = 11799;

struct alignas(8) DEGCNCHPDPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEGCNCHPDPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DEGCNCHPDPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEGCNCHPDPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DEGCNCHPDPG LGPKMKMDANM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEGCNCHPDPG EIFONLCJOPG)
	{
		return ((::DEGCNCHPDPG(*)(::FlatBuffers::ByteBuffer*, ::DEGCNCHPDPG))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_LGPKMKMDANM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DEGCNCHPDPG LGPKMKMDANM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEGCNCHPDPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_LGPKMKMDANM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GEHABKADDPJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GEHABKADDPJ&))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GEHABKADDPJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GEHABKADDPJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEGCNCHPDPG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
