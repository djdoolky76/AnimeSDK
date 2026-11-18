#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKKNFBCMKJO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKKNFBCMKJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKKNFBCMKJO_EPBFBIKDJOM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MKKNFBCMKJO_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MKKNFBCMKJO_GDCAABBKGID_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define MKKNFBCMKJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKKNFBCMKJO_KAMIPOPKIEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define MKKNFBCMKJO_MOKKKEINAFN_OFFSET UNITYSDK_OFFSET(0x755790)
#define MKKNFBCMKJO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DB6020)
#define MKKNFBCMKJO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKKNFBCMKJO_TypeDefinitionIndex = 17514;

struct alignas(4) MKKNFBCMKJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKKNFBCMKJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MKKNFBCMKJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKKNFBCMKJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EPBFBIKDJOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_EPBFBIKDJOM_OFFSET))(this);
	}

	::System::Int32 MOKKKEINAFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_MOKKKEINAFN_OFFSET))(this);
	}

	::System::Int32 KAMIPOPKIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_KAMIPOPKIEC_OFFSET))(this);
	}

	::System::Boolean GDCAABBKGID(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_GDCAABBKGID_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MKKNFBCMKJO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MKKNFBCMKJO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKNFBCMKJO_ACOEONABOJL_OFFSET))(this);
	}
};
