#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NFKELEEPJNF_ABDPFCBJEOG_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define NFKELEEPJNF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NFKELEEPJNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NFKELEEPJNF_CJMHAMAPJMG_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define NFKELEEPJNF_DHGJFFKMDKG_OFFSET UNITYSDK_OFFSET(0x761930)
#define NFKELEEPJNF_GDHKDHEPCLM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NFKELEEPJNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFKELEEPJNF_GHHGDIELLCO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NFKELEEPJNF_HNGKGANPNGN_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define NFKELEEPJNF_KMDNJDNCBJF_OFFSET UNITYSDK_OFFSET(0x758320)
#define NFKELEEPJNF_MKHMCNEMCBM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NFKELEEPJNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195B3FB0)
#define NFKELEEPJNF_PHIJNAJKICE_OFFSET UNITYSDK_OFFSET(0x762D20)
#define NFKELEEPJNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NFKELEEPJNF_TypeDefinitionIndex = 15639;

struct alignas(4) NFKELEEPJNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFKELEEPJNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KMDNJDNCBJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_KMDNJDNCBJF_OFFSET))(this);
	}

	/*
	::NFKELEEPJNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFKELEEPJNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFKELEEPJNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CJMHAMAPJMG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NFKELEEPJNF_CJMHAMAPJMG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::NFKELEEPJNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NFKELEEPJNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NFKELEEPJNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PHIJNAJKICE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_PHIJNAJKICE_OFFSET))(this);
	}

	::System::String* ABDPFCBJEOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_ABDPFCBJEOG_OFFSET))(this);
	}

	::System::Boolean DHGJFFKMDKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_DHGJFFKMDKG_OFFSET))(this);
	}

	::System::Int32 HNGKGANPNGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_HNGKGANPNGN_OFFSET))(this);
	}

	::System::String* GDHKDHEPCLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_GDHKDHEPCLM_OFFSET))(this);
	}

	::System::String* MKHMCNEMCBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_MKHMCNEMCBM_OFFSET))(this);
	}

	::System::String* GHHGDIELLCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKELEEPJNF_GHHGDIELLCO_OFFSET))(this);
	}
};
