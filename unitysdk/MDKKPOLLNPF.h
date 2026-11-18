#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDKKPOLLNPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81CCC0)
#define MDKKPOLLNPF_DKHJJDLBMIK_1_OFFSET UNITYSDK_OFFSET(0x1BB15990)
#define MDKKPOLLNPF_DKHJJDLBMIK_OFFSET UNITYSDK_OFFSET(0x1BB158F0)
#define MDKKPOLLNPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDKKPOLLNPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MDKKPOLLNPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81CCB0)
#define MDKKPOLLNPF___INIT_OFFSET UNITYSDK_OFFSET(0x81CC90)

inline static constexpr unsigned int MDKKPOLLNPF_TypeDefinitionIndex = 9489;

struct alignas(8) MDKKPOLLNPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKKPOLLNPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDKKPOLLNPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MDKKPOLLNPF DKHJJDLBMIK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MDKKPOLLNPF EIFONLCJOPG)
	{
		return ((::MDKKPOLLNPF(*)(::FlatBuffers::ByteBuffer*, ::MDKKPOLLNPF))((::PBYTE)hIl2Cpp + MDKKPOLLNPF_DKHJJDLBMIK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MDKKPOLLNPF DKHJJDLBMIK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDKKPOLLNPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDKKPOLLNPF_DKHJJDLBMIK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKKPOLLNPF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MDKKPOLLNPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDKKPOLLNPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDKKPOLLNPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKKPOLLNPF_GHKKNCCLPAN_OFFSET))(this);
	}
};
