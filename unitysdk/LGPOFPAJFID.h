#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LGPOFPAJFID_APJANPPOJHB_OFFSET UNITYSDK_OFFSET(0x758200)
#define LGPOFPAJFID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LGPOFPAJFID_CHNELHDCIDI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LGPOFPAJFID_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LGPOFPAJFID_ENNJLAEDEDP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define LGPOFPAJFID_GCFJCIKIHCD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LGPOFPAJFID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGPOFPAJFID_IGMAHOKJFAP_OFFSET UNITYSDK_OFFSET(0x756780)
#define LGPOFPAJFID_KNPALHLPPGP_OFFSET UNITYSDK_OFFSET(0x754920)
#define LGPOFPAJFID_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LGPOFPAJFID_NMJCCCNLDGJ_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define LGPOFPAJFID_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C0772C0)
#define LGPOFPAJFID_PHMBDEJONJF_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define LGPOFPAJFID___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LGPOFPAJFID_TypeDefinitionIndex = 13827;

struct alignas(4) LGPOFPAJFID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGPOFPAJFID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean APJANPPOJHB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LGPOFPAJFID_APJANPPOJHB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ENNJLAEDEDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_ENNJLAEDEDP_OFFSET))(this);
	}

	::System::Int32 GCFJCIKIHCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_GCFJCIKIHCD_OFFSET))(this);
	}

	::System::Int32 KNPALHLPPGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_KNPALHLPPGP_OFFSET))(this);
	}

	/*
	static ::LGPOFPAJFID OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LGPOFPAJFID(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LGPOFPAJFID_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Boolean IGMAHOKJFAP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LGPOFPAJFID_IGMAHOKJFAP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NMJCCCNLDGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_NMJCCCNLDGJ_OFFSET))(this);
	}

	/*
	::LGPOFPAJFID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGPOFPAJFID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGPOFPAJFID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Int32 CHNELHDCIDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_CHNELHDCIDI_OFFSET))(this);
	}

	::System::Int32 PHMBDEJONJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPOFPAJFID_PHMBDEJONJF_OFFSET))(this);
	}
};
