#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KEBEJFHFCCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KEBEJFHFCCK_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KEBEJFHFCCK_FHLGKCGLOBD_OFFSET UNITYSDK_OFFSET(0x754970)
#define KEBEJFHFCCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEBEJFHFCCK_NPHLHAMCPKI_OFFSET UNITYSDK_OFFSET(0x754920)
#define KEBEJFHFCCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16121850)
#define KEBEJFHFCCK_OCOHAEFEKHH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KEBEJFHFCCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KEBEJFHFCCK_TypeDefinitionIndex = 15309;

struct alignas(4) KEBEJFHFCCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEBEJFHFCCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FHLGKCGLOBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_FHLGKCGLOBD_OFFSET))(this);
	}

	/*
	static ::KEBEJFHFCCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KEBEJFHFCCK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OCOHAEFEKHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_OCOHAEFEKHH_OFFSET))(this);
	}

	::System::Int32 NPHLHAMCPKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_NPHLHAMCPKI_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_DGFAJDNHCIJ_OFFSET))(this);
	}

	/*
	::KEBEJFHFCCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEBEJFHFCCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEBEJFHFCCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
