#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OAMFBPHIEGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OAMFBPHIEGI_DIIMEJBACCE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OAMFBPHIEGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAMFBPHIEGI_IFLMOJMMMJJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OAMFBPHIEGI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195BFAA0)
#define OAMFBPHIEGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OAMFBPHIEGI_TypeDefinitionIndex = 15228;

struct alignas(4) OAMFBPHIEGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMFBPHIEGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAMFBPHIEGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OAMFBPHIEGI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OAMFBPHIEGI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OAMFBPHIEGI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DIIMEJBACCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMFBPHIEGI_DIIMEJBACCE_OFFSET))(this);
	}

	/*
	::OAMFBPHIEGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAMFBPHIEGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAMFBPHIEGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IFLMOJMMMJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMFBPHIEGI_IFLMOJMMMJJ_OFFSET))(this);
	}
};
