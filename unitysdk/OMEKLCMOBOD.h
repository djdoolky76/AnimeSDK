#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OMEKLCMOBOD_BAFPGMCLAGF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OMEKLCMOBOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OMEKLCMOBOD_CJLEHGLPNOG_OFFSET UNITYSDK_OFFSET(0x763920)
#define OMEKLCMOBOD_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define OMEKLCMOBOD_FAOEPCOOGMI_OFFSET UNITYSDK_OFFSET(0x755E40)
#define OMEKLCMOBOD_FGNDPHHBOHC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OMEKLCMOBOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OMEKLCMOBOD_GMBEBOIGEEJ_OFFSET UNITYSDK_OFFSET(0x755710)
#define OMEKLCMOBOD_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define OMEKLCMOBOD_IDBLCHOGHEG_OFFSET UNITYSDK_OFFSET(0x756490)
#define OMEKLCMOBOD_IHEKKCIGPOF_OFFSET UNITYSDK_OFFSET(0x754970)
#define OMEKLCMOBOD_JHGGHGIAEKC_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define OMEKLCMOBOD_KAABCLGOGDF_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OMEKLCMOBOD_NIMAEICAPLN_OFFSET UNITYSDK_OFFSET(0x758780)
#define OMEKLCMOBOD_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OMEKLCMOBOD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD8FD80)
#define OMEKLCMOBOD_OCHJHOGODIP_OFFSET UNITYSDK_OFFSET(0x757330)
#define OMEKLCMOBOD_PEGMPCBKHAK_OFFSET UNITYSDK_OFFSET(0x758320)
#define OMEKLCMOBOD_PLFKKCLCDFD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OMEKLCMOBOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OMEKLCMOBOD_TypeDefinitionIndex = 11615;

struct alignas(4) OMEKLCMOBOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMEKLCMOBOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PEGMPCBKHAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_PEGMPCBKHAK_OFFSET))(this);
	}

	::System::Int32 BAFPGMCLAGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_BAFPGMCLAGF_OFFSET))(this);
	}

	/*
	::OMEKLCMOBOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OMEKLCMOBOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FGNDPHHBOHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_FGNDPHHBOHC_OFFSET))(this);
	}

	/*
	static ::OMEKLCMOBOD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OMEKLCMOBOD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NIMAEICAPLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_NIMAEICAPLN_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 IHEKKCIGPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_IHEKKCIGPOF_OFFSET))(this);
	}

	::System::String* PLFKKCLCDFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_PLFKKCLCDFD_OFFSET))(this);
	}

	::System::String* KAABCLGOGDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_KAABCLGOGDF_OFFSET))(this);
	}

	::System::Boolean IDBLCHOGHEG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_IDBLCHOGHEG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FAOEPCOOGMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_FAOEPCOOGMI_OFFSET))(this);
	}

	::System::Int32 OCHJHOGODIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_OCHJHOGODIP_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Int32 JHGGHGIAEKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_JHGGHGIAEKC_OFFSET))(this);
	}

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_CPBNNNFPKEM_OFFSET))(this);
	}

	::System::Boolean CJLEHGLPNOG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_CJLEHGLPNOG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* GMBEBOIGEEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEKLCMOBOD_GMBEBOIGEEJ_OFFSET))(this);
	}
};
