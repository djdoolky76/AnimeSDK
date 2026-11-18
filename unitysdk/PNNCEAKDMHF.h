#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNNCEAKDMHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0A00)
#define PNNCEAKDMHF_BPNHJOBBHPC_1_OFFSET UNITYSDK_OFFSET(0x19DE5FF0)
#define PNNCEAKDMHF_BPNHJOBBHPC_OFFSET UNITYSDK_OFFSET(0x19DE5F90)
#define PNNCEAKDMHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNNCEAKDMHF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNNCEAKDMHF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0A40)
#define PNNCEAKDMHF___INIT_OFFSET UNITYSDK_OFFSET(0x7F09E0)

inline static constexpr unsigned int PNNCEAKDMHF_TypeDefinitionIndex = 14434;

struct alignas(8) PNNCEAKDMHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNCEAKDMHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNNCEAKDMHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PNNCEAKDMHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNNCEAKDMHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNNCEAKDMHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNCEAKDMHF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PNNCEAKDMHF BPNHJOBBHPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNNCEAKDMHF EIFONLCJOPG)
	{
		return ((::PNNCEAKDMHF(*)(::FlatBuffers::ByteBuffer*, ::PNNCEAKDMHF))((::PBYTE)hIl2Cpp + PNNCEAKDMHF_BPNHJOBBHPC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNCEAKDMHF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PNNCEAKDMHF BPNHJOBBHPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNNCEAKDMHF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNNCEAKDMHF_BPNHJOBBHPC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
