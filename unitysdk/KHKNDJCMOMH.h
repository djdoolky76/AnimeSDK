#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KHKNDJCMOMH_ABEPDCBDCBM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KHKNDJCMOMH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KHKNDJCMOMH_AINJPNNOHHC_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define KHKNDJCMOMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KHKNDJCMOMH_EBBINFPAMCG_OFFSET UNITYSDK_OFFSET(0x761240)
#define KHKNDJCMOMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHKNDJCMOMH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA79050)
#define KHKNDJCMOMH_OBBLGGIPDAM_OFFSET UNITYSDK_OFFSET(0x766650)
#define KHKNDJCMOMH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KHKNDJCMOMH_TypeDefinitionIndex = 13841;

struct alignas(4) KHKNDJCMOMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKNDJCMOMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KHKNDJCMOMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHKNDJCMOMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ABEPDCBDCBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_ABEPDCBDCBM_OFFSET))(this);
	}

	/*
	static ::KHKNDJCMOMH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KHKNDJCMOMH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::UInt64 OBBLGGIPDAM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_OBBLGGIPDAM_OFFSET))(this);
	}

	::System::Int32 EBBINFPAMCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_EBBINFPAMCG_OFFSET))(this);
	}

	::System::Boolean AINJPNNOHHC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KHKNDJCMOMH_AINJPNNOHHC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
