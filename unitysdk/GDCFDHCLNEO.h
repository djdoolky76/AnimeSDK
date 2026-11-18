#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDCFDHCLNEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB380)
#define GDCFDHCLNEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDCFDHCLNEO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDCFDHCLNEO_MEDELNOFMPL_1_OFFSET UNITYSDK_OFFSET(0x19AF9010)
#define GDCFDHCLNEO_MEDELNOFMPL_OFFSET UNITYSDK_OFFSET(0x19AF8F70)
#define GDCFDHCLNEO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB3C0)
#define GDCFDHCLNEO___INIT_OFFSET UNITYSDK_OFFSET(0x7EB360)

inline static constexpr unsigned int GDCFDHCLNEO_TypeDefinitionIndex = 9406;

struct alignas(8) GDCFDHCLNEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCFDHCLNEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCFDHCLNEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GDCFDHCLNEO MEDELNOFMPL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDCFDHCLNEO EIFONLCJOPG)
	{
		return ((::GDCFDHCLNEO(*)(::FlatBuffers::ByteBuffer*, ::GDCFDHCLNEO))((::PBYTE)hIl2Cpp + GDCFDHCLNEO_MEDELNOFMPL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GDCFDHCLNEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDCFDHCLNEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCFDHCLNEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GDCFDHCLNEO MEDELNOFMPL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDCFDHCLNEO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDCFDHCLNEO_MEDELNOFMPL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCFDHCLNEO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCFDHCLNEO_GHKKNCCLPAN_OFFSET))(this);
	}
};
