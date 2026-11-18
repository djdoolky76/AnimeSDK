#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFFGAGGMDCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJIAEGLMBMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OJIAEGLMBMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81ACE0)
#define OJIAEGLMBMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OJIAEGLMBMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OJIAEGLMBMA_NMDCCNOJEFP_1_OFFSET UNITYSDK_OFFSET(0x1BAB77D0)
#define OJIAEGLMBMA_NMDCCNOJEFP_OFFSET UNITYSDK_OFFSET(0x1BAB7730)
#define OJIAEGLMBMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AD20)
#define OJIAEGLMBMA___INIT_OFFSET UNITYSDK_OFFSET(0x81ACC0)

inline static constexpr unsigned int OJIAEGLMBMA_TypeDefinitionIndex = 14362;

struct alignas(8) OJIAEGLMBMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJIAEGLMBMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFFGAGGMDCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFFGAGGMDCB&))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OJIAEGLMBMA NMDCCNOJEFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OJIAEGLMBMA EIFONLCJOPG)
	{
		return ((::OJIAEGLMBMA(*)(::FlatBuffers::ByteBuffer*, ::OJIAEGLMBMA))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_NMDCCNOJEFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OJIAEGLMBMA NMDCCNOJEFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJIAEGLMBMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_NMDCCNOJEFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OJIAEGLMBMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OJIAEGLMBMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIAEGLMBMA_PPOMNIFACOL_OFFSET))(this);
	}
};
