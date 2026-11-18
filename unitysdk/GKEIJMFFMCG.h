#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GKEIJMFFMCG_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x758780)
#define GKEIJMFFMCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GKEIJMFFMCG_CCMACPPABPG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GKEIJMFFMCG_GACAMEPMBHI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define GKEIJMFFMCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKEIJMFFMCG_GKBCKCBGMCB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GKEIJMFFMCG_HACCDGGCFKC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GKEIJMFFMCG_NBEELKECLGE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GKEIJMFFMCG_NINLDHBFCAM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GKEIJMFFMCG_PCEKIMAAGEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GKEIJMFFMCG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GKEIJMFFMCG_TypeDefinitionIndex = 16250;

struct alignas(4) GKEIJMFFMCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKEIJMFFMCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CCMACPPABPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_CCMACPPABPG_OFFSET))(this);
	}

	::System::Int32 GKBCKCBGMCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_GKBCKCBGMCB_OFFSET))(this);
	}

	::System::String* GACAMEPMBHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_GACAMEPMBHI_OFFSET))(this);
	}

	::System::Int32 NBEELKECLGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_NBEELKECLGE_OFFSET))(this);
	}

	::System::String* NINLDHBFCAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_NINLDHBFCAM_OFFSET))(this);
	}

	::System::Int32 PCEKIMAAGEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_PCEKIMAAGEC_OFFSET))(this);
	}

	::System::String* HACCDGGCFKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_HACCDGGCFKC_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_AFIKPGHMNCI_OFFSET))(this);
	}

	/*
	::GKEIJMFFMCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKEIJMFFMCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKEIJMFFMCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
