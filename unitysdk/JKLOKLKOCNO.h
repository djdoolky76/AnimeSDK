#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKLOKLKOCNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E880)
#define JKLOKLKOCNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKLOKLKOCNO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKLOKLKOCNO_HPKIEMLFDLO_1_OFFSET UNITYSDK_OFFSET(0x1B4FB620)
#define JKLOKLKOCNO_HPKIEMLFDLO_OFFSET UNITYSDK_OFFSET(0x1B4FB5B0)
#define JKLOKLKOCNO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E8C0)
#define JKLOKLKOCNO___INIT_OFFSET UNITYSDK_OFFSET(0x80E860)

inline static constexpr unsigned int JKLOKLKOCNO_TypeDefinitionIndex = 11826;

struct alignas(8) JKLOKLKOCNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLOKLKOCNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKLOKLKOCNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JKLOKLKOCNO HPKIEMLFDLO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKLOKLKOCNO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKLOKLKOCNO_HPKIEMLFDLO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JKLOKLKOCNO HPKIEMLFDLO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKLOKLKOCNO EIFONLCJOPG)
	{
		return ((::JKLOKLKOCNO(*)(::FlatBuffers::ByteBuffer*, ::JKLOKLKOCNO))((::PBYTE)hIl2Cpp + JKLOKLKOCNO_HPKIEMLFDLO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JKLOKLKOCNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKLOKLKOCNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKLOKLKOCNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLOKLKOCNO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLOKLKOCNO_GHKKNCCLPAN_OFFSET))(this);
	}
};
