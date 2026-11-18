#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EACKGDKFPDJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOAIHLGHNPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JOAIHLGHNPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C500)
#define JOAIHLGHNPF_BPFPBODGCPC_1_OFFSET UNITYSDK_OFFSET(0x1BAFDCA0)
#define JOAIHLGHNPF_BPFPBODGCPC_OFFSET UNITYSDK_OFFSET(0x1BAFDBA0)
#define JOAIHLGHNPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOAIHLGHNPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JOAIHLGHNPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C4F0)
#define JOAIHLGHNPF___INIT_OFFSET UNITYSDK_OFFSET(0x81C4D0)

inline static constexpr unsigned int JOAIHLGHNPF_TypeDefinitionIndex = 14848;

struct alignas(8) JOAIHLGHNPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOAIHLGHNPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JOAIHLGHNPF BPFPBODGCPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JOAIHLGHNPF EIFONLCJOPG)
	{
		return ((::JOAIHLGHNPF(*)(::FlatBuffers::ByteBuffer*, ::JOAIHLGHNPF))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_BPFPBODGCPC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JOAIHLGHNPF BPFPBODGCPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOAIHLGHNPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_BPFPBODGCPC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::JOAIHLGHNPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOAIHLGHNPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EACKGDKFPDJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EACKGDKFPDJ&))((::PBYTE)hIl2Cpp + JOAIHLGHNPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
