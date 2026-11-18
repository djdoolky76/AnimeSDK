#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NKGENBAGBLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NKGENBAGBLJ_BKPDFJHBNDN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NKGENBAGBLJ_DFOJAOPJCCF_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NKGENBAGBLJ_GDEEDEJMAKE_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NKGENBAGBLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKGENBAGBLJ_KKBHHBGNJEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NKGENBAGBLJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B32E850)
#define NKGENBAGBLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NKGENBAGBLJ_TypeDefinitionIndex = 15967;

struct alignas(4) NKGENBAGBLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKGENBAGBLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean DFOJAOPJCCF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_DFOJAOPJCCF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KKBHHBGNJEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_KKBHHBGNJEB_OFFSET))(this);
	}

	::System::Int32 GDEEDEJMAKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_GDEEDEJMAKE_OFFSET))(this);
	}

	/*
	::NKGENBAGBLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKGENBAGBLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BKPDFJHBNDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_BKPDFJHBNDN_OFFSET))(this);
	}

	/*
	static ::NKGENBAGBLJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NKGENBAGBLJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NKGENBAGBLJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
