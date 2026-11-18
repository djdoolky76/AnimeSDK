#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAHNKLGJFIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2730)
#define FAHNKLGJFIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FAHNKLGJFIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FAHNKLGJFIP_POALEBBLDBH_1_OFFSET UNITYSDK_OFFSET(0x19F50D50)
#define FAHNKLGJFIP_POALEBBLDBH_OFFSET UNITYSDK_OFFSET(0x19F50CB0)
#define FAHNKLGJFIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2720)
#define FAHNKLGJFIP___INIT_OFFSET UNITYSDK_OFFSET(0x7F2700)

inline static constexpr unsigned int FAHNKLGJFIP_TypeDefinitionIndex = 17752;

struct alignas(8) FAHNKLGJFIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNKLGJFIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAHNKLGJFIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNKLGJFIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FAHNKLGJFIP POALEBBLDBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FAHNKLGJFIP EIFONLCJOPG)
	{
		return ((::FAHNKLGJFIP(*)(::FlatBuffers::ByteBuffer*, ::FAHNKLGJFIP))((::PBYTE)hIl2Cpp + FAHNKLGJFIP_POALEBBLDBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::FAHNKLGJFIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAHNKLGJFIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAHNKLGJFIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FAHNKLGJFIP POALEBBLDBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAHNKLGJFIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAHNKLGJFIP_POALEBBLDBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHNKLGJFIP_GHKKNCCLPAN_OFFSET))(this);
	}
};
