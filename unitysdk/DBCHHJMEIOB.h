#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DBCHHJMEIOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DBCHHJMEIOB_BKICELPJEFA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DBCHHJMEIOB_DHAODEIDFKO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DBCHHJMEIOB_DMEKLLDCKGP_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define DBCHHJMEIOB_EDHKKMBBHHG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define DBCHHJMEIOB_EJANPONNDOC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DBCHHJMEIOB_FLIMDMNPEAN_OFFSET UNITYSDK_OFFSET(0x754C20)
#define DBCHHJMEIOB_GEOILHEGMCJ_OFFSET UNITYSDK_OFFSET(0x755790)
#define DBCHHJMEIOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBCHHJMEIOB_IEGAKBOPDOP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DBCHHJMEIOB_JFBCMNACDJG_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define DBCHHJMEIOB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1579B1F0)
#define DBCHHJMEIOB_ODEADLEEAFP_OFFSET UNITYSDK_OFFSET(0x758780)
#define DBCHHJMEIOB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DBCHHJMEIOB_TypeDefinitionIndex = 17662;

struct alignas(4) DBCHHJMEIOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBCHHJMEIOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean JFBCMNACDJG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_JFBCMNACDJG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EDHKKMBBHHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_EDHKKMBBHHG_OFFSET))(this);
	}

	/*
	static ::DBCHHJMEIOB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DBCHHJMEIOB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DHAODEIDFKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_DHAODEIDFKO_OFFSET))(this);
	}

	::System::Boolean DMEKLLDCKGP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_DMEKLLDCKGP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BKICELPJEFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_BKICELPJEFA_OFFSET))(this);
	}

	/*
	::DBCHHJMEIOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBCHHJMEIOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FLIMDMNPEAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_FLIMDMNPEAN_OFFSET))(this);
	}

	::System::Int32 EJANPONNDOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_EJANPONNDOC_OFFSET))(this);
	}

	::System::String* IEGAKBOPDOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_IEGAKBOPDOP_OFFSET))(this);
	}

	::System::Int32 ODEADLEEAFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_ODEADLEEAFP_OFFSET))(this);
	}

	::System::Int32 GEOILHEGMCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCHHJMEIOB_GEOILHEGMCJ_OFFSET))(this);
	}
};
