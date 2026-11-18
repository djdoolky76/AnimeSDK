#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGPFMDJDEDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2910)
#define FGPFMDJDEDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FGPFMDJDEDF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FGPFMDJDEDF_KEGLFANBCNP_1_OFFSET UNITYSDK_OFFSET(0x19F595E0)
#define FGPFMDJDEDF_KEGLFANBCNP_OFFSET UNITYSDK_OFFSET(0x19F594E0)
#define FGPFMDJDEDF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2950)
#define FGPFMDJDEDF___INIT_OFFSET UNITYSDK_OFFSET(0x7F28F0)

inline static constexpr unsigned int FGPFMDJDEDF_TypeDefinitionIndex = 12694;

struct alignas(8) FGPFMDJDEDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPFMDJDEDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGPFMDJDEDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FGPFMDJDEDF KEGLFANBCNP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FGPFMDJDEDF EIFONLCJOPG)
	{
		return ((::FGPFMDJDEDF(*)(::FlatBuffers::ByteBuffer*, ::FGPFMDJDEDF))((::PBYTE)hIl2Cpp + FGPFMDJDEDF_KEGLFANBCNP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPFMDJDEDF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FGPFMDJDEDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGPFMDJDEDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGPFMDJDEDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPFMDJDEDF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FGPFMDJDEDF KEGLFANBCNP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FGPFMDJDEDF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FGPFMDJDEDF_KEGLFANBCNP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
