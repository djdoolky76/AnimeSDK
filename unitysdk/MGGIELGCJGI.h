#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGGIELGCJGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A59F0)
#define MGGIELGCJGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGGIELGCJGI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGGIELGCJGI_IGCCPLPAHGD_1_OFFSET UNITYSDK_OFFSET(0x17344890)
#define MGGIELGCJGI_IGCCPLPAHGD_OFFSET UNITYSDK_OFFSET(0x17344790)
#define MGGIELGCJGI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A59E0)
#define MGGIELGCJGI___INIT_OFFSET UNITYSDK_OFFSET(0x7A59C0)

inline static constexpr unsigned int MGGIELGCJGI_TypeDefinitionIndex = 15555;

struct alignas(8) MGGIELGCJGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGIELGCJGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGGIELGCJGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MGGIELGCJGI IGCCPLPAHGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGGIELGCJGI EIFONLCJOPG)
	{
		return ((::MGGIELGCJGI(*)(::FlatBuffers::ByteBuffer*, ::MGGIELGCJGI))((::PBYTE)hIl2Cpp + MGGIELGCJGI_IGCCPLPAHGD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGIELGCJGI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MGGIELGCJGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGGIELGCJGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGGIELGCJGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGIELGCJGI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MGGIELGCJGI IGCCPLPAHGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGGIELGCJGI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGGIELGCJGI_IGCCPLPAHGD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
