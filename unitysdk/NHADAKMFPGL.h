#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NHADAKMFPGL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NHADAKMFPGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NHADAKMFPGL_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NHADAKMFPGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NHADAKMFPGL_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define NHADAKMFPGL_HLPBEICLFIB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NHADAKMFPGL_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NHADAKMFPGL_KOHFJDJDPDF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NHADAKMFPGL_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define NHADAKMFPGL_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define NHADAKMFPGL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E1E2D0)
#define NHADAKMFPGL_OOMPHNKNCOF_OFFSET UNITYSDK_OFFSET(0x758780)
#define NHADAKMFPGL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NHADAKMFPGL_TypeDefinitionIndex = 12971;

struct alignas(4) NHADAKMFPGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHADAKMFPGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NHADAKMFPGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NHADAKMFPGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NHADAKMFPGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 KOHFJDJDPDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_KOHFJDJDPDF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* HLPBEICLFIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_HLPBEICLFIB_OFFSET))(this);
	}

	/*
	static ::NHADAKMFPGL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NHADAKMFPGL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NHADAKMFPGL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OOMPHNKNCOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHADAKMFPGL_OOMPHNKNCOF_OFFSET))(this);
	}
};
