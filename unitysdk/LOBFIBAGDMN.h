#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LOBFIBAGDMN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LOBFIBAGDMN_ANMFBHEKHCG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LOBFIBAGDMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LOBFIBAGDMN_DFJGIBEPCIE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LOBFIBAGDMN_EHJOPAKIHKF_OFFSET UNITYSDK_OFFSET(0x754920)
#define LOBFIBAGDMN_FGALIADFGBI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LOBFIBAGDMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOBFIBAGDMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LOBFIBAGDMN_TypeDefinitionIndex = 14500;

struct alignas(4) LOBFIBAGDMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOBFIBAGDMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LOBFIBAGDMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOBFIBAGDMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DFJGIBEPCIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_DFJGIBEPCIE_OFFSET))(this);
	}

	::System::Int32 FGALIADFGBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_FGALIADFGBI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ANMFBHEKHCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_ANMFBHEKHCG_OFFSET))(this);
	}

	::System::Int32 EHJOPAKIHKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFIBAGDMN_EHJOPAKIHKF_OFFSET))(this);
	}
};
