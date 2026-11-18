#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIBFLAMGDBJ_AMAEMLEPFDC_1_OFFSET UNITYSDK_OFFSET(0x1C507700)
#define AIBFLAMGDBJ_AMAEMLEPFDC_OFFSET UNITYSDK_OFFSET(0x1C507600)
#define AIBFLAMGDBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x825820)
#define AIBFLAMGDBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIBFLAMGDBJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIBFLAMGDBJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x825810)
#define AIBFLAMGDBJ___INIT_OFFSET UNITYSDK_OFFSET(0x8257F0)

inline static constexpr unsigned int AIBFLAMGDBJ_TypeDefinitionIndex = 15886;

struct alignas(8) AIBFLAMGDBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AIBFLAMGDBJ AMAEMLEPFDC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIBFLAMGDBJ EIFONLCJOPG)
	{
		return ((::AIBFLAMGDBJ(*)(::FlatBuffers::ByteBuffer*, ::AIBFLAMGDBJ))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ_AMAEMLEPFDC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AIBFLAMGDBJ AMAEMLEPFDC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIBFLAMGDBJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ_AMAEMLEPFDC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AIBFLAMGDBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIBFLAMGDBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIBFLAMGDBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
