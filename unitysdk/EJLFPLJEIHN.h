#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EJLFPLJEIHN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJLFPLJEIHN_ANHJNKHJGAK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EJLFPLJEIHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJLFPLJEIHN_CALCPNKDGMK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define EJLFPLJEIHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJLFPLJEIHN_HKPFEKGHJJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EJLFPLJEIHN_IFPJOOOAEGJ_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EJLFPLJEIHN_LBPNBPIGOII_OFFSET UNITYSDK_OFFSET(0x755790)
#define EJLFPLJEIHN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A59D900)
#define EJLFPLJEIHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJLFPLJEIHN_TypeDefinitionIndex = 14492;

struct alignas(4) EJLFPLJEIHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJLFPLJEIHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IFPJOOOAEGJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_IFPJOOOAEGJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HKPFEKGHJJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_HKPFEKGHJJD_OFFSET))(this);
	}

	::System::Int32 ANHJNKHJGAK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_ANHJNKHJGAK_OFFSET))(this);
	}

	::System::Int32 CALCPNKDGMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_CALCPNKDGMK_OFFSET))(this);
	}

	/*
	static ::EJLFPLJEIHN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EJLFPLJEIHN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LBPNBPIGOII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_LBPNBPIGOII_OFFSET))(this);
	}

	/*
	::EJLFPLJEIHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJLFPLJEIHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFPLJEIHN_ACOEONABOJL_OFFSET))(this);
	}
};
