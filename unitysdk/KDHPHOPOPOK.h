#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KDHPHOPOPOK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDHPHOPOPOK_AFBBHFILDDH_OFFSET UNITYSDK_OFFSET(0x755790)
#define KDHPHOPOPOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDHPHOPOPOK_CIDGABBMHGI_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define KDHPHOPOPOK_CLBPBMMMAKL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KDHPHOPOPOK_CLOKDEFMMLL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KDHPHOPOPOK_DOBFKNOKCMM_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define KDHPHOPOPOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDHPHOPOPOK_IEJNCOOLGJE_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define KDHPHOPOPOK_IGKBKCCFCIN_OFFSET UNITYSDK_OFFSET(0x80FD00)
#define KDHPHOPOPOK_ILBLDNAHJOO_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KDHPHOPOPOK_LNGNKEMBBMJ_OFFSET UNITYSDK_OFFSET(0x754D50)
#define KDHPHOPOPOK_NHNCMKFOLMB_OFFSET UNITYSDK_OFFSET(0x77AC70)
#define KDHPHOPOPOK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6407C0)
#define KDHPHOPOPOK_OCNKEJBIDBH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KDHPHOPOPOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDHPHOPOPOK_TypeDefinitionIndex = 15696;

struct alignas(4) KDHPHOPOPOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDHPHOPOPOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean IGKBKCCFCIN(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_IGKBKCCFCIN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ILBLDNAHJOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_ILBLDNAHJOO_OFFSET))(this);
	}

	::System::Boolean DOBFKNOKCMM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_DOBFKNOKCMM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CLBPBMMMAKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_CLBPBMMMAKL_OFFSET))(this);
	}

	/*
	::KDHPHOPOPOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDHPHOPOPOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OCNKEJBIDBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_OCNKEJBIDBH_OFFSET))(this);
	}

	::System::Int32 CIDGABBMHGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_CIDGABBMHGI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 AFBBHFILDDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_AFBBHFILDDH_OFFSET))(this);
	}

	::System::Int32 CLOKDEFMMLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_CLOKDEFMMLL_OFFSET))(this);
	}

	::System::Int32 IEJNCOOLGJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_IEJNCOOLGJE_OFFSET))(this);
	}

	/*
	static ::KDHPHOPOPOK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KDHPHOPOPOK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean NHNCMKFOLMB(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_NHNCMKFOLMB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LNGNKEMBBMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPHOPOPOK_LNGNKEMBBMJ_OFFSET))(this);
	}
};
