#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LBOKPINMNOA_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LBOKPINMNOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LBOKPINMNOA_BMKKDKAHCAO_OFFSET UNITYSDK_OFFSET(0x754A70)
#define LBOKPINMNOA_DBAOBNPDFMN_OFFSET UNITYSDK_OFFSET(0x757290)
#define LBOKPINMNOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBOKPINMNOA_IOELEOGIGEI_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define LBOKPINMNOA_JBECCIEIHBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LBOKPINMNOA_JPFOIDKIHDO_OFFSET UNITYSDK_OFFSET(0x754970)
#define LBOKPINMNOA_LCOPKDAMOAI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LBOKPINMNOA_LOEDFABIFEB_OFFSET UNITYSDK_OFFSET(0x754920)
#define LBOKPINMNOA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AAF5E10)
#define LBOKPINMNOA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LBOKPINMNOA_TypeDefinitionIndex = 14728;

struct alignas(4) LBOKPINMNOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBOKPINMNOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JPFOIDKIHDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_JPFOIDKIHDO_OFFSET))(this);
	}

	::System::Boolean BMKKDKAHCAO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LBOKPINMNOA_BMKKDKAHCAO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IOELEOGIGEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_IOELEOGIGEI_OFFSET))(this);
	}

	::System::Int32 LOEDFABIFEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_LOEDFABIFEB_OFFSET))(this);
	}

	::System::String* LCOPKDAMOAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_LCOPKDAMOAI_OFFSET))(this);
	}

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_BBJGHAGDKOM_OFFSET))(this);
	}

	::System::String* DBAOBNPDFMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_DBAOBNPDFMN_OFFSET))(this);
	}

	::System::Int32 JBECCIEIHBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOKPINMNOA_JBECCIEIHBH_OFFSET))(this);
	}

	/*
	static ::LBOKPINMNOA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LBOKPINMNOA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LBOKPINMNOA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LBOKPINMNOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBOKPINMNOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBOKPINMNOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
