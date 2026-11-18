#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HLDKGPADHFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLDKGPADHFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLDKGPADHFC_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HLDKGPADHFC_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLDKGPADHFC_MJPFEJBMGLF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HLDKGPADHFC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17477E20)
#define HLDKGPADHFC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLDKGPADHFC_TypeDefinitionIndex = 9957;

struct alignas(4) HLDKGPADHFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDKGPADHFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLDKGPADHFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HLDKGPADHFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLDKGPADHFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLDKGPADHFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MJPFEJBMGLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDKGPADHFC_MJPFEJBMGLF_OFFSET))(this);
	}

	/*
	static ::HLDKGPADHFC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 OKCHBNGAINC, ::System::Int32 DADIDBMHLOI, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLDKGPADHFC(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLDKGPADHFC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, OKCHBNGAINC, DADIDBMHLOI, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDKGPADHFC_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDKGPADHFC_MFPMIFLLCAJ_OFFSET))(this);
	}
};
