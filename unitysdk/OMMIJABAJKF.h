#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMMIJABAJKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85E4D0)
#define OMMIJABAJKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMMIJABAJKF_GFHCDEFGOGB_1_OFFSET UNITYSDK_OFFSET(0x1CD02A80)
#define OMMIJABAJKF_GFHCDEFGOGB_OFFSET UNITYSDK_OFFSET(0x1CD02A20)
#define OMMIJABAJKF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OMMIJABAJKF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85E510)
#define OMMIJABAJKF___INIT_OFFSET UNITYSDK_OFFSET(0x85E4B0)

inline static constexpr unsigned int OMMIJABAJKF_TypeDefinitionIndex = 11400;

struct alignas(8) OMMIJABAJKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMIJABAJKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMMIJABAJKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMIJABAJKF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OMMIJABAJKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMMIJABAJKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMMIJABAJKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMIJABAJKF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OMMIJABAJKF GFHCDEFGOGB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OMMIJABAJKF EIFONLCJOPG)
	{
		return ((::OMMIJABAJKF(*)(::FlatBuffers::ByteBuffer*, ::OMMIJABAJKF))((::PBYTE)hIl2Cpp + OMMIJABAJKF_GFHCDEFGOGB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OMMIJABAJKF GFHCDEFGOGB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMMIJABAJKF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMMIJABAJKF_GFHCDEFGOGB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
