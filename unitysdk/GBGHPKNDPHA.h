#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBGHPKNDPHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7793D0)
#define GBGHPKNDPHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBGHPKNDPHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GBGHPKNDPHA_GHNLOJFEFKJ_1_OFFSET UNITYSDK_OFFSET(0x160E2040)
#define GBGHPKNDPHA_GHNLOJFEFKJ_OFFSET UNITYSDK_OFFSET(0x160E1FD0)
#define GBGHPKNDPHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779410)
#define GBGHPKNDPHA___INIT_OFFSET UNITYSDK_OFFSET(0x7793B0)

inline static constexpr unsigned int GBGHPKNDPHA_TypeDefinitionIndex = 16509;

struct alignas(8) GBGHPKNDPHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGHPKNDPHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBGHPKNDPHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GBGHPKNDPHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBGHPKNDPHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBGHPKNDPHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GBGHPKNDPHA GHNLOJFEFKJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBGHPKNDPHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBGHPKNDPHA_GHNLOJFEFKJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGHPKNDPHA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGHPKNDPHA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GBGHPKNDPHA GHNLOJFEFKJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GBGHPKNDPHA EIFONLCJOPG)
	{
		return ((::GBGHPKNDPHA(*)(::FlatBuffers::ByteBuffer*, ::GBGHPKNDPHA))((::PBYTE)hIl2Cpp + GBGHPKNDPHA_GHNLOJFEFKJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
