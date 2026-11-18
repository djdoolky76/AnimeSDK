#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CCNAHGDDPFN_BBPGDMKHFFF_OFFSET UNITYSDK_OFFSET(0x754920)
#define CCNAHGDDPFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CCNAHGDDPFN_CLFALFKBCDC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CCNAHGDDPFN_FDBJAMPJGNO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CCNAHGDDPFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCNAHGDDPFN_LBFBBNGNBFF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CCNAHGDDPFN_LDONBFMFFPG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CCNAHGDDPFN_NKEMHJDPHPF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CCNAHGDDPFN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A178A40)
#define CCNAHGDDPFN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CCNAHGDDPFN_TypeDefinitionIndex = 16327;

struct alignas(4) CCNAHGDDPFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCNAHGDDPFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CCNAHGDDPFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCNAHGDDPFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCNAHGDDPFN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CCNAHGDDPFN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NKEMHJDPHPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_NKEMHJDPHPF_OFFSET))(this);
	}

	::System::Int32 BBPGDMKHFFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_BBPGDMKHFFF_OFFSET))(this);
	}

	::System::String* LBFBBNGNBFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_LBFBBNGNBFF_OFFSET))(this);
	}

	::System::Int32 FDBJAMPJGNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_FDBJAMPJGNO_OFFSET))(this);
	}

	::System::Int32 CLFALFKBCDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_CLFALFKBCDC_OFFSET))(this);
	}

	::System::String* LDONBFMFFPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAHGDDPFN_LDONBFMFFPG_OFFSET))(this);
	}
};
