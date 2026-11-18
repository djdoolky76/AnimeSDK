#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ANMCFGOEHJB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFKDIPCGBOC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFKDIPCGBOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC970)
#define BFKDIPCGBOC_CBBGLHPGFDG_1_OFFSET UNITYSDK_OFFSET(0x1775A2C0)
#define BFKDIPCGBOC_CBBGLHPGFDG_OFFSET UNITYSDK_OFFSET(0x1775A250)
#define BFKDIPCGBOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFKDIPCGBOC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFKDIPCGBOC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AC960)
#define BFKDIPCGBOC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC950)
#define BFKDIPCGBOC___INIT_OFFSET UNITYSDK_OFFSET(0x7AC930)

inline static constexpr unsigned int BFKDIPCGBOC_TypeDefinitionIndex = 14877;

struct alignas(8) BFKDIPCGBOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFKDIPCGBOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ANMCFGOEHJB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANMCFGOEHJB&))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ANMCFGOEHJB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ANMCFGOEHJB&, ::System::Int32&))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BFKDIPCGBOC CBBGLHPGFDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFKDIPCGBOC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_CBBGLHPGFDG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BFKDIPCGBOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFKDIPCGBOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BFKDIPCGBOC CBBGLHPGFDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFKDIPCGBOC EIFONLCJOPG)
	{
		return ((::BFKDIPCGBOC(*)(::FlatBuffers::ByteBuffer*, ::BFKDIPCGBOC))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_CBBGLHPGFDG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKDIPCGBOC_GHKKNCCLPAN_OFFSET))(this);
	}
};
