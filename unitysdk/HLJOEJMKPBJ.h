#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBLMALJFFIJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLJOEJMKPBJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLJOEJMKPBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF060)
#define HLJOEJMKPBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLJOEJMKPBJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLJOEJMKPBJ_GMLCLFGFMFO_1_OFFSET UNITYSDK_OFFSET(0x19344C80)
#define HLJOEJMKPBJ_GMLCLFGFMFO_OFFSET UNITYSDK_OFFSET(0x19344C10)
#define HLJOEJMKPBJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF0A0)
#define HLJOEJMKPBJ___INIT_OFFSET UNITYSDK_OFFSET(0x7DF040)

inline static constexpr unsigned int HLJOEJMKPBJ_TypeDefinitionIndex = 17102;

struct alignas(8) HLJOEJMKPBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HLJOEJMKPBJ GMLCLFGFMFO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLJOEJMKPBJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_GMLCLFGFMFO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HLJOEJMKPBJ GMLCLFGFMFO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLJOEJMKPBJ EIFONLCJOPG)
	{
		return ((::HLJOEJMKPBJ(*)(::FlatBuffers::ByteBuffer*, ::HLJOEJMKPBJ))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_GMLCLFGFMFO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HLJOEJMKPBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLJOEJMKPBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBLMALJFFIJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBLMALJFFIJ&))((::PBYTE)hIl2Cpp + HLJOEJMKPBJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
