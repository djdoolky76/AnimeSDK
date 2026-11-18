#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGNADAPJKLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD980)
#define DGNADAPJKLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGNADAPJKLK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DGNADAPJKLK_HHKIEDLBEKG_1_OFFSET UNITYSDK_OFFSET(0x177825C0)
#define DGNADAPJKLK_HHKIEDLBEKG_OFFSET UNITYSDK_OFFSET(0x17782550)
#define DGNADAPJKLK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD9C0)
#define DGNADAPJKLK___INIT_OFFSET UNITYSDK_OFFSET(0x7AD960)

inline static constexpr unsigned int DGNADAPJKLK_TypeDefinitionIndex = 9606;

struct alignas(8) DGNADAPJKLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNADAPJKLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGNADAPJKLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DGNADAPJKLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGNADAPJKLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGNADAPJKLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DGNADAPJKLK HHKIEDLBEKG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGNADAPJKLK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGNADAPJKLK_HHKIEDLBEKG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNADAPJKLK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNADAPJKLK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DGNADAPJKLK HHKIEDLBEKG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DGNADAPJKLK EIFONLCJOPG)
	{
		return ((::DGNADAPJKLK(*)(::FlatBuffers::ByteBuffer*, ::DGNADAPJKLK))((::PBYTE)hIl2Cpp + DGNADAPJKLK_HHKIEDLBEKG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
