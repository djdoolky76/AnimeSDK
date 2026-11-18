#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MOKPFGKNCAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOKPFGKNCAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOKPFGKNCAL_MPLGKCPPOPA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOKPFGKNCAL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAA02D0)
#define MOKPFGKNCAL_OKJHIPIBJBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MOKPFGKNCAL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOKPFGKNCAL_TypeDefinitionIndex = 16845;

struct alignas(4) MOKPFGKNCAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKPFGKNCAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKPFGKNCAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MOKPFGKNCAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOKPFGKNCAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOKPFGKNCAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MOKPFGKNCAL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MOKPFGKNCAL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOKPFGKNCAL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OKJHIPIBJBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKPFGKNCAL_OKJHIPIBJBM_OFFSET))(this);
	}

	::System::Int32 MPLGKCPPOPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKPFGKNCAL_MPLGKCPPOPA_OFFSET))(this);
	}
};
