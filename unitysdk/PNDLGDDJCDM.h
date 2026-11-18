#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PNDLGDDJCDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PNDLGDDJCDM_EFEOOGMGBCA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PNDLGDDJCDM_FMGKEKJPPDM_OFFSET UNITYSDK_OFFSET(0x761240)
#define PNDLGDDJCDM_FNOAHMKNNMC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PNDLGDDJCDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNDLGDDJCDM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0B41D0)
#define PNDLGDDJCDM_OOBLBLJPJEJ_OFFSET UNITYSDK_OFFSET(0x7612A0)
#define PNDLGDDJCDM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PNDLGDDJCDM_TypeDefinitionIndex = 16671;

struct alignas(4) PNDLGDDJCDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDLGDDJCDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FMGKEKJPPDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_FMGKEKJPPDM_OFFSET))(this);
	}

	::System::Int32 FNOAHMKNNMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_FNOAHMKNNMC_OFFSET))(this);
	}

	::System::Int32 EFEOOGMGBCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_EFEOOGMGBCA_OFFSET))(this);
	}

	::System::Boolean OOBLBLJPJEJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_OOBLBLJPJEJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PNDLGDDJCDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNDLGDDJCDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNDLGDDJCDM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PNDLGDDJCDM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PNDLGDDJCDM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
