#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INJJNCEMDEO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGLOEEPCEFE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGLOEEPCEFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1D90)
#define AGLOEEPCEFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGLOEEPCEFE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGLOEEPCEFE_HHPJDGNKHJO_1_OFFSET UNITYSDK_OFFSET(0x194E9D40)
#define AGLOEEPCEFE_HHPJDGNKHJO_OFFSET UNITYSDK_OFFSET(0x194E9C80)
#define AGLOEEPCEFE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1DD0)
#define AGLOEEPCEFE___INIT_OFFSET UNITYSDK_OFFSET(0x7E1D70)

inline static constexpr unsigned int AGLOEEPCEFE_TypeDefinitionIndex = 13811;

struct alignas(8) AGLOEEPCEFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGLOEEPCEFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AGLOEEPCEFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGLOEEPCEFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AGLOEEPCEFE HHPJDGNKHJO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGLOEEPCEFE EIFONLCJOPG)
	{
		return ((::AGLOEEPCEFE(*)(::FlatBuffers::ByteBuffer*, ::AGLOEEPCEFE))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_HHPJDGNKHJO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AGLOEEPCEFE HHPJDGNKHJO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGLOEEPCEFE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_HHPJDGNKHJO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INJJNCEMDEO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INJJNCEMDEO&))((::PBYTE)hIl2Cpp + AGLOEEPCEFE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
