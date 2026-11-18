#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MIBFIHPONLC_BCKAJKHEAFP_OFFSET UNITYSDK_OFFSET(0x757330)
#define MIBFIHPONLC_BFGIGOJDFIG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MIBFIHPONLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MIBFIHPONLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIBFIHPONLC_GJIKCKHBMHM_OFFSET UNITYSDK_OFFSET(0x757290)
#define MIBFIHPONLC_HKGLMKJMCKD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MIBFIHPONLC_MACBJOPDJAM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MIBFIHPONLC_NFAEPBJPINH_OFFSET UNITYSDK_OFFSET(0x763920)
#define MIBFIHPONLC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E0E150)
#define MIBFIHPONLC_PBHPFHKOOHB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MIBFIHPONLC_PHDCLMPHFKD_OFFSET UNITYSDK_OFFSET(0x755890)
#define MIBFIHPONLC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MIBFIHPONLC_TypeDefinitionIndex = 9849;

struct alignas(4) MIBFIHPONLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIBFIHPONLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MIBFIHPONLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIBFIHPONLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIBFIHPONLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PHDCLMPHFKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_PHDCLMPHFKD_OFFSET))(this);
	}

	::System::Int32 BFGIGOJDFIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_BFGIGOJDFIG_OFFSET))(this);
	}

	::System::Int32 HKGLMKJMCKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_HKGLMKJMCKD_OFFSET))(this);
	}

	::System::String* GJIKCKHBMHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_GJIKCKHBMHM_OFFSET))(this);
	}

	::System::Int32 PBHPFHKOOHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_PBHPFHKOOHB_OFFSET))(this);
	}

	::System::String* MACBJOPDJAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_MACBJOPDJAM_OFFSET))(this);
	}

	::System::Int32 BCKAJKHEAFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBFIHPONLC_BCKAJKHEAFP_OFFSET))(this);
	}

	/*
	static ::MIBFIHPONLC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MIBFIHPONLC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MIBFIHPONLC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean NFAEPBJPINH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MIBFIHPONLC_NFAEPBJPINH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
