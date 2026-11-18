#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILMBCKNKFAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A8E0)
#define ILMBCKNKFAC_BNGOFKLLGIE_1_OFFSET UNITYSDK_OFFSET(0x1B131BE0)
#define ILMBCKNKFAC_BNGOFKLLGIE_OFFSET UNITYSDK_OFFSET(0x1B131AE0)
#define ILMBCKNKFAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILMBCKNKFAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILMBCKNKFAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A8D0)
#define ILMBCKNKFAC___INIT_OFFSET UNITYSDK_OFFSET(0x80A8B0)

inline static constexpr unsigned int ILMBCKNKFAC_TypeDefinitionIndex = 17169;

struct alignas(8) ILMBCKNKFAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMBCKNKFAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILMBCKNKFAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ILMBCKNKFAC BNGOFKLLGIE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILMBCKNKFAC EIFONLCJOPG)
	{
		return ((::ILMBCKNKFAC(*)(::FlatBuffers::ByteBuffer*, ::ILMBCKNKFAC))((::PBYTE)hIl2Cpp + ILMBCKNKFAC_BNGOFKLLGIE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMBCKNKFAC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILMBCKNKFAC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ILMBCKNKFAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILMBCKNKFAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILMBCKNKFAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ILMBCKNKFAC BNGOFKLLGIE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILMBCKNKFAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILMBCKNKFAC_BNGOFKLLGIE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
