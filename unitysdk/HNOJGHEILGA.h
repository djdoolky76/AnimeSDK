#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNOJGHEILGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812270)
#define HNOJGHEILGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNOJGHEILGA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNOJGHEILGA_PIEEEGAKNLN_1_OFFSET UNITYSDK_OFFSET(0x1B7C7F50)
#define HNOJGHEILGA_PIEEEGAKNLN_OFFSET UNITYSDK_OFFSET(0x1B7C7EB0)
#define HNOJGHEILGA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812260)
#define HNOJGHEILGA___INIT_OFFSET UNITYSDK_OFFSET(0x812240)

inline static constexpr unsigned int HNOJGHEILGA_TypeDefinitionIndex = 17161;

struct alignas(8) HNOJGHEILGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGHEILGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNOJGHEILGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGHEILGA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HNOJGHEILGA PIEEEGAKNLN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNOJGHEILGA EIFONLCJOPG)
	{
		return ((::HNOJGHEILGA(*)(::FlatBuffers::ByteBuffer*, ::HNOJGHEILGA))((::PBYTE)hIl2Cpp + HNOJGHEILGA_PIEEEGAKNLN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HNOJGHEILGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNOJGHEILGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNOJGHEILGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGHEILGA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HNOJGHEILGA PIEEEGAKNLN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNOJGHEILGA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNOJGHEILGA_PIEEEGAKNLN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
