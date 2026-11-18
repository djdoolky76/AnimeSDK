#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MNIFGBEIKPO_BGIIFJCBFMN_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define MNIFGBEIKPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MNIFGBEIKPO_EKPNCJFCCOE_OFFSET UNITYSDK_OFFSET(0x755890)
#define MNIFGBEIKPO_EOCBHBMJKFB_OFFSET UNITYSDK_OFFSET(0x760650)
#define MNIFGBEIKPO_FLCJMAKCNGD_OFFSET UNITYSDK_OFFSET(0x756220)
#define MNIFGBEIKPO_GAFONDJLAHC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MNIFGBEIKPO_GEKHFJHDBCH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MNIFGBEIKPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNIFGBEIKPO_KDJCOODFLGN_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define MNIFGBEIKPO_LAAJBJBNDFG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MNIFGBEIKPO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA9EDD0)
#define MNIFGBEIKPO_OMEJMFNOIPC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MNIFGBEIKPO_PJGICMHFMHN_OFFSET UNITYSDK_OFFSET(0x788DB0)
#define MNIFGBEIKPO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MNIFGBEIKPO_TypeDefinitionIndex = 11413;

struct alignas(4) MNIFGBEIKPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNIFGBEIKPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MNIFGBEIKPO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MNIFGBEIKPO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LAAJBJBNDFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_LAAJBJBNDFG_OFFSET))(this);
	}

	::System::String* BGIIFJCBFMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_BGIIFJCBFMN_OFFSET))(this);
	}

	::System::Int32 FLCJMAKCNGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_FLCJMAKCNGD_OFFSET))(this);
	}

	::System::Int32 GEKHFJHDBCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_GEKHFJHDBCH_OFFSET))(this);
	}

	::System::Int32 EOCBHBMJKFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_EOCBHBMJKFB_OFFSET))(this);
	}

	::System::Int32 OMEJMFNOIPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_OMEJMFNOIPC_OFFSET))(this);
	}

	::System::Int32 EKPNCJFCCOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_EKPNCJFCCOE_OFFSET))(this);
	}

	/*
	::MNIFGBEIKPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNIFGBEIKPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GAFONDJLAHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_GAFONDJLAHC_OFFSET))(this);
	}

	::System::Boolean KDJCOODFLGN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_KDJCOODFLGN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean PJGICMHFMHN(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + MNIFGBEIKPO_PJGICMHFMHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
