#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MDGEFJOELCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJIBHGILAMD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJIBHGILAMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808570)
#define FJIBHGILAMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJIBHGILAMD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJIBHGILAMD_IIHDBBIIOFG_1_OFFSET UNITYSDK_OFFSET(0x1ADE6970)
#define FJIBHGILAMD_IIHDBBIIOFG_OFFSET UNITYSDK_OFFSET(0x1ADE68D0)
#define FJIBHGILAMD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8085B0)
#define FJIBHGILAMD___INIT_OFFSET UNITYSDK_OFFSET(0x808550)

inline static constexpr unsigned int FJIBHGILAMD_TypeDefinitionIndex = 16501;

struct alignas(8) FJIBHGILAMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIBHGILAMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJIBHGILAMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIBHGILAMD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FJIBHGILAMD IIHDBBIIOFG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJIBHGILAMD EIFONLCJOPG)
	{
		return ((::FJIBHGILAMD(*)(::FlatBuffers::ByteBuffer*, ::FJIBHGILAMD))((::PBYTE)hIl2Cpp + FJIBHGILAMD_IIHDBBIIOFG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FJIBHGILAMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJIBHGILAMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJIBHGILAMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FJIBHGILAMD IIHDBBIIOFG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJIBHGILAMD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJIBHGILAMD_IIHDBBIIOFG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MDGEFJOELCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MDGEFJOELCC&))((::PBYTE)hIl2Cpp + FJIBHGILAMD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIBHGILAMD_PPOMNIFACOL_OFFSET))(this);
	}
};
