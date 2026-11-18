#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BMLFKAKNAEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BMLFKAKNAEK_DELJMMAHFPD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BMLFKAKNAEK_DPFOEONNIJE_OFFSET UNITYSDK_OFFSET(0x754E10)
#define BMLFKAKNAEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMLFKAKNAEK_KFFFKAMFMIP_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define BMLFKAKNAEK_MHKHEBKFDLJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BMLFKAKNAEK_NJMPAEBCLBB_OFFSET UNITYSDK_OFFSET(0x756360)
#define BMLFKAKNAEK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17760940)
#define BMLFKAKNAEK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BMLFKAKNAEK_TypeDefinitionIndex = 17189;

struct alignas(4) BMLFKAKNAEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMLFKAKNAEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BMLFKAKNAEK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BMLFKAKNAEK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::BMLFKAKNAEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMLFKAKNAEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DELJMMAHFPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_DELJMMAHFPD_OFFSET))(this);
	}

	::System::Int32 MHKHEBKFDLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_MHKHEBKFDLJ_OFFSET))(this);
	}

	::System::Boolean NJMPAEBCLBB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_NJMPAEBCLBB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KFFFKAMFMIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_KFFFKAMFMIP_OFFSET))(this);
	}

	::System::Boolean DPFOEONNIJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLFKAKNAEK_DPFOEONNIJE_OFFSET))(this);
	}
};
