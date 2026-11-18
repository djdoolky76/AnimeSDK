#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIDMGNDPHGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8166D0)
#define BIDMGNDPHGL_FGJBEHIHHFO_1_OFFSET UNITYSDK_OFFSET(0x1B9929A0)
#define BIDMGNDPHGL_FGJBEHIHHFO_OFFSET UNITYSDK_OFFSET(0x1B992900)
#define BIDMGNDPHGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIDMGNDPHGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BIDMGNDPHGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8166C0)
#define BIDMGNDPHGL___INIT_OFFSET UNITYSDK_OFFSET(0x8166A0)

inline static constexpr unsigned int BIDMGNDPHGL_TypeDefinitionIndex = 10420;

struct alignas(8) BIDMGNDPHGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDMGNDPHGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIDMGNDPHGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDMGNDPHGL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BIDMGNDPHGL FGJBEHIHHFO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BIDMGNDPHGL EIFONLCJOPG)
	{
		return ((::BIDMGNDPHGL(*)(::FlatBuffers::ByteBuffer*, ::BIDMGNDPHGL))((::PBYTE)hIl2Cpp + BIDMGNDPHGL_FGJBEHIHHFO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BIDMGNDPHGL FGJBEHIHHFO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIDMGNDPHGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIDMGNDPHGL_FGJBEHIHHFO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDMGNDPHGL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BIDMGNDPHGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIDMGNDPHGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIDMGNDPHGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
