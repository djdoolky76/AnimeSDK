#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LKDBKHGIFGO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LKDBKHGIFGO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754920)
#define LKDBKHGIFGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LKDBKHGIFGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LKDBKHGIFGO_MLMPIEEGOGH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LKDBKHGIFGO_NCGMDMHLBAL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LKDBKHGIFGO_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LKDBKHGIFGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LKDBKHGIFGO_TypeDefinitionIndex = 16452;

struct alignas(4) LKDBKHGIFGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKDBKHGIFGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LKDBKHGIFGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKDBKHGIFGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_ODGGIAADMLO_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 NCGMDMHLBAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_NCGMDMHLBAL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MLMPIEEGOGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDBKHGIFGO_MLMPIEEGOGH_OFFSET))(this);
	}
};
