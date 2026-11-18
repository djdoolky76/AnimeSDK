#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AOPFLICJCBC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ALFOHEKOMKM_APACFGJEKPE_1_OFFSET UNITYSDK_OFFSET(0x1A570110)
#define ALFOHEKOMKM_APACFGJEKPE_OFFSET UNITYSDK_OFFSET(0x1A5700A0)
#define ALFOHEKOMKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ALFOHEKOMKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAE50)
#define ALFOHEKOMKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALFOHEKOMKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ALFOHEKOMKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAE40)
#define ALFOHEKOMKM___INIT_OFFSET UNITYSDK_OFFSET(0x7FAE20)

inline static constexpr unsigned int ALFOHEKOMKM_TypeDefinitionIndex = 17510;

struct alignas(8) ALFOHEKOMKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALFOHEKOMKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ALFOHEKOMKM APACFGJEKPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALFOHEKOMKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_APACFGJEKPE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ALFOHEKOMKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALFOHEKOMKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AOPFLICJCBC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AOPFLICJCBC&))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ALFOHEKOMKM APACFGJEKPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ALFOHEKOMKM EIFONLCJOPG)
	{
		return ((::ALFOHEKOMKM(*)(::FlatBuffers::ByteBuffer*, ::ALFOHEKOMKM))((::PBYTE)hIl2Cpp + ALFOHEKOMKM_APACFGJEKPE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
