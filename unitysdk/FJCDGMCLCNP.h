#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OLDJPBIOPCO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJCDGMCLCNP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJCDGMCLCNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78A170)
#define FJCDGMCLCNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJCDGMCLCNP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJCDGMCLCNP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78A160)
#define FJCDGMCLCNP_OPEPMBCHKBC_1_OFFSET UNITYSDK_OFFSET(0x1663EDE0)
#define FJCDGMCLCNP_OPEPMBCHKBC_OFFSET UNITYSDK_OFFSET(0x1663ED70)
#define FJCDGMCLCNP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78A1B0)
#define FJCDGMCLCNP___INIT_OFFSET UNITYSDK_OFFSET(0x78A140)

inline static constexpr unsigned int FJCDGMCLCNP_TypeDefinitionIndex = 13836;

struct alignas(8) FJCDGMCLCNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJCDGMCLCNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OLDJPBIOPCO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLDJPBIOPCO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FJCDGMCLCNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJCDGMCLCNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OLDJPBIOPCO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLDJPBIOPCO&))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FJCDGMCLCNP OPEPMBCHKBC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJCDGMCLCNP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_OPEPMBCHKBC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FJCDGMCLCNP OPEPMBCHKBC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJCDGMCLCNP EIFONLCJOPG)
	{
		return ((::FJCDGMCLCNP(*)(::FlatBuffers::ByteBuffer*, ::FJCDGMCLCNP))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_OPEPMBCHKBC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCDGMCLCNP_PPOMNIFACOL_OFFSET))(this);
	}
};
