#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KFHNHLDMFBH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCHDKBIJONM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCHDKBIJONM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5F50)
#define LCHDKBIJONM_GECMIEGLHHC_1_OFFSET UNITYSDK_OFFSET(0x1958B6E0)
#define LCHDKBIJONM_GECMIEGLHHC_OFFSET UNITYSDK_OFFSET(0x1958B5E0)
#define LCHDKBIJONM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCHDKBIJONM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCHDKBIJONM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5F40)
#define LCHDKBIJONM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5F90)
#define LCHDKBIJONM___INIT_OFFSET UNITYSDK_OFFSET(0x7E5F20)

inline static constexpr unsigned int LCHDKBIJONM_TypeDefinitionIndex = 12072;

struct alignas(8) LCHDKBIJONM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHDKBIJONM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCHDKBIJONM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KFHNHLDMFBH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KFHNHLDMFBH&))((::PBYTE)hIl2Cpp + LCHDKBIJONM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 FPCEGDFJDPO, ::System::Int32 DADIDBMHLOI, ::KFHNHLDMFBH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::KFHNHLDMFBH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCHDKBIJONM_LLGCOCLACNA_OFFSET))(this, FPCEGDFJDPO, DADIDBMHLOI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LCHDKBIJONM GECMIEGLHHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCHDKBIJONM EIFONLCJOPG)
	{
		return ((::LCHDKBIJONM(*)(::FlatBuffers::ByteBuffer*, ::LCHDKBIJONM))((::PBYTE)hIl2Cpp + LCHDKBIJONM_GECMIEGLHHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LCHDKBIJONM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCHDKBIJONM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCHDKBIJONM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHDKBIJONM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHDKBIJONM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LCHDKBIJONM GECMIEGLHHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCHDKBIJONM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCHDKBIJONM_GECMIEGLHHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
