#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PEHDLCMNJHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PEHDLCMNJHE_BOJGMGGBLAA_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define PEHDLCMNJHE_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PEHDLCMNJHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEHDLCMNJHE_NABKEDOOCIA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PEHDLCMNJHE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D002310)
#define PEHDLCMNJHE_POIDNMAHEFD_OFFSET UNITYSDK_OFFSET(0x755790)
#define PEHDLCMNJHE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PEHDLCMNJHE_TypeDefinitionIndex = 12380;

struct alignas(4) PEHDLCMNJHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEHDLCMNJHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PEHDLCMNJHE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PEHDLCMNJHE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 POIDNMAHEFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_POIDNMAHEFD_OFFSET))(this);
	}

	::System::Int32 NABKEDOOCIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_NABKEDOOCIA_OFFSET))(this);
	}

	::System::Boolean BOJGMGGBLAA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_BOJGMGGBLAA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PEHDLCMNJHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEHDLCMNJHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEHDLCMNJHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
