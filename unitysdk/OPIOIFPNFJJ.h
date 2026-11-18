#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OPIOIFPNFJJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OPIOIFPNFJJ_AHGAPIMHJLK_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OPIOIFPNFJJ_AKBGGNIFJKL_OFFSET UNITYSDK_OFFSET(0x757210)
#define OPIOIFPNFJJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OPIOIFPNFJJ_CBMDBLPKKHH_OFFSET UNITYSDK_OFFSET(0x755790)
#define OPIOIFPNFJJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPIOIFPNFJJ_LDNEMMDFGAP_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OPIOIFPNFJJ_LOIOOLJHMAC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OPIOIFPNFJJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EDBAA10)
#define OPIOIFPNFJJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OPIOIFPNFJJ_TypeDefinitionIndex = 9784;

struct alignas(4) OPIOIFPNFJJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OPIOIFPNFJJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OPIOIFPNFJJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LOIOOLJHMAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_LOIOOLJHMAC_OFFSET))(this);
	}

	::System::Boolean AKBGGNIFJKL(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_AKBGGNIFJKL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AHGAPIMHJLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_AHGAPIMHJLK_OFFSET))(this);
	}

	/*
	::OPIOIFPNFJJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPIOIFPNFJJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LDNEMMDFGAP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_LDNEMMDFGAP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 CBMDBLPKKHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIOIFPNFJJ_CBMDBLPKKHH_OFFSET))(this);
	}
};
