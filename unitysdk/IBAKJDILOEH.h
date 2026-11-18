#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IBAKJDILOEH_AFJEJCHHGOH_OFFSET UNITYSDK_OFFSET(0x754A70)
#define IBAKJDILOEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IBAKJDILOEH_BPKANOJJCCA_OFFSET UNITYSDK_OFFSET(0x7667E0)
#define IBAKJDILOEH_CDBDCBFGDON_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define IBAKJDILOEH_EPEGILECEJD_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define IBAKJDILOEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBAKJDILOEH_HOKFDABCANC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IBAKJDILOEH_HOMJBKELJLL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IBAKJDILOEH_MCOIHCHACOL_OFFSET UNITYSDK_OFFSET(0x756360)
#define IBAKJDILOEH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A92E60)
#define IBAKJDILOEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IBAKJDILOEH_TypeDefinitionIndex = 13284;

struct alignas(4) IBAKJDILOEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJDILOEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBAKJDILOEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HOMJBKELJLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJDILOEH_HOMJBKELJLL_OFFSET))(this);
	}

	::System::Int32 CDBDCBFGDON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJDILOEH_CDBDCBFGDON_OFFSET))(this);
	}

	::System::Boolean AFJEJCHHGOH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IBAKJDILOEH_AFJEJCHHGOH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Single BPKANOJJCCA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJDILOEH_BPKANOJJCCA_OFFSET))(this);
	}

	/*
	::IBAKJDILOEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBAKJDILOEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBAKJDILOEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MCOIHCHACOL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IBAKJDILOEH_MCOIHCHACOL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EPEGILECEJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJDILOEH_EPEGILECEJD_OFFSET))(this);
	}

	::System::Int32 HOKFDABCANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJDILOEH_HOKFDABCANC_OFFSET))(this);
	}

	/*
	static ::IBAKJDILOEH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IBAKJDILOEH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IBAKJDILOEH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
