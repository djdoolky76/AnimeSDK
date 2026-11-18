#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JCMCNIKANHE_BBOPBHLOKKJ_OFFSET UNITYSDK_OFFSET(0x757450)
#define JCMCNIKANHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCMCNIKANHE_CBPDCPCNKCG_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define JCMCNIKANHE_DFJPFJDHBAN_OFFSET UNITYSDK_OFFSET(0x7606B0)
#define JCMCNIKANHE_EBKDJMEEBBN_OFFSET UNITYSDK_OFFSET(0x761000)
#define JCMCNIKANHE_ELADOKEPKPJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JCMCNIKANHE_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x756440)
#define JCMCNIKANHE_FMGLKMOCLDA_OFFSET UNITYSDK_OFFSET(0x755190)
#define JCMCNIKANHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCMCNIKANHE_GGFFBJIJMMG_OFFSET UNITYSDK_OFFSET(0x757C10)
#define JCMCNIKANHE_IIAFMAIIGHO_OFFSET UNITYSDK_OFFSET(0x757520)
#define JCMCNIKANHE_IIEOBLMCGJL_OFFSET UNITYSDK_OFFSET(0x758320)
#define JCMCNIKANHE_JINCJFNHGNB_OFFSET UNITYSDK_OFFSET(0x757C60)
#define JCMCNIKANHE_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCMCNIKANHE_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x7631A0)
#define JCMCNIKANHE_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754920)
#define JCMCNIKANHE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17486BB0)
#define JCMCNIKANHE_OHFKKNPGGIE_OFFSET UNITYSDK_OFFSET(0x757D20)
#define JCMCNIKANHE_PKGEGHPPFJB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JCMCNIKANHE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCMCNIKANHE_TypeDefinitionIndex = 16728;

struct alignas(4) JCMCNIKANHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCMCNIKANHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EBKDJMEEBBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_EBKDJMEEBBN_OFFSET))(this);
	}

	::System::String* OHFKKNPGGIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_OHFKKNPGGIE_OFFSET))(this);
	}

	::System::String* PKGEGHPPFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_PKGEGHPPFJB_OFFSET))(this);
	}

	::System::Boolean JINCJFNHGNB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + JCMCNIKANHE_JINCJFNHGNB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 FMGLKMOCLDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_FMGLKMOCLDA_OFFSET))(this);
	}

	::System::String* IIEOBLMCGJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_IIEOBLMCGJL_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_FJPGCNGHHCC_OFFSET))(this);
	}

	/*
	static ::JCMCNIKANHE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCMCNIKANHE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCMCNIKANHE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_LHCHCKNBFBL_OFFSET))(this);
	}

	/*
	::JCMCNIKANHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCMCNIKANHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCMCNIKANHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DFJPFJDHBAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_DFJPFJDHBAN_OFFSET))(this);
	}

	::System::String* IIAFMAIIGHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_IIAFMAIIGHO_OFFSET))(this);
	}

	::System::Int32 BBOPBHLOKKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_BBOPBHLOKKJ_OFFSET))(this);
	}

	::System::Int32 GGFFBJIJMMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_GGFFBJIJMMG_OFFSET))(this);
	}

	::System::Int32 CBPDCPCNKCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_CBPDCPCNKCG_OFFSET))(this);
	}

	::System::String* ELADOKEPKPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMCNIKANHE_ELADOKEPKPJ_OFFSET))(this);
	}
};
