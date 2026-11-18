#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLLODAJIGCO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CLLODAJIGCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLLODAJIGCO_FNOPCKFPMGC_OFFSET UNITYSDK_OFFSET(0x762C60)
#define CLLODAJIGCO_FONIBOHMHCL_OFFSET UNITYSDK_OFFSET(0x7561C0)
#define CLLODAJIGCO_GAODHFDFJPH_OFFSET UNITYSDK_OFFSET(0x765A30)
#define CLLODAJIGCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLLODAJIGCO_ILJJNKELJMF_OFFSET UNITYSDK_OFFSET(0x757190)
#define CLLODAJIGCO_IPCCIHCHENA_OFFSET UNITYSDK_OFFSET(0x756280)
#define CLLODAJIGCO_MHNGFPOAODH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define CLLODAJIGCO_MJKPDLDAMNL_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CLLODAJIGCO_MNFNDMPEEKM_OFFSET UNITYSDK_OFFSET(0x765AF0)
#define CLLODAJIGCO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157923A0)
#define CLLODAJIGCO_OGMBICJNDIE_OFFSET UNITYSDK_OFFSET(0x755440)
#define CLLODAJIGCO_OJMFHLPHEKN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CLLODAJIGCO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLLODAJIGCO_TypeDefinitionIndex = 13963;

struct alignas(4) CLLODAJIGCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLLODAJIGCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MHNGFPOAODH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_MHNGFPOAODH_OFFSET))(this);
	}

	::System::String* OJMFHLPHEKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_OJMFHLPHEKN_OFFSET))(this);
	}

	::System::Int32 FONIBOHMHCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_FONIBOHMHCL_OFFSET))(this);
	}

	::System::Boolean GAODHFDFJPH(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLLODAJIGCO_GAODHFDFJPH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean FNOPCKFPMGC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLLODAJIGCO_FNOPCKFPMGC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ILJJNKELJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_ILJJNKELJMF_OFFSET))(this);
	}

	::System::Int32 OGMBICJNDIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_OGMBICJNDIE_OFFSET))(this);
	}

	::System::Boolean MNFNDMPEEKM(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CLLODAJIGCO_MNFNDMPEEKM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CLLODAJIGCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLLODAJIGCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLLODAJIGCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IPCCIHCHENA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_IPCCIHCHENA_OFFSET))(this);
	}

	/*
	static ::CLLODAJIGCO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CLLODAJIGCO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLLODAJIGCO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* MJKPDLDAMNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLODAJIGCO_MJKPDLDAMNL_OFFSET))(this);
	}
};
