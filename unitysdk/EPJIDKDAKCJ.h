#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EPJIDKDAKCJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EPJIDKDAKCJ_BCEGLBJFEJO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EPJIDKDAKCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPJIDKDAKCJ_DAEIGKBHGNO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EPJIDKDAKCJ_DBHLGKGNEHG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EPJIDKDAKCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPJIDKDAKCJ_LPKODBNENLD_OFFSET UNITYSDK_OFFSET(0x757C60)
#define EPJIDKDAKCJ_NBOECLIAFGL_OFFSET UNITYSDK_OFFSET(0x757A90)
#define EPJIDKDAKCJ_NKHADLNMIGJ_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define EPJIDKDAKCJ_NKOHFPMGLMC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define EPJIDKDAKCJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F502A0)
#define EPJIDKDAKCJ_ODBBHFBLLCP_OFFSET UNITYSDK_OFFSET(0x754920)
#define EPJIDKDAKCJ_PILJNEKGLCA_OFFSET UNITYSDK_OFFSET(0x758780)
#define EPJIDKDAKCJ_PMLAGFAAHFN_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define EPJIDKDAKCJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPJIDKDAKCJ_TypeDefinitionIndex = 17353;

struct alignas(4) EPJIDKDAKCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PMLAGFAAHFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_PMLAGFAAHFN_OFFSET))(this);
	}

	/*
	static ::EPJIDKDAKCJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EPJIDKDAKCJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NKOHFPMGLMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_NKOHFPMGLMC_OFFSET))(this);
	}

	/*
	::EPJIDKDAKCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPJIDKDAKCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LPKODBNENLD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_LPKODBNENLD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BCEGLBJFEJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_BCEGLBJFEJO_OFFSET))(this);
	}

	::System::String* DAEIGKBHGNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_DAEIGKBHGNO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean NBOECLIAFGL(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_NBOECLIAFGL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ODBBHFBLLCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_ODBBHFBLLCP_OFFSET))(this);
	}

	::System::Int32 NKHADLNMIGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_NKHADLNMIGJ_OFFSET))(this);
	}

	::System::Int32 PILJNEKGLCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_PILJNEKGLCA_OFFSET))(this);
	}

	::System::String* DBHLGKGNEHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJIDKDAKCJ_DBHLGKGNEHG_OFFSET))(this);
	}
};
