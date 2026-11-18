#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HKHCHKPKIJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HKHCHKPKIJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKHCHKPKIJE_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HKHCHKPKIJE_HLPBEICLFIB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HKHCHKPKIJE_INKFFFABICA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HKHCHKPKIJE_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define HKHCHKPKIJE_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754970)
#define HKHCHKPKIJE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6137E0)
#define HKHCHKPKIJE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HKHCHKPKIJE_TypeDefinitionIndex = 14886;

struct alignas(4) HKHCHKPKIJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHCHKPKIJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	static ::HKHCHKPKIJE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HKHCHKPKIJE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 INKFFFABICA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_INKFFFABICA_OFFSET))(this);
	}

	::System::String* HLPBEICLFIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_HLPBEICLFIB_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::HKHCHKPKIJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKHCHKPKIJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHCHKPKIJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
