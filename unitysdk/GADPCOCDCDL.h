#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OIBBHJHAPGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GADPCOCDCDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GADPCOCDCDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811AD0)
#define GADPCOCDCDL_EMBFNBIGMJI_1_OFFSET UNITYSDK_OFFSET(0x1B7B37C0)
#define GADPCOCDCDL_EMBFNBIGMJI_OFFSET UNITYSDK_OFFSET(0x1B7B3750)
#define GADPCOCDCDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GADPCOCDCDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GADPCOCDCDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811AC0)
#define GADPCOCDCDL___INIT_OFFSET UNITYSDK_OFFSET(0x811AA0)

inline static constexpr unsigned int GADPCOCDCDL_TypeDefinitionIndex = 14927;

struct alignas(8) GADPCOCDCDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADPCOCDCDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GADPCOCDCDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OIBBHJHAPGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OIBBHJHAPGI&))((::PBYTE)hIl2Cpp + GADPCOCDCDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GADPCOCDCDL EMBFNBIGMJI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GADPCOCDCDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GADPCOCDCDL_EMBFNBIGMJI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADPCOCDCDL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADPCOCDCDL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GADPCOCDCDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GADPCOCDCDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GADPCOCDCDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GADPCOCDCDL EMBFNBIGMJI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GADPCOCDCDL EIFONLCJOPG)
	{
		return ((::GADPCOCDCDL(*)(::FlatBuffers::ByteBuffer*, ::GADPCOCDCDL))((::PBYTE)hIl2Cpp + GADPCOCDCDL_EMBFNBIGMJI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
