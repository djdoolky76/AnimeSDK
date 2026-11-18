#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BBCLKNNJGIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BBCLKNNJGIF_EAKKDFECFDM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BBCLKNNJGIF_EIMNAHILNEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BBCLKNNJGIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBCLKNNJGIF_NBCGMNDPLEI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BBCLKNNJGIF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BDFD70)
#define BBCLKNNJGIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BBCLKNNJGIF_TypeDefinitionIndex = 10770;

struct alignas(4) BBCLKNNJGIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCLKNNJGIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCLKNNJGIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NBCGMNDPLEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCLKNNJGIF_NBCGMNDPLEI_OFFSET))(this);
	}

	/*
	::BBCLKNNJGIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBCLKNNJGIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCLKNNJGIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EAKKDFECFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCLKNNJGIF_EAKKDFECFDM_OFFSET))(this);
	}

	/*
	static ::BBCLKNNJGIF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BBCLKNNJGIF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BBCLKNNJGIF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EIMNAHILNEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCLKNNJGIF_EIMNAHILNEA_OFFSET))(this);
	}
};
