#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HDBDKPAJPJC_AHOPMEEFGCB_OFFSET UNITYSDK_OFFSET(0x757D20)
#define HDBDKPAJPJC_BACBHLFBOCE_OFFSET UNITYSDK_OFFSET(0x755320)
#define HDBDKPAJPJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HDBDKPAJPJC_CGCIILEDOBB_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define HDBDKPAJPJC_CHNNOCAIGDA_OFFSET UNITYSDK_OFFSET(0x757290)
#define HDBDKPAJPJC_CLGNFCMHAFN_OFFSET UNITYSDK_OFFSET(0x757760)
#define HDBDKPAJPJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDBDKPAJPJC_HBDBHPGOBNH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HDBDKPAJPJC_HPAKOANLJPN_OFFSET UNITYSDK_OFFSET(0x756440)
#define HDBDKPAJPJC_IBDDDDAAEOP_OFFSET UNITYSDK_OFFSET(0x755570)
#define HDBDKPAJPJC_KHGIIOGNCMA_OFFSET UNITYSDK_OFFSET(0x757520)
#define HDBDKPAJPJC_LHCHCKNBFBL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HDBDKPAJPJC_NEBKKLLGMGI_OFFSET UNITYSDK_OFFSET(0x757690)
#define HDBDKPAJPJC_NEPBKCHKINC_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define HDBDKPAJPJC_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754920)
#define HDBDKPAJPJC_NMNDIGOADMC_OFFSET UNITYSDK_OFFSET(0x754970)
#define HDBDKPAJPJC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4E8640)
#define HDBDKPAJPJC_OBNFJODKLOL_OFFSET UNITYSDK_OFFSET(0x760650)
#define HDBDKPAJPJC_ODFOAIDFFFC_OFFSET UNITYSDK_OFFSET(0x755890)
#define HDBDKPAJPJC_OGPFJBJBOGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HDBDKPAJPJC_OMHGCPONLGC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HDBDKPAJPJC_PCJNBHIFMAJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HDBDKPAJPJC_PGEMCKMAHFJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HDBDKPAJPJC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HDBDKPAJPJC_TypeDefinitionIndex = 13923;

struct alignas(4) HDBDKPAJPJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDBDKPAJPJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HPAKOANLJPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_HPAKOANLJPN_OFFSET))(this);
	}

	::System::String* AHOPMEEFGCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_AHOPMEEFGCB_OFFSET))(this);
	}

	/*
	::HDBDKPAJPJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDBDKPAJPJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NMNDIGOADMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_NMNDIGOADMC_OFFSET))(this);
	}

	::System::Int32 OBNFJODKLOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_OBNFJODKLOL_OFFSET))(this);
	}

	::System::String* CGCIILEDOBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_CGCIILEDOBB_OFFSET))(this);
	}

	::System::Boolean NEPBKCHKINC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_NEPBKCHKINC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HDBDKPAJPJC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HDBDKPAJPJC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LHCHCKNBFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_LHCHCKNBFBL_OFFSET))(this);
	}

	::System::String* PCJNBHIFMAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_PCJNBHIFMAJ_OFFSET))(this);
	}

	::System::String* KHGIIOGNCMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_KHGIIOGNCMA_OFFSET))(this);
	}

	::System::Int32 HBDBHPGOBNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_HBDBHPGOBNH_OFFSET))(this);
	}

	::System::String* NEBKKLLGMGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_NEBKKLLGMGI_OFFSET))(this);
	}

	::System::String* PGEMCKMAHFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_PGEMCKMAHFJ_OFFSET))(this);
	}

	::System::Int32 ODFOAIDFFFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_ODFOAIDFFFC_OFFSET))(this);
	}

	::System::Int32 BACBHLFBOCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_BACBHLFBOCE_OFFSET))(this);
	}

	::System::String* IBDDDDAAEOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_IBDDDDAAEOP_OFFSET))(this);
	}

	::System::Int32 OMHGCPONLGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_OMHGCPONLGC_OFFSET))(this);
	}

	::System::String* CLGNFCMHAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_CLGNFCMHAFN_OFFSET))(this);
	}

	::System::Int32 OGPFJBJBOGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_OGPFJBJBOGH_OFFSET))(this);
	}

	::System::String* CHNNOCAIGDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_CHNNOCAIGDA_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDKPAJPJC_NFKFHJBEPGD_OFFSET))(this);
	}
};
