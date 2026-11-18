#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DEBMMADFIFF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEBMMADFIFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEBMMADFIFF_CPINLDEPLBO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DEBMMADFIFF_DFBLPPHHOMD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DEBMMADFIFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEBMMADFIFF_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x754970)
#define DEBMMADFIFF_JLKBAFLNNLD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DEBMMADFIFF_KDCEHGIFDKE_OFFSET UNITYSDK_OFFSET(0x754920)
#define DEBMMADFIFF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A58F410)
#define DEBMMADFIFF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEBMMADFIFF_TypeDefinitionIndex = 15102;

struct alignas(4) DEBMMADFIFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEBMMADFIFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JLKBAFLNNLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_JLKBAFLNNLD_OFFSET))(this);
	}

	/*
	static ::DEBMMADFIFF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DEBMMADFIFF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DEBMMADFIFF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DFBLPPHHOMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_DFBLPPHHOMD_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_HDDENLNIPMA_OFFSET))(this);
	}

	::System::Int32 KDCEHGIFDKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_KDCEHGIFDKE_OFFSET))(this);
	}

	::System::Int32 CPINLDEPLBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_CPINLDEPLBO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMMADFIFF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DEBMMADFIFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEBMMADFIFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEBMMADFIFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
