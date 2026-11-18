#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOOEOFNKPIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AE130)
#define DOOEOFNKPIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOOEOFNKPIL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOOEOFNKPIL_KPHCMIJBKNJ_1_OFFSET UNITYSDK_OFFSET(0x177895F0)
#define DOOEOFNKPIL_KPHCMIJBKNJ_OFFSET UNITYSDK_OFFSET(0x17789580)
#define DOOEOFNKPIL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AE120)
#define DOOEOFNKPIL___INIT_OFFSET UNITYSDK_OFFSET(0x7AE100)

inline static constexpr unsigned int DOOEOFNKPIL_TypeDefinitionIndex = 14444;

struct alignas(8) DOOEOFNKPIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOEOFNKPIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOEOFNKPIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOEOFNKPIL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DOOEOFNKPIL KPHCMIJBKNJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOOEOFNKPIL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOEOFNKPIL_KPHCMIJBKNJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DOOEOFNKPIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOOEOFNKPIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOOEOFNKPIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOEOFNKPIL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DOOEOFNKPIL KPHCMIJBKNJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOOEOFNKPIL EIFONLCJOPG)
	{
		return ((::DOOEOFNKPIL(*)(::FlatBuffers::ByteBuffer*, ::DOOEOFNKPIL))((::PBYTE)hIl2Cpp + DOOEOFNKPIL_KPHCMIJBKNJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
