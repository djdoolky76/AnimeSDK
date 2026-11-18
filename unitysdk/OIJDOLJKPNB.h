#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OIJDOLJKPNB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OIJDOLJKPNB_BEPLKKHMJCN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OIJDOLJKPNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OIJDOLJKPNB_BIGEHOIIBCJ_OFFSET UNITYSDK_OFFSET(0x80B270)
#define OIJDOLJKPNB_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x754970)
#define OIJDOLJKPNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIJDOLJKPNB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OIJDOLJKPNB_IHNBKKOHDMI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OIJDOLJKPNB_JBCLIKBNFEA_OFFSET UNITYSDK_OFFSET(0x755890)
#define OIJDOLJKPNB_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x754920)
#define OIJDOLJKPNB_NKBMOPLKAAI_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OIJDOLJKPNB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B33E1B0)
#define OIJDOLJKPNB_OFGGCDFIHLD_OFFSET UNITYSDK_OFFSET(0x755190)
#define OIJDOLJKPNB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OIJDOLJKPNB_TypeDefinitionIndex = 12657;

struct alignas(4) OIJDOLJKPNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIJDOLJKPNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> BIGEHOIIBCJ()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_BIGEHOIIBCJ_OFFSET))(this);
	}

	::System::Int32 LDIENHMALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_LDIENHMALPL_OFFSET))(this);
	}

	::System::Int32 IHNBKKOHDMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_IHNBKKOHDMI_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::OIJDOLJKPNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIJDOLJKPNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BEPLKKHMJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_BEPLKKHMJCN_OFFSET))(this);
	}

	::System::Int32 NKBMOPLKAAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_NKBMOPLKAAI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JBCLIKBNFEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_JBCLIKBNFEA_OFFSET))(this);
	}

	::System::Int32 FCICGEALCFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_FCICGEALCFA_OFFSET))(this);
	}

	::System::Int32 OFGGCDFIHLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_OFGGCDFIHLD_OFFSET))(this);
	}

	/*
	static ::OIJDOLJKPNB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OIJDOLJKPNB(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OIJDOLJKPNB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
