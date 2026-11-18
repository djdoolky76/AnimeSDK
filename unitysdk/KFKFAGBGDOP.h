#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KFKFAGBGDOP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KFKFAGBGDOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFKFAGBGDOP_DBHLCLNOGKI_OFFSET UNITYSDK_OFFSET(0x757210)
#define KFKFAGBGDOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFKFAGBGDOP_HPLKPOIBLAA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KFKFAGBGDOP_MOPAJHIDNIA_OFFSET UNITYSDK_OFFSET(0x755790)
#define KFKFAGBGDOP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DE5470)
#define KFKFAGBGDOP_OFPHMADLNIK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KFKFAGBGDOP_PABLNCMNJJO_OFFSET UNITYSDK_OFFSET(0x757290)
#define KFKFAGBGDOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFKFAGBGDOP_TypeDefinitionIndex = 15217;

struct alignas(4) KFKFAGBGDOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFKFAGBGDOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KFKFAGBGDOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFKFAGBGDOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MOPAJHIDNIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_MOPAJHIDNIA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PABLNCMNJJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_PABLNCMNJJO_OFFSET))(this);
	}

	::System::String* HPLKPOIBLAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_HPLKPOIBLAA_OFFSET))(this);
	}

	/*
	static ::KFKFAGBGDOP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFKFAGBGDOP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean DBHLCLNOGKI(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_DBHLCLNOGKI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 OFPHMADLNIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKFAGBGDOP_OFPHMADLNIK_OFFSET))(this);
	}
};
