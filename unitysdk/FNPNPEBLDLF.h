#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FNPNPEBLDLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNPNPEBLDLF_CCKNOHKHNLL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNPNPEBLDLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNPNPEBLDLF_IGKOONPGLPL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FNPNPEBLDLF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4CC3D0)
#define FNPNPEBLDLF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNPNPEBLDLF_TypeDefinitionIndex = 10302;

struct alignas(4) FNPNPEBLDLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPNPEBLDLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPNPEBLDLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FNPNPEBLDLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNPNPEBLDLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNPNPEBLDLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CCKNOHKHNLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPNPEBLDLF_CCKNOHKHNLL_OFFSET))(this);
	}

	/*
	static ::FNPNPEBLDLF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FNPNPEBLDLF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FNPNPEBLDLF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 IGKOONPGLPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPNPEBLDLF_IGKOONPGLPL_OFFSET))(this);
	}
};
