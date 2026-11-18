#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DOFDPDAKDEO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOFDPDAKDEO_BMEDDOJIDIH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DOFDPDAKDEO_DCIDEHKLLBM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define DOFDPDAKDEO_EGDOAMLDCPB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DOFDPDAKDEO_FLGIHBEJOCO_OFFSET UNITYSDK_OFFSET(0x754970)
#define DOFDPDAKDEO_FNJDKDONELH_OFFSET UNITYSDK_OFFSET(0x758320)
#define DOFDPDAKDEO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOFDPDAKDEO_HBDMPOLMBKH_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DOFDPDAKDEO_JJCKOJBBNPE_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define DOFDPDAKDEO_LFBACHDFIKD_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define DOFDPDAKDEO_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DOFDPDAKDEO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17F234E0)
#define DOFDPDAKDEO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOFDPDAKDEO_TypeDefinitionIndex = 15075;

struct alignas(4) DOFDPDAKDEO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOFDPDAKDEO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FLGIHBEJOCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_FLGIHBEJOCO_OFFSET))(this);
	}

	::System::String* LFBACHDFIKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_LFBACHDFIKD_OFFSET))(this);
	}

	::System::String* DCIDEHKLLBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_DCIDEHKLLBM_OFFSET))(this);
	}

	::System::Boolean JJCKOJBBNPE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_JJCKOJBBNPE_OFFSET))(this);
	}

	::System::String* EGDOAMLDCPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_EGDOAMLDCPB_OFFSET))(this);
	}

	/*
	::DOFDPDAKDEO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOFDPDAKDEO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HBDMPOLMBKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_HBDMPOLMBKH_OFFSET))(this);
	}

	::System::String* BMEDDOJIDIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_BMEDDOJIDIH_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	static ::DOFDPDAKDEO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOFDPDAKDEO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FNJDKDONELH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDPDAKDEO_FNJDKDONELH_OFFSET))(this);
	}
};
