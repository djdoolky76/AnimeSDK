#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AHKDJNJBOPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AHKDJNJBOPM_CGDGPOAEALH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AHKDJNJBOPM_DDKICCEGMDD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define AHKDJNJBOPM_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define AHKDJNJBOPM_DODNCPPMPNF_OFFSET UNITYSDK_OFFSET(0x754970)
#define AHKDJNJBOPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHKDJNJBOPM_HAIEPNFCOMN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AHKDJNJBOPM_HKDJAOMHLLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AHKDJNJBOPM_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AHKDJNJBOPM_MIAHINJIPDA_OFFSET UNITYSDK_OFFSET(0x757290)
#define AHKDJNJBOPM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A56E0E0)
#define AHKDJNJBOPM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AHKDJNJBOPM_TypeDefinitionIndex = 11556;

struct alignas(4) AHKDJNJBOPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHKDJNJBOPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DODNCPPMPNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_DODNCPPMPNF_OFFSET))(this);
	}

	/*
	static ::AHKDJNJBOPM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AHKDJNJBOPM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DDKICCEGMDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_DDKICCEGMDD_OFFSET))(this);
	}

	/*
	::AHKDJNJBOPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHKDJNJBOPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HAIEPNFCOMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_HAIEPNFCOMN_OFFSET))(this);
	}

	::System::String* MIAHINJIPDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_MIAHINJIPDA_OFFSET))(this);
	}

	::System::String* CGDGPOAEALH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_CGDGPOAEALH_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::String* HKDJAOMHLLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDJNJBOPM_HKDJAOMHLLH_OFFSET))(this);
	}
};
