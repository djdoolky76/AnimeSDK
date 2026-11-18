#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FDPLLNPBIEO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLLIMJEDGED_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLLIMJEDGED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814610)
#define HLLIMJEDGED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLLIMJEDGED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLLIMJEDGED_IBHOIFKAJKK_1_OFFSET UNITYSDK_OFFSET(0x1B8809F0)
#define HLLIMJEDGED_IBHOIFKAJKK_OFFSET UNITYSDK_OFFSET(0x1B880950)
#define HLLIMJEDGED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814600)
#define HLLIMJEDGED___INIT_OFFSET UNITYSDK_OFFSET(0x8145E0)

inline static constexpr unsigned int HLLIMJEDGED_TypeDefinitionIndex = 10977;

struct alignas(8) HLLIMJEDGED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLIMJEDGED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLLIMJEDGED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLIMJEDGED_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HLLIMJEDGED IBHOIFKAJKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLLIMJEDGED EIFONLCJOPG)
	{
		return ((::HLLIMJEDGED(*)(::FlatBuffers::ByteBuffer*, ::HLLIMJEDGED))((::PBYTE)hIl2Cpp + HLLIMJEDGED_IBHOIFKAJKK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HLLIMJEDGED IBHOIFKAJKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLLIMJEDGED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLLIMJEDGED_IBHOIFKAJKK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HLLIMJEDGED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLLIMJEDGED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLLIMJEDGED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FDPLLNPBIEO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDPLLNPBIEO&))((::PBYTE)hIl2Cpp + HLLIMJEDGED_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLIMJEDGED_GHKKNCCLPAN_OFFSET))(this);
	}
};
