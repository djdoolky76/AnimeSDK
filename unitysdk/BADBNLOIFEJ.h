#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BADBNLOIFEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1700)
#define BADBNLOIFEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BADBNLOIFEJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BADBNLOIFEJ_ODNDDNBIMHJ_1_OFFSET UNITYSDK_OFFSET(0x17A74B10)
#define BADBNLOIFEJ_ODNDDNBIMHJ_OFFSET UNITYSDK_OFFSET(0x17A74AA0)
#define BADBNLOIFEJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1740)
#define BADBNLOIFEJ___INIT_OFFSET UNITYSDK_OFFSET(0x7B16E0)

inline static constexpr unsigned int BADBNLOIFEJ_TypeDefinitionIndex = 9386;

struct alignas(8) BADBNLOIFEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBNLOIFEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BADBNLOIFEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BADBNLOIFEJ ODNDDNBIMHJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BADBNLOIFEJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BADBNLOIFEJ_ODNDDNBIMHJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBNLOIFEJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BADBNLOIFEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BADBNLOIFEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BADBNLOIFEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBNLOIFEJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BADBNLOIFEJ ODNDDNBIMHJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BADBNLOIFEJ EIFONLCJOPG)
	{
		return ((::BADBNLOIFEJ(*)(::FlatBuffers::ByteBuffer*, ::BADBNLOIFEJ))((::PBYTE)hIl2Cpp + BADBNLOIFEJ_ODNDDNBIMHJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
