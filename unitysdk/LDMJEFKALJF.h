#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDMJEFKALJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5EB0)
#define LDMJEFKALJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDMJEFKALJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LDMJEFKALJF_IOOBOIAPLNL_1_OFFSET UNITYSDK_OFFSET(0x18BE2200)
#define LDMJEFKALJF_IOOBOIAPLNL_OFFSET UNITYSDK_OFFSET(0x18BE2190)
#define LDMJEFKALJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5EF0)
#define LDMJEFKALJF___INIT_OFFSET UNITYSDK_OFFSET(0x7D5E90)

inline static constexpr unsigned int LDMJEFKALJF_TypeDefinitionIndex = 11794;

struct alignas(8) LDMJEFKALJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMJEFKALJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDMJEFKALJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LDMJEFKALJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDMJEFKALJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDMJEFKALJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LDMJEFKALJF IOOBOIAPLNL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDMJEFKALJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDMJEFKALJF_IOOBOIAPLNL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMJEFKALJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMJEFKALJF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LDMJEFKALJF IOOBOIAPLNL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LDMJEFKALJF EIFONLCJOPG)
	{
		return ((::LDMJEFKALJF(*)(::FlatBuffers::ByteBuffer*, ::LDMJEFKALJF))((::PBYTE)hIl2Cpp + LDMJEFKALJF_IOOBOIAPLNL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
