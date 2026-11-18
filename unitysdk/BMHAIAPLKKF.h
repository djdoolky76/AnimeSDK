#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BMHAIAPLKKF_AGKIKAEECOL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BMHAIAPLKKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BMHAIAPLKKF_DMLPEFAMFBB_OFFSET UNITYSDK_OFFSET(0x761240)
#define BMHAIAPLKKF_FBEDDCPFAPE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BMHAIAPLKKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMHAIAPLKKF_INFJFJDFPJH_OFFSET UNITYSDK_OFFSET(0x754920)
#define BMHAIAPLKKF_NFBICDDOCEB_OFFSET UNITYSDK_OFFSET(0x7D4320)
#define BMHAIAPLKKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BMHAIAPLKKF_TypeDefinitionIndex = 15410;

struct alignas(4) BMHAIAPLKKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMHAIAPLKKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 INFJFJDFPJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_INFJFJDFPJH_OFFSET))(this);
	}

	::System::Boolean NFBICDDOCEB(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_NFBICDDOCEB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FBEDDCPFAPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_FBEDDCPFAPE_OFFSET))(this);
	}

	::System::Int32 DMLPEFAMFBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_DMLPEFAMFBB_OFFSET))(this);
	}

	/*
	::BMHAIAPLKKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMHAIAPLKKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AGKIKAEECOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHAIAPLKKF_AGKIKAEECOL_OFFSET))(this);
	}
};
