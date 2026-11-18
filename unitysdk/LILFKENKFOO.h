#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LILFKENKFOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LILFKENKFOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LILFKENKFOO_IHKBGPKFHON_OFFSET UNITYSDK_OFFSET(0x763920)
#define LILFKENKFOO_JIJLGFOHPDF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LILFKENKFOO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B3043B0)
#define LILFKENKFOO_PECIKPBEICH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LILFKENKFOO_PNAPGDJDLOB_OFFSET UNITYSDK_OFFSET(0x757330)
#define LILFKENKFOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LILFKENKFOO_TypeDefinitionIndex = 13975;

struct alignas(4) LILFKENKFOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFKENKFOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LILFKENKFOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IHKBGPKFHON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LILFKENKFOO_IHKBGPKFHON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PNAPGDJDLOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFKENKFOO_PNAPGDJDLOB_OFFSET))(this);
	}

	/*
	::LILFKENKFOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LILFKENKFOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LILFKENKFOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LILFKENKFOO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LILFKENKFOO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LILFKENKFOO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PECIKPBEICH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFKENKFOO_PECIKPBEICH_OFFSET))(this);
	}

	::System::Int32 JIJLGFOHPDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFKENKFOO_JIJLGFOHPDF_OFFSET))(this);
	}
};
