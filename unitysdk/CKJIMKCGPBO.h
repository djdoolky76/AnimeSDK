#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGDNOKLCGKP.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CKJIMKCGPBO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CKJIMKCGPBO_BCPPJELHAIJ_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define CKJIMKCGPBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CKJIMKCGPBO_CDFFDHGJOMK_OFFSET UNITYSDK_OFFSET(0x756720)
#define CKJIMKCGPBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKJIMKCGPBO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define CKJIMKCGPBO_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CKJIMKCGPBO_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CKJIMKCGPBO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F13D10)
#define CKJIMKCGPBO_ONPOFENMDPF_OFFSET UNITYSDK_OFFSET(0x754920)
#define CKJIMKCGPBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CKJIMKCGPBO_TypeDefinitionIndex = 14933;

struct alignas(4) CKJIMKCGPBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKJIMKCGPBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CDFFDHGJOMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_CDFFDHGJOMK_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_ACOEONABOJL_OFFSET))(this);
	}

	::AGDNOKLCGKP HKELPCLHLEC()
	{
		return ((::AGDNOKLCGKP(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	::CKJIMKCGPBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKJIMKCGPBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BCPPJELHAIJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_BCPPJELHAIJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CKJIMKCGPBO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CKJIMKCGPBO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ONPOFENMDPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJIMKCGPBO_ONPOFENMDPF_OFFSET))(this);
	}
};
