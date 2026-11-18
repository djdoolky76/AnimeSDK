#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLPNFGJLLFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLPNFGJLLFH_DBPPHCNEIMO_OFFSET UNITYSDK_OFFSET(0x758320)
#define KLPNFGJLLFH_FGGEFIJNEEM_OFFSET UNITYSDK_OFFSET(0x754920)
#define KLPNFGJLLFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLPNFGJLLFH_JDGKPIFJIGI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLPNFGJLLFH_JPAIPJIFODE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KLPNFGJLLFH_KBMPHPBKEEM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KLPNFGJLLFH_KGAJFKELKKH_OFFSET UNITYSDK_OFFSET(0x757190)
#define KLPNFGJLLFH_LKGMPPDDLAI_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KLPNFGJLLFH_MPPHPBKBEOB_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define KLPNFGJLLFH_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KLPNFGJLLFH_NKIHNADGFDK_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KLPNFGJLLFH_NMKENKLPLBP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KLPNFGJLLFH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19D9B1A0)
#define KLPNFGJLLFH_PGPFFFBIPJJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KLPNFGJLLFH_PLKCOJNOPGO_OFFSET UNITYSDK_OFFSET(0x757290)
#define KLPNFGJLLFH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLPNFGJLLFH_TypeDefinitionIndex = 17199;

struct alignas(4) KLPNFGJLLFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLPNFGJLLFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JPAIPJIFODE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_JPAIPJIFODE_OFFSET))(this);
	}

	::System::Int32 JDGKPIFJIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_JDGKPIFJIGI_OFFSET))(this);
	}

	::System::String* MPPHPBKBEOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_MPPHPBKBEOB_OFFSET))(this);
	}

	/*
	static ::KLPNFGJLLFH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLPNFGJLLFH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LKGMPPDDLAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_LKGMPPDDLAI_OFFSET))(this);
	}

	::System::Int32 FGGEFIJNEEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_FGGEFIJNEEM_OFFSET))(this);
	}

	::System::String* KBMPHPBKEEM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_KBMPHPBKEEM_OFFSET))(this);
	}

	::System::String* NKIHNADGFDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_NKIHNADGFDK_OFFSET))(this);
	}

	::System::String* DBPPHCNEIMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_DBPPHCNEIMO_OFFSET))(this);
	}

	/*
	::KLPNFGJLLFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLPNFGJLLFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KGAJFKELKKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_KGAJFKELKKH_OFFSET))(this);
	}

	::System::String* NMKENKLPLBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_NMKENKLPLBP_OFFSET))(this);
	}

	::System::String* PLKCOJNOPGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_PLKCOJNOPGO_OFFSET))(this);
	}

	::System::String* PGPFFFBIPJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_PGPFFFBIPJJ_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPNFGJLLFH_NKCNGLADFNA_OFFSET))(this);
	}
};
