#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BOODHDPDPBE_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BOODHDPDPBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOODHDPDPBE_CFDINGJFDNE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BOODHDPDPBE_DKPIINIGMPP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BOODHDPDPBE_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOODHDPDPBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOODHDPDPBE_GKAFFLDAMCD_OFFSET UNITYSDK_OFFSET(0x754920)
#define BOODHDPDPBE_MNPKGHBDLJG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BOODHDPDPBE_NIPBFAGGIMD_OFFSET UNITYSDK_OFFSET(0x758780)
#define BOODHDPDPBE_NJAJKINHHCC_OFFSET UNITYSDK_OFFSET(0x754970)
#define BOODHDPDPBE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x177616F0)
#define BOODHDPDPBE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOODHDPDPBE_TypeDefinitionIndex = 16031;

struct alignas(4) BOODHDPDPBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOODHDPDPBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::BOODHDPDPBE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOODHDPDPBE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOODHDPDPBE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKAFFLDAMCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_GKAFFLDAMCD_OFFSET))(this);
	}

	::System::Int32 MNPKGHBDLJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_MNPKGHBDLJG_OFFSET))(this);
	}

	::System::Int32 DKPIINIGMPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_DKPIINIGMPP_OFFSET))(this);
	}

	::System::Int32 CFDINGJFDNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_CFDINGJFDNE_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 NJAJKINHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_NJAJKINHHCC_OFFSET))(this);
	}

	::System::Int32 NIPBFAGGIMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOODHDPDPBE_NIPBFAGGIMD_OFFSET))(this);
	}

	/*
	::BOODHDPDPBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOODHDPDPBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOODHDPDPBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
