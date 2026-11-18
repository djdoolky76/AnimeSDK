#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IJDKELOLEMD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKPFCNPCACC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKPFCNPCACC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD0A0)
#define CKPFCNPCACC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKPFCNPCACC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKPFCNPCACC_NIAFOKKJIHJ_1_OFFSET UNITYSDK_OFFSET(0x17771B20)
#define CKPFCNPCACC_NIAFOKKJIHJ_OFFSET UNITYSDK_OFFSET(0x17771980)
#define CKPFCNPCACC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD090)
#define CKPFCNPCACC___INIT_OFFSET UNITYSDK_OFFSET(0x7AD070)

inline static constexpr unsigned int CKPFCNPCACC_TypeDefinitionIndex = 12249;

struct alignas(8) CKPFCNPCACC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPFCNPCACC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKPFCNPCACC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CKPFCNPCACC NIAFOKKJIHJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKPFCNPCACC EIFONLCJOPG)
	{
		return ((::CKPFCNPCACC(*)(::FlatBuffers::ByteBuffer*, ::CKPFCNPCACC))((::PBYTE)hIl2Cpp + CKPFCNPCACC_NIAFOKKJIHJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPFCNPCACC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPFCNPCACC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IJDKELOLEMD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IJDKELOLEMD&))((::PBYTE)hIl2Cpp + CKPFCNPCACC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CKPFCNPCACC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKPFCNPCACC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKPFCNPCACC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CKPFCNPCACC NIAFOKKJIHJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKPFCNPCACC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKPFCNPCACC_NIAFOKKJIHJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
