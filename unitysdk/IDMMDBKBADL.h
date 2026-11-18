#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IDMMDBKBADL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IDMMDBKBADL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IDMMDBKBADL_HEHOMJFIKMN_OFFSET UNITYSDK_OFFSET(0x754920)
#define IDMMDBKBADL_INMNJMPKKLN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IDMMDBKBADL_IPNCAEINIKJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define IDMMDBKBADL_LNPPEFMAJFD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IDMMDBKBADL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4EA330)
#define IDMMDBKBADL_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IDMMDBKBADL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IDMMDBKBADL_TypeDefinitionIndex = 10849;

struct alignas(4) IDMMDBKBADL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMMDBKBADL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDMMDBKBADL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 INMNJMPKKLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMMDBKBADL_INMNJMPKKLN_OFFSET))(this);
	}

	::System::Int32 HEHOMJFIKMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMMDBKBADL_HEHOMJFIKMN_OFFSET))(this);
	}

	::System::Int32 IPNCAEINIKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMMDBKBADL_IPNCAEINIKJ_OFFSET))(this);
	}

	::System::Int32 LNPPEFMAJFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMMDBKBADL_LNPPEFMAJFD_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMMDBKBADL_OKGKODNEICJ_OFFSET))(this);
	}

	/*
	::IDMMDBKBADL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDMMDBKBADL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDMMDBKBADL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IDMMDBKBADL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IDMMDBKBADL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IDMMDBKBADL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
