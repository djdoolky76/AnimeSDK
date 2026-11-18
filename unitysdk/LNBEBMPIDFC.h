#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LNBEBMPIDFC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LNBEBMPIDFC_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754920)
#define LNBEBMPIDFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LNBEBMPIDFC_CABFABMELAN_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LNBEBMPIDFC_DNBHFHFGGEJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LNBEBMPIDFC_FLIPDCJJAOL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LNBEBMPIDFC_GCMNAINGEDN_OFFSET UNITYSDK_OFFSET(0x754A70)
#define LNBEBMPIDFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNBEBMPIDFC_HNKDOKOOMHH_OFFSET UNITYSDK_OFFSET(0x754E10)
#define LNBEBMPIDFC_LEKGCMFEMHF_OFFSET UNITYSDK_OFFSET(0x762B30)
#define LNBEBMPIDFC_OAGOIJFEEFD_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define LNBEBMPIDFC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1733CCD0)
#define LNBEBMPIDFC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LNBEBMPIDFC_TypeDefinitionIndex = 12096;

struct alignas(4) LNBEBMPIDFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNBEBMPIDFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OAGOIJFEEFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_OAGOIJFEEFD_OFFSET))(this);
	}

	::System::Int32 DNBHFHFGGEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_DNBHFHFGGEJ_OFFSET))(this);
	}

	::System::Boolean HNKDOKOOMHH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_HNKDOKOOMHH_OFFSET))(this);
	}

	::System::Boolean LEKGCMFEMHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_LEKGCMFEMHF_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	::LNBEBMPIDFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNBEBMPIDFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GCMNAINGEDN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_GCMNAINGEDN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CABFABMELAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_CABFABMELAN_OFFSET))(this);
	}

	::System::String* FLIPDCJJAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_FLIPDCJJAOL_OFFSET))(this);
	}

	/*
	static ::LNBEBMPIDFC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LNBEBMPIDFC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBEBMPIDFC_ACOEONABOJL_OFFSET))(this);
	}
};
