#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NDOGMOAJDCH_ACFHEEKPJKO_OFFSET UNITYSDK_OFFSET(0x762BA0)
#define NDOGMOAJDCH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDOGMOAJDCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDOGMOAJDCH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define NDOGMOAJDCH_CGJJFGDAPHG_OFFSET UNITYSDK_OFFSET(0x755440)
#define NDOGMOAJDCH_DLLAMDBEMPP_OFFSET UNITYSDK_OFFSET(0x754920)
#define NDOGMOAJDCH_EMHAPAJEOIP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NDOGMOAJDCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDOGMOAJDCH_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NDOGMOAJDCH_HOCHJJGFCAF_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NDOGMOAJDCH_INDDOAKAFEJ_OFFSET UNITYSDK_OFFSET(0x762D20)
#define NDOGMOAJDCH_JLAIALGCMBL_OFFSET UNITYSDK_OFFSET(0x7C3D50)
#define NDOGMOAJDCH_KEFDJMNLOGM_OFFSET UNITYSDK_OFFSET(0x757F20)
#define NDOGMOAJDCH_KKNFABMDOLF_OFFSET UNITYSDK_OFFSET(0x762C60)
#define NDOGMOAJDCH_MCDMIFAGABO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NDOGMOAJDCH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF69A90)
#define NDOGMOAJDCH_PHJDOOBAKKO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NDOGMOAJDCH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDOGMOAJDCH_TypeDefinitionIndex = 14316;

struct alignas(4) NDOGMOAJDCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDOGMOAJDCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EMHAPAJEOIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_EMHAPAJEOIP_OFFSET))(this);
	}

	::System::Int32 INDDOAKAFEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_INDDOAKAFEJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MCDMIFAGABO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_MCDMIFAGABO_OFFSET))(this);
	}

	::System::Int32 CGJJFGDAPHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_CGJJFGDAPHG_OFFSET))(this);
	}

	/*
	::NDOGMOAJDCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDOGMOAJDCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NDOGMOAJDCH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NDOGMOAJDCH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HOCHJJGFCAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_HOCHJJGFCAF_OFFSET))(this);
	}

	::System::Boolean KEFDJMNLOGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_KEFDJMNLOGM_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 DLLAMDBEMPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_DLLAMDBEMPP_OFFSET))(this);
	}

	::System::Int32 PHJDOOBAKKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_PHJDOOBAKKO_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean KKNFABMDOLF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_KKNFABMDOLF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean ACFHEEKPJKO(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_ACFHEEKPJKO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JLAIALGCMBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOGMOAJDCH_JLAIALGCMBL_OFFSET))(this);
	}
};
