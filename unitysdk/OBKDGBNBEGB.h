#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OBKDGBNBEGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBKDGBNBEGB_EEMGEPIKENL_OFFSET UNITYSDK_OFFSET(0x754970)
#define OBKDGBNBEGB_EKNLEOCHPAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OBKDGBNBEGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBKDGBNBEGB_LDDDPOFGFDM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OBKDGBNBEGB_MFOOKILPPDI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBKDGBNBEGB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195C03A0)
#define OBKDGBNBEGB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBKDGBNBEGB_TypeDefinitionIndex = 16733;

struct alignas(4) OBKDGBNBEGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBKDGBNBEGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LDDDPOFGFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_LDDDPOFGFDM_OFFSET))(this);
	}

	/*
	static ::OBKDGBNBEGB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBKDGBNBEGB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OBKDGBNBEGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBKDGBNBEGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EKNLEOCHPAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_EKNLEOCHPAP_OFFSET))(this);
	}

	::System::Int32 EEMGEPIKENL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_EEMGEPIKENL_OFFSET))(this);
	}

	::System::Int32 MFOOKILPPDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKDGBNBEGB_MFOOKILPPDI_OFFSET))(this);
	}
};
