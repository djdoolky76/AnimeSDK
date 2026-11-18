#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HENFDFLDPJL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HENFDFLDPJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HENFDFLDPJL_BJACBMEHNKD_OFFSET UNITYSDK_OFFSET(0x758780)
#define HENFDFLDPJL_COKLHLKDBIL_OFFSET UNITYSDK_OFFSET(0x755190)
#define HENFDFLDPJL_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HENFDFLDPJL_DMLPEFAMFBB_OFFSET UNITYSDK_OFFSET(0x762D20)
#define HENFDFLDPJL_EPHKDFOEMOC_OFFSET UNITYSDK_OFFSET(0x757C10)
#define HENFDFLDPJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HENFDFLDPJL_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HENFDFLDPJL_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define HENFDFLDPJL_NFBICDDOCEB_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define HENFDFLDPJL_NJIAGCOLGBA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HENFDFLDPJL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1661C000)
#define HENFDFLDPJL_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755670)
#define HENFDFLDPJL_ONKDHFLNKOI_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define HENFDFLDPJL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HENFDFLDPJL_TypeDefinitionIndex = 15637;

struct alignas(4) HENFDFLDPJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HENFDFLDPJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HENFDFLDPJL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HENFDFLDPJL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HENFDFLDPJL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HENFDFLDPJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HENFDFLDPJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HENFDFLDPJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NJIAGCOLGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_NJIAGCOLGBA_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 ONKDHFLNKOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_ONKDHFLNKOI_OFFSET))(this);
	}

	::System::Int32 EPHKDFOEMOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_EPHKDFOEMOC_OFFSET))(this);
	}

	::System::Boolean NFBICDDOCEB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HENFDFLDPJL_NFBICDDOCEB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DMLPEFAMFBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_DMLPEFAMFBB_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 COKLHLKDBIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_COKLHLKDBIL_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 BJACBMEHNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENFDFLDPJL_BJACBMEHNKD_OFFSET))(this);
	}
};
