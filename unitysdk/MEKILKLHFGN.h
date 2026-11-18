#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OPEMFJPDHGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEKILKLHFGN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEKILKLHFGN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E57E0)
#define MEKILKLHFGN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEKILKLHFGN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEKILKLHFGN_IHPNEEHNGOD_1_OFFSET UNITYSDK_OFFSET(0x19576070)
#define MEKILKLHFGN_IHPNEEHNGOD_OFFSET UNITYSDK_OFFSET(0x19576000)
#define MEKILKLHFGN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5820)
#define MEKILKLHFGN___INIT_OFFSET UNITYSDK_OFFSET(0x7E57C0)

inline static constexpr unsigned int MEKILKLHFGN_TypeDefinitionIndex = 11582;

struct alignas(8) MEKILKLHFGN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKILKLHFGN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEKILKLHFGN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MEKILKLHFGN IHPNEEHNGOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEKILKLHFGN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEKILKLHFGN_IHPNEEHNGOD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MEKILKLHFGN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEKILKLHFGN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEKILKLHFGN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKILKLHFGN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MEKILKLHFGN IHPNEEHNGOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEKILKLHFGN EIFONLCJOPG)
	{
		return ((::MEKILKLHFGN(*)(::FlatBuffers::ByteBuffer*, ::MEKILKLHFGN))((::PBYTE)hIl2Cpp + MEKILKLHFGN_IHPNEEHNGOD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKILKLHFGN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OPEMFJPDHGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OPEMFJPDHGD&))((::PBYTE)hIl2Cpp + MEKILKLHFGN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
