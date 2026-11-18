#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOEDIKDFEPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816850)
#define BOEDIKDFEPJ_EPPJINKIBFO_1_OFFSET UNITYSDK_OFFSET(0x1B9945D0)
#define BOEDIKDFEPJ_EPPJINKIBFO_OFFSET UNITYSDK_OFFSET(0x1B994560)
#define BOEDIKDFEPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOEDIKDFEPJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BOEDIKDFEPJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816840)
#define BOEDIKDFEPJ___INIT_OFFSET UNITYSDK_OFFSET(0x816820)

inline static constexpr unsigned int BOEDIKDFEPJ_TypeDefinitionIndex = 13641;

struct alignas(8) BOEDIKDFEPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BOEDIKDFEPJ EPPJINKIBFO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOEDIKDFEPJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ_EPPJINKIBFO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BOEDIKDFEPJ EPPJINKIBFO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BOEDIKDFEPJ EIFONLCJOPG)
	{
		return ((::BOEDIKDFEPJ(*)(::FlatBuffers::ByteBuffer*, ::BOEDIKDFEPJ))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ_EPPJINKIBFO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BOEDIKDFEPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOEDIKDFEPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOEDIKDFEPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
