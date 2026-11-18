#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JGHMNEMDCDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80AE10)
#define JGHMNEMDCDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGHMNEMDCDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JGHMNEMDCDH_KLFGIHLDLGO_1_OFFSET UNITYSDK_OFFSET(0x1B13AE30)
#define JGHMNEMDCDH_KLFGIHLDLGO_OFFSET UNITYSDK_OFFSET(0x1B13AD30)
#define JGHMNEMDCDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AE50)
#define JGHMNEMDCDH___INIT_OFFSET UNITYSDK_OFFSET(0x80ADF0)

inline static constexpr unsigned int JGHMNEMDCDH_TypeDefinitionIndex = 9434;

struct alignas(8) JGHMNEMDCDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHMNEMDCDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGHMNEMDCDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JGHMNEMDCDH KLFGIHLDLGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JGHMNEMDCDH EIFONLCJOPG)
	{
		return ((::JGHMNEMDCDH(*)(::FlatBuffers::ByteBuffer*, ::JGHMNEMDCDH))((::PBYTE)hIl2Cpp + JGHMNEMDCDH_KLFGIHLDLGO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHMNEMDCDH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JGHMNEMDCDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGHMNEMDCDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGHMNEMDCDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JGHMNEMDCDH KLFGIHLDLGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGHMNEMDCDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGHMNEMDCDH_KLFGIHLDLGO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHMNEMDCDH_PPOMNIFACOL_OFFSET))(this);
	}
};
