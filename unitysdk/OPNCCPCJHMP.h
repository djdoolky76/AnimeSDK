#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJDBOPAEDEO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPNCCPCJHMP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OPNCCPCJHMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805FC0)
#define OPNCCPCJHMP_DCFIBOLOHOC_1_OFFSET UNITYSDK_OFFSET(0x1AD95470)
#define OPNCCPCJHMP_DCFIBOLOHOC_OFFSET UNITYSDK_OFFSET(0x1AD953D0)
#define OPNCCPCJHMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPNCCPCJHMP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OPNCCPCJHMP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805FA0)
#define OPNCCPCJHMP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805FB0)
#define OPNCCPCJHMP___INIT_OFFSET UNITYSDK_OFFSET(0x805F80)

inline static constexpr unsigned int OPNCCPCJHMP_TypeDefinitionIndex = 13001;

struct alignas(8) OPNCCPCJHMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPNCCPCJHMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 BBBFDPIHEEP, ::EJDBOPAEDEO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::EJDBOPAEDEO&, ::System::Int32&))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, BBBFDPIHEEP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OPNCCPCJHMP DCFIBOLOHOC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OPNCCPCJHMP EIFONLCJOPG)
	{
		return ((::OPNCCPCJHMP(*)(::FlatBuffers::ByteBuffer*, ::OPNCCPCJHMP))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_DCFIBOLOHOC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OPNCCPCJHMP DCFIBOLOHOC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPNCCPCJHMP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_DCFIBOLOHOC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJDBOPAEDEO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJDBOPAEDEO&))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OPNCCPCJHMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPNCCPCJHMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPNCCPCJHMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
