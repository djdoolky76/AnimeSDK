#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MJDPCCCAGKD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MJDPCCCAGKD_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define MJDPCCCAGKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MJDPCCCAGKD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MJDPCCCAGKD_DOKFAOEOEFP_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MJDPCCCAGKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJDPCCCAGKD_IHHMOOHPFID_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MJDPCCCAGKD_IJENMBHBNPE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MJDPCCCAGKD_KGMDDJHHODA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MJDPCCCAGKD_LIDFGEMECDE_OFFSET UNITYSDK_OFFSET(0x755710)
#define MJDPCCCAGKD_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MJDPCCCAGKD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0B6300)
#define MJDPCCCAGKD_PKGEGHPPFJB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MJDPCCCAGKD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MJDPCCCAGKD_TypeDefinitionIndex = 16963;

struct alignas(4) MJDPCCCAGKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJDPCCCAGKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_AKJEBFJMGCJ_OFFSET))(this);
	}

	::System::Int32 DOKFAOEOEFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_DOKFAOEOEFP_OFFSET))(this);
	}

	::System::String* IHHMOOHPFID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_IHHMOOHPFID_OFFSET))(this);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::MJDPCCCAGKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJDPCCCAGKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IJENMBHBNPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_IJENMBHBNPE_OFFSET))(this);
	}

	::System::String* LIDFGEMECDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_LIDFGEMECDE_OFFSET))(this);
	}

	::System::String* PKGEGHPPFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_PKGEGHPPFJB_OFFSET))(this);
	}

	::System::String* KGMDDJHHODA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_KGMDDJHHODA_OFFSET))(this);
	}

	/*
	static ::MJDPCCCAGKD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MJDPCCCAGKD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDPCCCAGKD_DECMGICKDLH_OFFSET))(this);
	}
};
