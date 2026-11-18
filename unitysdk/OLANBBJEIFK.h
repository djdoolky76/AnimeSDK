#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OLANBBJEIFK_ABDPFCBJEOG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OLANBBJEIFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OLANBBJEIFK_EMPLKMIOBGN_OFFSET UNITYSDK_OFFSET(0x754970)
#define OLANBBJEIFK_GBFPHKPEJKP_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define OLANBBJEIFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLANBBJEIFK_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OLANBBJEIFK_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OLANBBJEIFK_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OLANBBJEIFK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAB7900)
#define OLANBBJEIFK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OLANBBJEIFK_TypeDefinitionIndex = 9495;

struct alignas(4) OLANBBJEIFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLANBBJEIFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EMPLKMIOBGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_EMPLKMIOBGN_OFFSET))(this);
	}

	/*
	::OLANBBJEIFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLANBBJEIFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLANBBJEIFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OLANBBJEIFK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OLANBBJEIFK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OLANBBJEIFK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_KKNNPLPEOFO_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Boolean GBFPHKPEJKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_GBFPHKPEJKP_OFFSET))(this);
	}

	::System::String* ABDPFCBJEOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_ABDPFCBJEOG_OFFSET))(this);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLANBBJEIFK_MHKKOFEKPHI_OFFSET))(this);
	}
};
