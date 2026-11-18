#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOIKGHEODAI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDHEKGIOJMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MDHEKGIOJMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8136B0)
#define MDHEKGIOJMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDHEKGIOJMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MDHEKGIOJMG_KGGNMKHOBLL_1_OFFSET UNITYSDK_OFFSET(0x1B7F7210)
#define MDHEKGIOJMG_KGGNMKHOBLL_OFFSET UNITYSDK_OFFSET(0x1B7F71A0)
#define MDHEKGIOJMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8136A0)
#define MDHEKGIOJMG___INIT_OFFSET UNITYSDK_OFFSET(0x813680)

inline static constexpr unsigned int MDHEKGIOJMG_TypeDefinitionIndex = 9532;

struct alignas(8) MDHEKGIOJMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDHEKGIOJMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MDHEKGIOJMG KGGNMKHOBLL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDHEKGIOJMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_KGGNMKHOBLL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOIKGHEODAI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOIKGHEODAI&))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MDHEKGIOJMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDHEKGIOJMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MDHEKGIOJMG KGGNMKHOBLL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MDHEKGIOJMG EIFONLCJOPG)
	{
		return ((::MDHEKGIOJMG(*)(::FlatBuffers::ByteBuffer*, ::MDHEKGIOJMG))((::PBYTE)hIl2Cpp + MDHEKGIOJMG_KGGNMKHOBLL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
