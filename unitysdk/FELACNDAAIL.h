#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FELACNDAAIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809770)
#define FELACNDAAIL_FLFBGGPADJD_1_OFFSET UNITYSDK_OFFSET(0x1B1040E0)
#define FELACNDAAIL_FLFBGGPADJD_OFFSET UNITYSDK_OFFSET(0x1B104080)
#define FELACNDAAIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FELACNDAAIL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FELACNDAAIL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8097B0)
#define FELACNDAAIL___INIT_OFFSET UNITYSDK_OFFSET(0x809750)

inline static constexpr unsigned int FELACNDAAIL_TypeDefinitionIndex = 9878;

struct alignas(8) FELACNDAAIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FELACNDAAIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FELACNDAAIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FELACNDAAIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FELACNDAAIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FELACNDAAIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FELACNDAAIL FLFBGGPADJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FELACNDAAIL EIFONLCJOPG)
	{
		return ((::FELACNDAAIL(*)(::FlatBuffers::ByteBuffer*, ::FELACNDAAIL))((::PBYTE)hIl2Cpp + FELACNDAAIL_FLFBGGPADJD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FELACNDAAIL FLFBGGPADJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FELACNDAAIL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FELACNDAAIL_FLFBGGPADJD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FELACNDAAIL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FELACNDAAIL_PPOMNIFACOL_OFFSET))(this);
	}
};
