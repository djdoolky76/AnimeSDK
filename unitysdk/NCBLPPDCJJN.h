#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NCBLPPDCJJN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NCBLPPDCJJN_AIJJPBPHCLO_OFFSET UNITYSDK_OFFSET(0x754920)
#define NCBLPPDCJJN_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x756440)
#define NCBLPPDCJJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NCBLPPDCJJN_COPBPCCNEAE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NCBLPPDCJJN_CPELHPALFLP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NCBLPPDCJJN_DOCDLFCEPMK_OFFSET UNITYSDK_OFFSET(0x757190)
#define NCBLPPDCJJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCBLPPDCJJN_IIALLMAMNBC_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define NCBLPPDCJJN_KBNINHAKHAH_OFFSET UNITYSDK_OFFSET(0x757290)
#define NCBLPPDCJJN_KPOOKGLHLNN_OFFSET UNITYSDK_OFFSET(0x755890)
#define NCBLPPDCJJN_LACALHBICJH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define NCBLPPDCJJN_NNCKPNDJPEP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define NCBLPPDCJJN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCE8A10)
#define NCBLPPDCJJN_OHAKJALDAHK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NCBLPPDCJJN_PAINFLDDDDD_OFFSET UNITYSDK_OFFSET(0x754970)
#define NCBLPPDCJJN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NCBLPPDCJJN_TypeDefinitionIndex = 16448;

struct alignas(4) NCBLPPDCJJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCBLPPDCJJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CPELHPALFLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_CPELHPALFLP_OFFSET))(this);
	}

	::System::String* DOCDLFCEPMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_DOCDLFCEPMK_OFFSET))(this);
	}

	::System::String* OHAKJALDAHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_OHAKJALDAHK_OFFSET))(this);
	}

	::System::Int32 PAINFLDDDDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_PAINFLDDDDD_OFFSET))(this);
	}

	/*
	static ::NCBLPPDCJJN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NCBLPPDCJJN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KBNINHAKHAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_KBNINHAKHAH_OFFSET))(this);
	}

	::System::String* COPBPCCNEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_COPBPCCNEAE_OFFSET))(this);
	}

	::System::Int32 AIJJPBPHCLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_AIJJPBPHCLO_OFFSET))(this);
	}

	::System::String* NNCKPNDJPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_NNCKPNDJPEP_OFFSET))(this);
	}

	::System::String* LACALHBICJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_LACALHBICJH_OFFSET))(this);
	}

	::System::String* IIALLMAMNBC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_IIALLMAMNBC_OFFSET))(this);
	}

	::System::Int32 KPOOKGLHLNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_KPOOKGLHLNN_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_AKJEBFJMGCJ_OFFSET))(this);
	}

	/*
	::NCBLPPDCJJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCBLPPDCJJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBLPPDCJJN_ACOEONABOJL_OFFSET))(this);
	}
};
