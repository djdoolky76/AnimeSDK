#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HOMLGLCHKHN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HOMLGLCHKHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HOMLGLCHKHN_CBOLHLHCGCI_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define HOMLGLCHKHN_DBAOCPBKBEL_OFFSET UNITYSDK_OFFSET(0x763920)
#define HOMLGLCHKHN_DECGKGICCJF_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define HOMLGLCHKHN_DPBJNFBNLKM_OFFSET UNITYSDK_OFFSET(0x755890)
#define HOMLGLCHKHN_FGLPLMHKIMI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HOMLGLCHKHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOMLGLCHKHN_GGIMHHNJBNH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HOMLGLCHKHN_GHNDOCGPHKB_OFFSET UNITYSDK_OFFSET(0x756490)
#define HOMLGLCHKHN_JCLAOKFEOMK_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HOMLGLCHKHN_JIBGDKPAEBL_OFFSET UNITYSDK_OFFSET(0x762D20)
#define HOMLGLCHKHN_LAKLKOMJDKL_OFFSET UNITYSDK_OFFSET(0x760650)
#define HOMLGLCHKHN_LEHKFODMHEK_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define HOMLGLCHKHN_LJBMLMEONJJ_OFFSET UNITYSDK_OFFSET(0x758780)
#define HOMLGLCHKHN_NCIFEHMEGFM_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define HOMLGLCHKHN_NEHICDJGIPI_OFFSET UNITYSDK_OFFSET(0x757330)
#define HOMLGLCHKHN_NIJPMIHNGGM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define HOMLGLCHKHN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1953B190)
#define HOMLGLCHKHN_OLBLOOEICAI_OFFSET UNITYSDK_OFFSET(0x755440)
#define HOMLGLCHKHN_PEBNBKNADLN_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define HOMLGLCHKHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HOMLGLCHKHN_TypeDefinitionIndex = 13922;

struct alignas(4) HOMLGLCHKHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOMLGLCHKHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean DBAOCPBKBEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_DBAOCPBKBEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JCLAOKFEOMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_JCLAOKFEOMK_OFFSET))(this);
	}

	::System::Int32 DPBJNFBNLKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_DPBJNFBNLKM_OFFSET))(this);
	}

	/*
	::HOMLGLCHKHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOMLGLCHKHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NCIFEHMEGFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_NCIFEHMEGFM_OFFSET))(this);
	}

	::System::Int32 DECGKGICCJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_DECGKGICCJF_OFFSET))(this);
	}

	::System::String* GGIMHHNJBNH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_GGIMHHNJBNH_OFFSET))(this);
	}

	::System::Int32 JIBGDKPAEBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_JIBGDKPAEBL_OFFSET))(this);
	}

	::System::Boolean GHNDOCGPHKB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_GHNDOCGPHKB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* FGLPLMHKIMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_FGLPLMHKIMI_OFFSET))(this);
	}

	::System::Int32 NIJPMIHNGGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_NIJPMIHNGGM_OFFSET))(this);
	}

	::System::Int32 LJBMLMEONJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_LJBMLMEONJJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean PEBNBKNADLN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_PEBNBKNADLN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LAKLKOMJDKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_LAKLKOMJDKL_OFFSET))(this);
	}

	::System::Int32 OLBLOOEICAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_OLBLOOEICAI_OFFSET))(this);
	}

	/*
	static ::HOMLGLCHKHN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HOMLGLCHKHN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean CBOLHLHCGCI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_CBOLHLHCGCI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LEHKFODMHEK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_LEHKFODMHEK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NEHICDJGIPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMLGLCHKHN_NEHICDJGIPI_OFFSET))(this);
	}
};
