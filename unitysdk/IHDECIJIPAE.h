#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IHDECIJIPAE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IHDECIJIPAE_BDOLFLPBDOB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IHDECIJIPAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IHDECIJIPAE_DGBLEEEPKLB_OFFSET UNITYSDK_OFFSET(0x755E40)
#define IHDECIJIPAE_DOAPNFPEKNE_OFFSET UNITYSDK_OFFSET(0x754920)
#define IHDECIJIPAE_FKJKOIPOIJA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IHDECIJIPAE_GBGHCOHPFPL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define IHDECIJIPAE_GBPOKLOJPBE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IHDECIJIPAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IHDECIJIPAE_GKLKOKOJJBG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define IHDECIJIPAE_MFAKEKFOCFI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IHDECIJIPAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IHDECIJIPAE_TypeDefinitionIndex = 14236;

struct alignas(4) IHDECIJIPAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHDECIJIPAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGBLEEEPKLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_DGBLEEEPKLB_OFFSET))(this);
	}

	/*
	::IHDECIJIPAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IHDECIJIPAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IHDECIJIPAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKLKOKOJJBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_GKLKOKOJJBG_OFFSET))(this);
	}

	::System::Int32 DOAPNFPEKNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_DOAPNFPEKNE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FKJKOIPOIJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_FKJKOIPOIJA_OFFSET))(this);
	}

	::System::Int32 GBGHCOHPFPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_GBGHCOHPFPL_OFFSET))(this);
	}

	::System::Int32 GBPOKLOJPBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_GBPOKLOJPBE_OFFSET))(this);
	}

	::System::Int32 BDOLFLPBDOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_BDOLFLPBDOB_OFFSET))(this);
	}

	::System::Int32 MFAKEKFOCFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDECIJIPAE_MFAKEKFOCFI_OFFSET))(this);
	}
};
