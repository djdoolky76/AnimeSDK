#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JGKEKGAPBDA_AECAFOOBJFJ_OFFSET UNITYSDK_OFFSET(0x761710)
#define JGKEKGAPBDA_AMJNKOPICCN_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define JGKEKGAPBDA_AOONHOOJPON_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define JGKEKGAPBDA_BCHMLCOCFGE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JGKEKGAPBDA_BCILGKGDBIG_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define JGKEKGAPBDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGKEKGAPBDA_CADHPFCEOCE_OFFSET UNITYSDK_OFFSET(0x755440)
#define JGKEKGAPBDA_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x757190)
#define JGKEKGAPBDA_DJGANCJAJDL_OFFSET UNITYSDK_OFFSET(0x757290)
#define JGKEKGAPBDA_GEPKIBHABJE_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JGKEKGAPBDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGKEKGAPBDA_GFIGGHKEOIE_OFFSET UNITYSDK_OFFSET(0x755710)
#define JGKEKGAPBDA_HKIDKOCDCFL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGKEKGAPBDA_IKJDAAEGFBE_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define JGKEKGAPBDA_INFMJOKBLCG_OFFSET UNITYSDK_OFFSET(0x758320)
#define JGKEKGAPBDA_JBDFIODADMN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JGKEKGAPBDA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7D9880)
#define JGKEKGAPBDA_OBJNCNHJPFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JGKEKGAPBDA_OIDNLLPFFMC_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define JGKEKGAPBDA_OKLAOKBFANM_OFFSET UNITYSDK_OFFSET(0x755320)
#define JGKEKGAPBDA_PKLNLEHPFCE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JGKEKGAPBDA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGKEKGAPBDA_TypeDefinitionIndex = 14876;

struct alignas(4) JGKEKGAPBDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGKEKGAPBDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JBDFIODADMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_JBDFIODADMN_OFFSET))(this);
	}

	::System::String* AMJNKOPICCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_AMJNKOPICCN_OFFSET))(this);
	}

	/*
	static ::JGKEKGAPBDA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JGKEKGAPBDA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BCILGKGDBIG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_BCILGKGDBIG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DJGANCJAJDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_DJGANCJAJDL_OFFSET))(this);
	}

	::System::String* GFIGGHKEOIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_GFIGGHKEOIE_OFFSET))(this);
	}

	::System::String* OBJNCNHJPFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_OBJNCNHJPFI_OFFSET))(this);
	}

	::System::Int32 HKIDKOCDCFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_HKIDKOCDCFL_OFFSET))(this);
	}

	::System::String* OIDNLLPFFMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_OIDNLLPFFMC_OFFSET))(this);
	}

	::System::String* BCHMLCOCFGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_BCHMLCOCFGE_OFFSET))(this);
	}

	::System::String* GEPKIBHABJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_GEPKIBHABJE_OFFSET))(this);
	}

	::System::String* AECAFOOBJFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_AECAFOOBJFJ_OFFSET))(this);
	}

	::System::String* INFMJOKBLCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_INFMJOKBLCG_OFFSET))(this);
	}

	::System::Int32 OKLAOKBFANM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_OKLAOKBFANM_OFFSET))(this);
	}

	/*
	::JGKEKGAPBDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGKEKGAPBDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AOONHOOJPON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_AOONHOOJPON_OFFSET))(this);
	}

	::System::Int32 CADHPFCEOCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_CADHPFCEOCE_OFFSET))(this);
	}

	::System::String* PKLNLEHPFCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_PKLNLEHPFCE_OFFSET))(this);
	}

	::System::Int32 IKJDAAEGFBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_IKJDAAEGFBE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKEKGAPBDA_DECMGICKDLH_OFFSET))(this);
	}
};
