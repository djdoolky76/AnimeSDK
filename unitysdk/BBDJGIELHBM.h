#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DCLFHJJMOEA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBDJGIELHBM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BBDJGIELHBM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816420)
#define BBDJGIELHBM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBDJGIELHBM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBDJGIELHBM_JNIODBGGAMN_1_OFFSET UNITYSDK_OFFSET(0x1B98D070)
#define BBDJGIELHBM_JNIODBGGAMN_OFFSET UNITYSDK_OFFSET(0x1B98CFD0)
#define BBDJGIELHBM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816410)
#define BBDJGIELHBM___INIT_OFFSET UNITYSDK_OFFSET(0x8163F0)

inline static constexpr unsigned int BBDJGIELHBM_TypeDefinitionIndex = 17305;

struct alignas(8) BBDJGIELHBM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDJGIELHBM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBDJGIELHBM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BBDJGIELHBM JNIODBGGAMN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBDJGIELHBM EIFONLCJOPG)
	{
		return ((::BBDJGIELHBM(*)(::FlatBuffers::ByteBuffer*, ::BBDJGIELHBM))((::PBYTE)hIl2Cpp + BBDJGIELHBM_JNIODBGGAMN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BBDJGIELHBM JNIODBGGAMN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBDJGIELHBM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBDJGIELHBM_JNIODBGGAMN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDJGIELHBM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DCLFHJJMOEA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DCLFHJJMOEA&))((::PBYTE)hIl2Cpp + BBDJGIELHBM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDJGIELHBM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BBDJGIELHBM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBDJGIELHBM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBDJGIELHBM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
