#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ICKGCKKNMKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ICKGCKKNMKF_BLNNLLNEDJH_OFFSET UNITYSDK_OFFSET(0x755710)
#define ICKGCKKNMKF_CEHBEIONONC_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define ICKGCKKNMKF_EOJDHLAJJID_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ICKGCKKNMKF_FKAOANDANHI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ICKGCKKNMKF_FKLGAFPBMBA_OFFSET UNITYSDK_OFFSET(0x755790)
#define ICKGCKKNMKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICKGCKKNMKF_GFCMKCIPKME_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ICKGCKKNMKF_GGNLHJNPPAK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define ICKGCKKNMKF_HAOCEANPBOJ_OFFSET UNITYSDK_OFFSET(0x757C60)
#define ICKGCKKNMKF_HOADHKFCEIL_OFFSET UNITYSDK_OFFSET(0x757E20)
#define ICKGCKKNMKF_JBEMNEOALAI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ICKGCKKNMKF_LJJCIGMGPAJ_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define ICKGCKKNMKF_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x757290)
#define ICKGCKKNMKF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152E1080)
#define ICKGCKKNMKF_PIOLINAIALG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ICKGCKKNMKF_PJIALFEOMNG_OFFSET UNITYSDK_OFFSET(0x757F20)
#define ICKGCKKNMKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ICKGCKKNMKF_TypeDefinitionIndex = 12595;

struct alignas(4) ICKGCKKNMKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICKGCKKNMKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CEHBEIONONC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_CEHBEIONONC_OFFSET))(this);
	}

	::System::Boolean HAOCEANPBOJ(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_HAOCEANPBOJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::ICKGCKKNMKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICKGCKKNMKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BLNNLLNEDJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_BLNNLLNEDJH_OFFSET))(this);
	}

	::System::Int32 GFCMKCIPKME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_GFCMKCIPKME_OFFSET))(this);
	}

	::System::String* HOADHKFCEIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_HOADHKFCEIL_OFFSET))(this);
	}

	::System::Int32 PIOLINAIALG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_PIOLINAIALG_OFFSET))(this);
	}

	::System::Int32 FKLGAFPBMBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_FKLGAFPBMBA_OFFSET))(this);
	}

	::System::Boolean LJJCIGMGPAJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_LJJCIGMGPAJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::String* GGNLHJNPPAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_GGNLHJNPPAK_OFFSET))(this);
	}

	::System::String* EOJDHLAJJID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_EOJDHLAJJID_OFFSET))(this);
	}

	::System::Int32 JBEMNEOALAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_JBEMNEOALAI_OFFSET))(this);
	}

	/*
	static ::ICKGCKKNMKF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ICKGCKKNMKF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PJIALFEOMNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_PJIALFEOMNG_OFFSET))(this);
	}

	::System::String* FKAOANDANHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKGCKKNMKF_FKAOANDANHI_OFFSET))(this);
	}
};
