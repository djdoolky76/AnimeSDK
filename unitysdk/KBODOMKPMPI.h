#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CEOHLDEKPHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBODOMKPMPI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KBODOMKPMPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EA70)
#define KBODOMKPMPI_BMNJJMKPJPG_1_OFFSET UNITYSDK_OFFSET(0x1B4FF350)
#define KBODOMKPMPI_BMNJJMKPJPG_OFFSET UNITYSDK_OFFSET(0x1B4FF2E0)
#define KBODOMKPMPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBODOMKPMPI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KBODOMKPMPI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EA60)
#define KBODOMKPMPI___INIT_OFFSET UNITYSDK_OFFSET(0x80EA40)

inline static constexpr unsigned int KBODOMKPMPI_TypeDefinitionIndex = 13569;

struct alignas(8) KBODOMKPMPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBODOMKPMPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBODOMKPMPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBODOMKPMPI BMNJJMKPJPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBODOMKPMPI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBODOMKPMPI_BMNJJMKPJPG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBODOMKPMPI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBODOMKPMPI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CEOHLDEKPHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CEOHLDEKPHN&))((::PBYTE)hIl2Cpp + KBODOMKPMPI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KBODOMKPMPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBODOMKPMPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBODOMKPMPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KBODOMKPMPI BMNJJMKPJPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KBODOMKPMPI EIFONLCJOPG)
	{
		return ((::KBODOMKPMPI(*)(::FlatBuffers::ByteBuffer*, ::KBODOMKPMPI))((::PBYTE)hIl2Cpp + KBODOMKPMPI_BMNJJMKPJPG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
