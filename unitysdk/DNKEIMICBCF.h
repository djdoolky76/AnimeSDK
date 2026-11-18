#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLANDAGNIJK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNKEIMICBCF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DNKEIMICBCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807A30)
#define DNKEIMICBCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNKEIMICBCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DNKEIMICBCF_PCLJLDEBFLD_1_OFFSET UNITYSDK_OFFSET(0x1ADCC760)
#define DNKEIMICBCF_PCLJLDEBFLD_OFFSET UNITYSDK_OFFSET(0x1ADCC660)
#define DNKEIMICBCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807A20)
#define DNKEIMICBCF___INIT_OFFSET UNITYSDK_OFFSET(0x807A00)

inline static constexpr unsigned int DNKEIMICBCF_TypeDefinitionIndex = 15166;

struct alignas(8) DNKEIMICBCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEIMICBCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNKEIMICBCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DNKEIMICBCF PCLJLDEBFLD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DNKEIMICBCF EIFONLCJOPG)
	{
		return ((::DNKEIMICBCF(*)(::FlatBuffers::ByteBuffer*, ::DNKEIMICBCF))((::PBYTE)hIl2Cpp + DNKEIMICBCF_PCLJLDEBFLD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEIMICBCF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKEIMICBCF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DNKEIMICBCF PCLJLDEBFLD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNKEIMICBCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNKEIMICBCF_PCLJLDEBFLD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DNKEIMICBCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNKEIMICBCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNKEIMICBCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLANDAGNIJK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLANDAGNIJK&))((::PBYTE)hIl2Cpp + DNKEIMICBCF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
