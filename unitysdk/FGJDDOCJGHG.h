#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGJDDOCJGHG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F79E0)
#define FGJDDOCJGHG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGJDDOCJGHG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGJDDOCJGHG_JLPAMAJDNLJ_1_OFFSET UNITYSDK_OFFSET(0x1A4C1AA0)
#define FGJDDOCJGHG_JLPAMAJDNLJ_OFFSET UNITYSDK_OFFSET(0x1A4C1A30)
#define FGJDDOCJGHG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F79D0)
#define FGJDDOCJGHG___INIT_OFFSET UNITYSDK_OFFSET(0x7F79B0)

inline static constexpr unsigned int FGJDDOCJGHG_TypeDefinitionIndex = 9723;

struct alignas(8) FGJDDOCJGHG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGJDDOCJGHG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGJDDOCJGHG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FGJDDOCJGHG JLPAMAJDNLJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGJDDOCJGHG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGJDDOCJGHG_JLPAMAJDNLJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGJDDOCJGHG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGJDDOCJGHG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FGJDDOCJGHG JLPAMAJDNLJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGJDDOCJGHG EIFONLCJOPG)
	{
		return ((::FGJDDOCJGHG(*)(::FlatBuffers::ByteBuffer*, ::FGJDDOCJGHG))((::PBYTE)hIl2Cpp + FGJDDOCJGHG_JLPAMAJDNLJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FGJDDOCJGHG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGJDDOCJGHG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGJDDOCJGHG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
