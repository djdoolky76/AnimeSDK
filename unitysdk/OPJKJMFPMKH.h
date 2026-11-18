#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPJKJMFPMKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E630)
#define OPJKJMFPMKH_FOPNIEPPJAG_1_OFFSET UNITYSDK_OFFSET(0x1CD06340)
#define OPJKJMFPMKH_FOPNIEPPJAG_OFFSET UNITYSDK_OFFSET(0x1CD062E0)
#define OPJKJMFPMKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPJKJMFPMKH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OPJKJMFPMKH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E620)
#define OPJKJMFPMKH___INIT_OFFSET UNITYSDK_OFFSET(0x85E600)

inline static constexpr unsigned int OPJKJMFPMKH_TypeDefinitionIndex = 10629;

struct alignas(8) OPJKJMFPMKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJKJMFPMKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPJKJMFPMKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJKJMFPMKH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::OPJKJMFPMKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPJKJMFPMKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPJKJMFPMKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJKJMFPMKH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OPJKJMFPMKH FOPNIEPPJAG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OPJKJMFPMKH EIFONLCJOPG)
	{
		return ((::OPJKJMFPMKH(*)(::FlatBuffers::ByteBuffer*, ::OPJKJMFPMKH))((::PBYTE)hIl2Cpp + OPJKJMFPMKH_FOPNIEPPJAG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OPJKJMFPMKH FOPNIEPPJAG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPJKJMFPMKH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPJKJMFPMKH_FOPNIEPPJAG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
