#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGHEHLJPNKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA490)
#define NGHEHLJPNKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGHEHLJPNKE_GGHJAKNEELL_1_OFFSET UNITYSDK_OFFSET(0x1910A550)
#define NGHEHLJPNKE_GGHJAKNEELL_OFFSET UNITYSDK_OFFSET(0x19119EF0)
#define NGHEHLJPNKE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGHEHLJPNKE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA4D0)
#define NGHEHLJPNKE___INIT_OFFSET UNITYSDK_OFFSET(0x7DA470)

inline static constexpr unsigned int NGHEHLJPNKE_TypeDefinitionIndex = 11480;

struct alignas(8) NGHEHLJPNKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEHLJPNKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGHEHLJPNKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NGHEHLJPNKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGHEHLJPNKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGHEHLJPNKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEHLJPNKE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NGHEHLJPNKE GGHJAKNEELL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGHEHLJPNKE EIFONLCJOPG)
	{
		return ((::NGHEHLJPNKE(*)(::FlatBuffers::ByteBuffer*, ::NGHEHLJPNKE))((::PBYTE)hIl2Cpp + NGHEHLJPNKE_GGHJAKNEELL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NGHEHLJPNKE GGHJAKNEELL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGHEHLJPNKE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGHEHLJPNKE_GGHJAKNEELL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEHLJPNKE_PPOMNIFACOL_OFFSET))(this);
	}
};
