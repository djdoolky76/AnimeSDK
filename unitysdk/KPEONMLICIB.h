#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ECBPHDNCOLO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPEONMLICIB_AKMKFMLLAFI_1_OFFSET UNITYSDK_OFFSET(0x18BDE9B0)
#define KPEONMLICIB_AKMKFMLLAFI_OFFSET UNITYSDK_OFFSET(0x18BDE940)
#define KPEONMLICIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KPEONMLICIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5C80)
#define KPEONMLICIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPEONMLICIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KPEONMLICIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5C70)
#define KPEONMLICIB___INIT_OFFSET UNITYSDK_OFFSET(0x7D5C50)

inline static constexpr unsigned int KPEONMLICIB_TypeDefinitionIndex = 17641;

struct alignas(8) KPEONMLICIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEONMLICIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPEONMLICIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ECBPHDNCOLO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ECBPHDNCOLO&))((::PBYTE)hIl2Cpp + KPEONMLICIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEONMLICIB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KPEONMLICIB AKMKFMLLAFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPEONMLICIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPEONMLICIB_AKMKFMLLAFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KPEONMLICIB AKMKFMLLAFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KPEONMLICIB EIFONLCJOPG)
	{
		return ((::KPEONMLICIB(*)(::FlatBuffers::ByteBuffer*, ::KPEONMLICIB))((::PBYTE)hIl2Cpp + KPEONMLICIB_AKMKFMLLAFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEONMLICIB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KPEONMLICIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPEONMLICIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPEONMLICIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
