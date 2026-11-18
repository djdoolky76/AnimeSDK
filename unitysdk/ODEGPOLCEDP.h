#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ODEGPOLCEDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ODEGPOLCEDP_GDEDEJDDEJE_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define ODEGPOLCEDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODEGPOLCEDP_GOMEICIMLCN_OFFSET UNITYSDK_OFFSET(0x756780)
#define ODEGPOLCEDP_HGKHMLCEAOL_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ODEGPOLCEDP_KONFKHPMCAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ODEGPOLCEDP_NEJJCPAJBKH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ODEGPOLCEDP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19129550)
#define ODEGPOLCEDP_OBALGJECHBK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ODEGPOLCEDP_OJONDCEKEHC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ODEGPOLCEDP_PPBEMKMPLKP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ODEGPOLCEDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ODEGPOLCEDP_TypeDefinitionIndex = 10887;

struct alignas(4) ODEGPOLCEDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODEGPOLCEDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KONFKHPMCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_KONFKHPMCAJ_OFFSET))(this);
	}

	::System::Int32 PPBEMKMPLKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_PPBEMKMPLKP_OFFSET))(this);
	}

	::System::Int32 HGKHMLCEAOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_HGKHMLCEAOL_OFFSET))(this);
	}

	/*
	static ::ODEGPOLCEDP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ODEGPOLCEDP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OBALGJECHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_OBALGJECHBK_OFFSET))(this);
	}

	/*
	::ODEGPOLCEDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODEGPOLCEDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean GOMEICIMLCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_GOMEICIMLCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* OJONDCEKEHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_OJONDCEKEHC_OFFSET))(this);
	}

	::System::String* NEJJCPAJBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_NEJJCPAJBKH_OFFSET))(this);
	}

	::System::Int32 GDEDEJDDEJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODEGPOLCEDP_GDEDEJDDEJE_OFFSET))(this);
	}
};
