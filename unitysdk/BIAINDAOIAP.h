#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BIAINDAOIAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BIAINDAOIAP_APGBGFKPODJ_OFFSET UNITYSDK_OFFSET(0x761AD0)
#define BIAINDAOIAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BIAINDAOIAP_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x7AC500)
#define BIAINDAOIAP_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x756440)
#define BIAINDAOIAP_ENJKLGGNENJ_OFFSET UNITYSDK_OFFSET(0x7DE7A0)
#define BIAINDAOIAP_FMFIDBOHKIG_OFFSET UNITYSDK_OFFSET(0x7BF380)
#define BIAINDAOIAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIAINDAOIAP_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x761000)
#define BIAINDAOIAP_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x789AB0)
#define BIAINDAOIAP_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define BIAINDAOIAP_NIKHNJEDBMK_OFFSET UNITYSDK_OFFSET(0x762A90)
#define BIAINDAOIAP_NNALELKNPBL_OFFSET UNITYSDK_OFFSET(0x7638C0)
#define BIAINDAOIAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5349A0)
#define BIAINDAOIAP_PBMFKKLKICC_OFFSET UNITYSDK_OFFSET(0x78A950)
#define BIAINDAOIAP_PFDCDOJNEGD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BIAINDAOIAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BIAINDAOIAP_TypeDefinitionIndex = 16443;

struct alignas(4) BIAINDAOIAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIAINDAOIAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NNALELKNPBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_NNALELKNPBL_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::String* PFDCDOJNEGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_PFDCDOJNEGD_OFFSET))(this);
	}

	::System::String* ENJKLGGNENJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_ENJKLGGNENJ_OFFSET))(this);
	}

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* APGBGFKPODJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_APGBGFKPODJ_OFFSET))(this);
	}

	::System::String* FMFIDBOHKIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_FMFIDBOHKIG_OFFSET))(this);
	}

	::System::Boolean PBMFKKLKICC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BIAINDAOIAP_PBMFKKLKICC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BIAINDAOIAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIAINDAOIAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIAINDAOIAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIAINDAOIAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BIAINDAOIAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BIAINDAOIAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NIKHNJEDBMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_NIKHNJEDBMK_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BIAINDAOIAP_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAINDAOIAP_LPFMNKEFPMM_OFFSET))(this);
	}
};
