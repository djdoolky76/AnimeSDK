#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACPKIMMNBLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x760BA0)
#define ACPKIMMNBLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACPKIMMNBLH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACPKIMMNBLH_GMLNJPJGGML_1_OFFSET UNITYSDK_OFFSET(0x1571C500)
#define ACPKIMMNBLH_GMLNJPJGGML_OFFSET UNITYSDK_OFFSET(0x1571C490)
#define ACPKIMMNBLH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x760B90)
#define ACPKIMMNBLH___INIT_OFFSET UNITYSDK_OFFSET(0x760B70)

inline static constexpr unsigned int ACPKIMMNBLH_TypeDefinitionIndex = 9172;

struct alignas(8) ACPKIMMNBLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPKIMMNBLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACPKIMMNBLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPKIMMNBLH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ACPKIMMNBLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACPKIMMNBLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACPKIMMNBLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPKIMMNBLH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ACPKIMMNBLH GMLNJPJGGML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACPKIMMNBLH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACPKIMMNBLH_GMLNJPJGGML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ACPKIMMNBLH GMLNJPJGGML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACPKIMMNBLH EIFONLCJOPG)
	{
		return ((::ACPKIMMNBLH(*)(::FlatBuffers::ByteBuffer*, ::ACPKIMMNBLH))((::PBYTE)hIl2Cpp + ACPKIMMNBLH_GMLNJPJGGML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
