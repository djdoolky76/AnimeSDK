#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LBJJOGLOPPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIPAIKPCOMC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HIPAIKPCOMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7570A0)
#define HIPAIKPCOMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HIPAIKPCOMC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HIPAIKPCOMC_IJFILOMIAHK_1_OFFSET UNITYSDK_OFFSET(0x152DC750)
#define HIPAIKPCOMC_IJFILOMIAHK_OFFSET UNITYSDK_OFFSET(0x152DC6E0)
#define HIPAIKPCOMC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x757090)
#define HIPAIKPCOMC___INIT_OFFSET UNITYSDK_OFFSET(0x757070)

inline static constexpr unsigned int HIPAIKPCOMC_TypeDefinitionIndex = 16235;

struct alignas(8) HIPAIKPCOMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIPAIKPCOMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HIPAIKPCOMC IJFILOMIAHK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIPAIKPCOMC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_IJFILOMIAHK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HIPAIKPCOMC IJFILOMIAHK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HIPAIKPCOMC EIFONLCJOPG)
	{
		return ((::HIPAIKPCOMC(*)(::FlatBuffers::ByteBuffer*, ::HIPAIKPCOMC))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_IJFILOMIAHK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LBJJOGLOPPF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBJJOGLOPPF&))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HIPAIKPCOMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIPAIKPCOMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIPAIKPCOMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
