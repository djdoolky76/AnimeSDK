#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DKHAAONDJDO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DKHAAONDJDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DKHAAONDJDO_CEBDGDADIIJ_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DKHAAONDJDO_FJILLEGAIGK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DKHAAONDJDO_GAPDJOAAOLM_OFFSET UNITYSDK_OFFSET(0x758780)
#define DKHAAONDJDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKHAAONDJDO_KHCNOHPMEIL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DKHAAONDJDO_LLKGFLMNOAI_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define DKHAAONDJDO_LNDCFPEBNAA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DKHAAONDJDO_OCDNGAFEKPE_OFFSET UNITYSDK_OFFSET(0x754970)
#define DKHAAONDJDO_PEJHFKBMCAE_OFFSET UNITYSDK_OFFSET(0x7A7F80)
#define DKHAAONDJDO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DKHAAONDJDO_TypeDefinitionIndex = 9673;

struct alignas(4) DKHAAONDJDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHAAONDJDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OCDNGAFEKPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_OCDNGAFEKPE_OFFSET))(this);
	}

	::System::Int32 LNDCFPEBNAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_LNDCFPEBNAA_OFFSET))(this);
	}

	::System::Int32 GAPDJOAAOLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_GAPDJOAAOLM_OFFSET))(this);
	}

	::System::Int32 KHCNOHPMEIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_KHCNOHPMEIL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FJILLEGAIGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_FJILLEGAIGK_OFFSET))(this);
	}

	::System::Int32 CEBDGDADIIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_CEBDGDADIIJ_OFFSET))(this);
	}

	::System::Single PEJHFKBMCAE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_PEJHFKBMCAE_OFFSET))(this);
	}

	::System::String* LLKGFLMNOAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHAAONDJDO_LLKGFLMNOAI_OFFSET))(this);
	}

	/*
	::DKHAAONDJDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKHAAONDJDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHAAONDJDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
