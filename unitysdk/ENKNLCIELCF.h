#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENKNLCIELCF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766880)
#define ENKNLCIELCF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENKNLCIELCF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ENKNLCIELCF_IINGJMDPKGI_1_OFFSET UNITYSDK_OFFSET(0x157B5370)
#define ENKNLCIELCF_IINGJMDPKGI_OFFSET UNITYSDK_OFFSET(0x157B5310)
#define ENKNLCIELCF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766870)
#define ENKNLCIELCF___INIT_OFFSET UNITYSDK_OFFSET(0x766850)

inline static constexpr unsigned int ENKNLCIELCF_TypeDefinitionIndex = 16309;

struct alignas(8) ENKNLCIELCF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKNLCIELCF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENKNLCIELCF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKNLCIELCF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKNLCIELCF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ENKNLCIELCF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENKNLCIELCF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENKNLCIELCF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ENKNLCIELCF IINGJMDPKGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ENKNLCIELCF EIFONLCJOPG)
	{
		return ((::ENKNLCIELCF(*)(::FlatBuffers::ByteBuffer*, ::ENKNLCIELCF))((::PBYTE)hIl2Cpp + ENKNLCIELCF_IINGJMDPKGI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ENKNLCIELCF IINGJMDPKGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENKNLCIELCF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENKNLCIELCF_IINGJMDPKGI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
