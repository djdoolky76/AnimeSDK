#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BGDKDJKKNIC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BGDKDJKKNIC_CIDHHHPLAGO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define BGDKDJKKNIC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGDKDJKKNIC_HBPANDJAOOJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BGDKDJKKNIC_JFOPIODFODB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BGDKDJKKNIC_LALFCDADNKO_OFFSET UNITYSDK_OFFSET(0x757290)
#define BGDKDJKKNIC_MCEOEKEADPD_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BGDKDJKKNIC_MEHPKJEFIGM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BGDKDJKKNIC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5794D0)
#define BGDKDJKKNIC_PEKGINKNMBB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BGDKDJKKNIC_PJHGENBHDGO_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define BGDKDJKKNIC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BGDKDJKKNIC_TypeDefinitionIndex = 16886;

struct alignas(4) BGDKDJKKNIC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGDKDJKKNIC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CIDHHHPLAGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_CIDHHHPLAGO_OFFSET))(this);
	}

	::System::Int32 HBPANDJAOOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_HBPANDJAOOJ_OFFSET))(this);
	}

	::System::String* LALFCDADNKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_LALFCDADNKO_OFFSET))(this);
	}

	::System::Int32 PEKGINKNMBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_PEKGINKNMBB_OFFSET))(this);
	}

	/*
	::BGDKDJKKNIC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGDKDJKKNIC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JFOPIODFODB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_JFOPIODFODB_OFFSET))(this);
	}

	::System::String* MEHPKJEFIGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_MEHPKJEFIGM_OFFSET))(this);
	}

	/*
	static ::BGDKDJKKNIC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BGDKDJKKNIC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PJHGENBHDGO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_PJHGENBHDGO_OFFSET))(this);
	}

	::System::String* MCEOEKEADPD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDKDJKKNIC_MCEOEKEADPD_OFFSET))(this);
	}
};
