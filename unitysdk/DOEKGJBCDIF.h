#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DOEKGJBCDIF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DOEKGJBCDIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOEKGJBCDIF_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x754970)
#define DOEKGJBCDIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOEKGJBCDIF_GPEGJNMAJAA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DOEKGJBCDIF_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DOEKGJBCDIF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x177887E0)
#define DOEKGJBCDIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOEKGJBCDIF_TypeDefinitionIndex = 17175;

struct alignas(4) DOEKGJBCDIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOEKGJBCDIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* GPEGJNMAJAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_GPEGJNMAJAA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DOEKGJBCDIF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOEKGJBCDIF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DOEKGJBCDIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOEKGJBCDIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOEKGJBCDIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
