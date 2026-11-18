#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OOPIPLAHJGJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OOPIPLAHJGJ_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OOPIPLAHJGJ_AJLGHAKCMEO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OOPIPLAHJGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OOPIPLAHJGJ_CDFGDIFKFCG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OOPIPLAHJGJ_DKPFPHDEDFD_OFFSET UNITYSDK_OFFSET(0x756570)
#define OOPIPLAHJGJ_EMHDEMEIIFK_OFFSET UNITYSDK_OFFSET(0x758320)
#define OOPIPLAHJGJ_FFBLHLFBEMC_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OOPIPLAHJGJ_GDKCBOHCOCK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OOPIPLAHJGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOPIPLAHJGJ_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OOPIPLAHJGJ_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OOPIPLAHJGJ_OLPFCKIFFLP_OFFSET UNITYSDK_OFFSET(0x756220)
#define OOPIPLAHJGJ_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x757290)
#define OOPIPLAHJGJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OOPIPLAHJGJ_TypeDefinitionIndex = 13443;

struct alignas(4) OOPIPLAHJGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 GDKCBOHCOCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_GDKCBOHCOCK_OFFSET))(this);
	}

	::System::Int32 AJLGHAKCMEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_AJLGHAKCMEO_OFFSET))(this);
	}

	::System::String* PEOEBEBFIJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::String* CDFGDIFKFCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_CDFGDIFKFCG_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Int32 FFBLHLFBEMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_FFBLHLFBEMC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean DKPFPHDEDFD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_DKPFPHDEDFD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OOPIPLAHJGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOPIPLAHJGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EMHDEMEIIFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_EMHDEMEIIFK_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_NDCPGHGEPAA_OFFSET))(this);
	}

	::System::Int32 OLPFCKIFFLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPIPLAHJGJ_OLPFCKIFFLP_OFFSET))(this);
	}
};
