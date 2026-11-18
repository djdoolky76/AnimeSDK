#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JAINCAOGDEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JAINCAOGDEL_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JAINCAOGDEL_FDHNFHAJFPD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JAINCAOGDEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JAINCAOGDEL_KPOOPIJLCPE_OFFSET UNITYSDK_OFFSET(0x754920)
#define JAINCAOGDEL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4FFE90)
#define JAINCAOGDEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JAINCAOGDEL_TypeDefinitionIndex = 11343;

struct alignas(4) JAINCAOGDEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAINCAOGDEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAINCAOGDEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JAINCAOGDEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAINCAOGDEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAINCAOGDEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JAINCAOGDEL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JAINCAOGDEL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JAINCAOGDEL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAINCAOGDEL_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 KPOOPIJLCPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAINCAOGDEL_KPOOPIJLCPE_OFFSET))(this);
	}

	::System::Int32 FDHNFHAJFPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAINCAOGDEL_FDHNFHAJFPD_OFFSET))(this);
	}
};
