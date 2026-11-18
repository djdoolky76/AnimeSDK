#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }

#define GEMGPIKEHLN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GEMGPIKEHLN_BGPFHILMCJC_OFFSET UNITYSDK_OFFSET(0x7DE0E0)
#define GEMGPIKEHLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GEMGPIKEHLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEMGPIKEHLN_IJIIMPNOCNG_OFFSET UNITYSDK_OFFSET(0x755790)
#define GEMGPIKEHLN_LIKDBNJBNDF_OFFSET UNITYSDK_OFFSET(0x7EA020)
#define GEMGPIKEHLN_LNGOANAMKKI_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define GEMGPIKEHLN_OIMLGODKDFD_OFFSET UNITYSDK_OFFSET(0x757210)
#define GEMGPIKEHLN_OMFKDBFFDHO_OFFSET UNITYSDK_OFFSET(0x754970)
#define GEMGPIKEHLN_PAPJFHHPKDM_OFFSET UNITYSDK_OFFSET(0x756720)
#define GEMGPIKEHLN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GEMGPIKEHLN_TypeDefinitionIndex = 17075;

struct alignas(4) GEMGPIKEHLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEMGPIKEHLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNGOANAMKKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_LNGOANAMKKI_OFFSET))(this);
	}

	::System::Int32 PAPJFHHPKDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_PAPJFHHPKDM_OFFSET))(this);
	}

	::System::Boolean OIMLGODKDFD(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_OIMLGODKDFD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean BGPFHILMCJC(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_BGPFHILMCJC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean LIKDBNJBNDF(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_LIKDBNJBNDF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IJIIMPNOCNG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_IJIIMPNOCNG_OFFSET))(this);
	}

	::System::Int32 OMFKDBFFDHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_OMFKDBFFDHO_OFFSET))(this);
	}

	/*
	::GEMGPIKEHLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEMGPIKEHLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEMGPIKEHLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
