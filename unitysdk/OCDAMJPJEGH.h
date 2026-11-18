#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OCDAMJPJEGH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OCDAMJPJEGH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OCDAMJPJEGH_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OCDAMJPJEGH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCDAMJPJEGH_JABAIPLOCEL_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OCDAMJPJEGH_KNHGDMFFJBO_OFFSET UNITYSDK_OFFSET(0x757190)
#define OCDAMJPJEGH_KOCFBOHJLHC_OFFSET UNITYSDK_OFFSET(0x758320)
#define OCDAMJPJEGH_LNLFIAOOEOG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OCDAMJPJEGH_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755190)
#define OCDAMJPJEGH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x758780)
#define OCDAMJPJEGH_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OCDAMJPJEGH_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OCDAMJPJEGH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DCCB50)
#define OCDAMJPJEGH_OFLOCMJAGJB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OCDAMJPJEGH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OCDAMJPJEGH_TypeDefinitionIndex = 12517;

struct alignas(4) OCDAMJPJEGH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDAMJPJEGH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNLFIAOOEOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_LNLFIAOOEOG_OFFSET))(this);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_MKELBHKBKDC_OFFSET))(this);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_ENJENAJGHFI_OFFSET))(this);
	}

	/*
	static ::OCDAMJPJEGH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OCDAMJPJEGH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 JABAIPLOCEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_JABAIPLOCEL_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::OCDAMJPJEGH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCDAMJPJEGH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* OFLOCMJAGJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_OFLOCMJAGJB_OFFSET))(this);
	}

	::System::String* KOCFBOHJLHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_KOCFBOHJLHC_OFFSET))(this);
	}

	::System::String* KNHGDMFFJBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDAMJPJEGH_KNHGDMFFJBO_OFFSET))(this);
	}
};
