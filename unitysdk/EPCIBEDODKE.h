#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EPCIBEDODKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPCIBEDODKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPCIBEDODKE_NLBOALNBODH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPCIBEDODKE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157B5820)
#define EPCIBEDODKE_PMEMEOKDEFD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EPCIBEDODKE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPCIBEDODKE_TypeDefinitionIndex = 10371;

struct alignas(4) EPCIBEDODKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCIBEDODKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPCIBEDODKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NLBOALNBODH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCIBEDODKE_NLBOALNBODH_OFFSET))(this);
	}

	/*
	static ::EPCIBEDODKE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EPCIBEDODKE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPCIBEDODKE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EPCIBEDODKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPCIBEDODKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPCIBEDODKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PMEMEOKDEFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCIBEDODKE_PMEMEOKDEFD_OFFSET))(this);
	}
};
