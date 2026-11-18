#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLEEEEAMKIL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMHEMEDPMDB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NMHEMEDPMDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A780)
#define NMHEMEDPMDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMHEMEDPMDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NMHEMEDPMDB_HCOBKCJHNCB_1_OFFSET UNITYSDK_OFFSET(0x1BAAAAC0)
#define NMHEMEDPMDB_HCOBKCJHNCB_OFFSET UNITYSDK_OFFSET(0x1BAAAA50)
#define NMHEMEDPMDB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A770)
#define NMHEMEDPMDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A760)
#define NMHEMEDPMDB___INIT_OFFSET UNITYSDK_OFFSET(0x81A740)

inline static constexpr unsigned int NMHEMEDPMDB_TypeDefinitionIndex = 10515;

struct alignas(8) NMHEMEDPMDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMHEMEDPMDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLEEEEAMKIL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLEEEEAMKIL&))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NMHEMEDPMDB HCOBKCJHNCB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMHEMEDPMDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_HCOBKCJHNCB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLEEEEAMKIL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLEEEEAMKIL&, ::System::Int32&))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NMHEMEDPMDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMHEMEDPMDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NMHEMEDPMDB HCOBKCJHNCB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NMHEMEDPMDB EIFONLCJOPG)
	{
		return ((::NMHEMEDPMDB(*)(::FlatBuffers::ByteBuffer*, ::NMHEMEDPMDB))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_HCOBKCJHNCB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHEMEDPMDB_GHKKNCCLPAN_OFFSET))(this);
	}
};
