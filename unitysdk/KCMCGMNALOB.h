#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCMCGMNALOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDB80)
#define KCMCGMNALOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCMCGMNALOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KCMCGMNALOB_KBECFIPOJIO_1_OFFSET UNITYSDK_OFFSET(0x1A5F6EB0)
#define KCMCGMNALOB_KBECFIPOJIO_OFFSET UNITYSDK_OFFSET(0x1A5F6E50)
#define KCMCGMNALOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDB70)
#define KCMCGMNALOB___INIT_OFFSET UNITYSDK_OFFSET(0x7FDB50)

inline static constexpr unsigned int KCMCGMNALOB_TypeDefinitionIndex = 13488;

struct alignas(8) KCMCGMNALOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMCGMNALOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCMCGMNALOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMCGMNALOB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMCGMNALOB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KCMCGMNALOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCMCGMNALOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCMCGMNALOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KCMCGMNALOB KBECFIPOJIO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KCMCGMNALOB EIFONLCJOPG)
	{
		return ((::KCMCGMNALOB(*)(::FlatBuffers::ByteBuffer*, ::KCMCGMNALOB))((::PBYTE)hIl2Cpp + KCMCGMNALOB_KBECFIPOJIO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KCMCGMNALOB KBECFIPOJIO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCMCGMNALOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCMCGMNALOB_KBECFIPOJIO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
