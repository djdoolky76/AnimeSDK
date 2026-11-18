#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ICCOFCKLNAP_AMPIDIKEHLN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define ICCOFCKLNAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ICCOFCKLNAP_DMALAPNLDIL_OFFSET UNITYSDK_OFFSET(0x758780)
#define ICCOFCKLNAP_EOEEADFECGD_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define ICCOFCKLNAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICCOFCKLNAP_IEGOKGKAHNF_OFFSET UNITYSDK_OFFSET(0x7A5B80)
#define ICCOFCKLNAP_JBNEBCEBODK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ICCOFCKLNAP_LNAIFKLBFFJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ICCOFCKLNAP_LPNHNLOABKM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ICCOFCKLNAP_MBILAGJHAGO_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define ICCOFCKLNAP_NDGJLBDKOAB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ICCOFCKLNAP_NLGFHMIIICC_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define ICCOFCKLNAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BB5EB0)
#define ICCOFCKLNAP_PJOPALNPMEN_OFFSET UNITYSDK_OFFSET(0x754920)
#define ICCOFCKLNAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ICCOFCKLNAP_TypeDefinitionIndex = 11403;

struct alignas(4) ICCOFCKLNAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICCOFCKLNAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DMALAPNLDIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_DMALAPNLDIL_OFFSET))(this);
	}

	::System::Int32 LNAIFKLBFFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_LNAIFKLBFFJ_OFFSET))(this);
	}

	::System::Int32 NDGJLBDKOAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_NDGJLBDKOAB_OFFSET))(this);
	}

	::System::Single IEGOKGKAHNF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_IEGOKGKAHNF_OFFSET))(this);
	}

	/*
	::ICCOFCKLNAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICCOFCKLNAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ICCOFCKLNAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ICCOFCKLNAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NLGFHMIIICC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_NLGFHMIIICC_OFFSET))(this);
	}

	::System::Single MBILAGJHAGO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_MBILAGJHAGO_OFFSET))(this);
	}

	::System::Int32 AMPIDIKEHLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_AMPIDIKEHLN_OFFSET))(this);
	}

	::System::Int32 LPNHNLOABKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_LPNHNLOABKM_OFFSET))(this);
	}

	::System::Int32 JBNEBCEBODK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_JBNEBCEBODK_OFFSET))(this);
	}

	::System::Int32 PJOPALNPMEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_PJOPALNPMEN_OFFSET))(this);
	}

	::System::String* EOEEADFECGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCOFCKLNAP_EOEEADFECGD_OFFSET))(this);
	}
};
