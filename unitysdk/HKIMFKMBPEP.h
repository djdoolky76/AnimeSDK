#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PBMAFMGEOFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKIMFKMBPEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKIMFKMBPEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812110)
#define HKIMFKMBPEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKIMFKMBPEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKIMFKMBPEP_PPHGIGLLDAB_1_OFFSET UNITYSDK_OFFSET(0x1B7C6100)
#define HKIMFKMBPEP_PPHGIGLLDAB_OFFSET UNITYSDK_OFFSET(0x1B7C6060)
#define HKIMFKMBPEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812150)
#define HKIMFKMBPEP___INIT_OFFSET UNITYSDK_OFFSET(0x8120F0)

inline static constexpr unsigned int HKIMFKMBPEP_TypeDefinitionIndex = 15050;

struct alignas(8) HKIMFKMBPEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKIMFKMBPEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HKIMFKMBPEP PPHGIGLLDAB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKIMFKMBPEP EIFONLCJOPG)
	{
		return ((::HKIMFKMBPEP(*)(::FlatBuffers::ByteBuffer*, ::HKIMFKMBPEP))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_PPHGIGLLDAB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HKIMFKMBPEP PPHGIGLLDAB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKIMFKMBPEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_PPHGIGLLDAB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PBMAFMGEOFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PBMAFMGEOFD&))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HKIMFKMBPEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKIMFKMBPEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKIMFKMBPEP_PPOMNIFACOL_OFFSET))(this);
	}
};
