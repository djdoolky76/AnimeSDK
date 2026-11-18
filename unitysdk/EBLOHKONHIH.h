#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBLOHKONHIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C2020)
#define EBLOHKONHIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBLOHKONHIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBLOHKONHIH_KOKAFAJPBML_1_OFFSET UNITYSDK_OFFSET(0x17F27090)
#define EBLOHKONHIH_KOKAFAJPBML_OFFSET UNITYSDK_OFFSET(0x17F27020)
#define EBLOHKONHIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C2010)
#define EBLOHKONHIH___INIT_OFFSET UNITYSDK_OFFSET(0x7C1FF0)

inline static constexpr unsigned int EBLOHKONHIH_TypeDefinitionIndex = 16410;

struct alignas(8) EBLOHKONHIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLOHKONHIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLOHKONHIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EBLOHKONHIH KOKAFAJPBML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBLOHKONHIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLOHKONHIH_KOKAFAJPBML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLOHKONHIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EBLOHKONHIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBLOHKONHIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBLOHKONHIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLOHKONHIH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EBLOHKONHIH KOKAFAJPBML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBLOHKONHIH EIFONLCJOPG)
	{
		return ((::EBLOHKONHIH(*)(::FlatBuffers::ByteBuffer*, ::EBLOHKONHIH))((::PBYTE)hIl2Cpp + EBLOHKONHIH_KOKAFAJPBML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
