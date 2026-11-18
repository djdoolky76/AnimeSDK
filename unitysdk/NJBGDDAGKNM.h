#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NJBGDDAGKNM_AMHHNHLCDGM_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define NJBGDDAGKNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NJBGDDAGKNM_CILNICBIIMF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NJBGDDAGKNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJBGDDAGKNM_HLOKOIIJINC_OFFSET UNITYSDK_OFFSET(0x755790)
#define NJBGDDAGKNM_IHCMCEFLINL_OFFSET UNITYSDK_OFFSET(0x756360)
#define NJBGDDAGKNM_JLILNKJFBEK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NJBGDDAGKNM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E1F750)
#define NJBGDDAGKNM_OCGOHNDKGJF_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define NJBGDDAGKNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NJBGDDAGKNM_TypeDefinitionIndex = 10701;

struct alignas(4) NJBGDDAGKNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJBGDDAGKNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AMHHNHLCDGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_AMHHNHLCDGM_OFFSET))(this);
	}

	/*
	static ::NJBGDDAGKNM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NJBGDDAGKNM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HLOKOIIJINC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_HLOKOIIJINC_OFFSET))(this);
	}

	::System::Boolean IHCMCEFLINL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_IHCMCEFLINL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean OCGOHNDKGJF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_OCGOHNDKGJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JLILNKJFBEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_JLILNKJFBEK_OFFSET))(this);
	}

	::System::String* CILNICBIIMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_CILNICBIIMF_OFFSET))(this);
	}

	/*
	::NJBGDDAGKNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJBGDDAGKNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJBGDDAGKNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
