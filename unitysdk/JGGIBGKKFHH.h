#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JGGIBGKKFHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGGIBGKKFHH_BIJCAEJMBHH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JGGIBGKKFHH_BNIDOEEIGMK_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define JGGIBGKKFHH_CMMDPKAOFEH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGGIBGKKFHH_CPKKMKMACFP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define JGGIBGKKFHH_GCMJPIKFJNH_OFFSET UNITYSDK_OFFSET(0x761240)
#define JGGIBGKKFHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGGIBGKKFHH_GLOEEFOOHJP_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define JGGIBGKKFHH_GOHGNCHBBBM_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JGGIBGKKFHH_HJPCPFEECLO_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define JGGIBGKKFHH_KECFFPBMILG_OFFSET UNITYSDK_OFFSET(0x757190)
#define JGGIBGKKFHH_LFHFOCCAOBE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JGGIBGKKFHH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4F6A50)
#define JGGIBGKKFHH_OBOGAGNJPLB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JGGIBGKKFHH_PMFLLEHKBGP_OFFSET UNITYSDK_OFFSET(0x756720)
#define JGGIBGKKFHH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGGIBGKKFHH_TypeDefinitionIndex = 16706;

struct alignas(4) JGGIBGKKFHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGIBGKKFHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JGGIBGKKFHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGGIBGKKFHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HJPCPFEECLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_HJPCPFEECLO_OFFSET))(this);
	}

	::System::Int32 GLOEEFOOHJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_GLOEEFOOHJP_OFFSET))(this);
	}

	::System::String* BIJCAEJMBHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_BIJCAEJMBHH_OFFSET))(this);
	}

	::System::String* LFHFOCCAOBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_LFHFOCCAOBE_OFFSET))(this);
	}

	::System::Int32 CMMDPKAOFEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_CMMDPKAOFEH_OFFSET))(this);
	}

	::System::String* KECFFPBMILG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_KECFFPBMILG_OFFSET))(this);
	}

	::System::Boolean GOHGNCHBBBM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_GOHGNCHBBBM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* CPKKMKMACFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_CPKKMKMACFP_OFFSET))(this);
	}

	/*
	static ::JGGIBGKKFHH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JGGIBGKKFHH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BNIDOEEIGMK(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_BNIDOEEIGMK_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GCMJPIKFJNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_GCMJPIKFJNH_OFFSET))(this);
	}

	::System::String* OBOGAGNJPLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_OBOGAGNJPLB_OFFSET))(this);
	}

	::System::Int32 PMFLLEHKBGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGIBGKKFHH_PMFLLEHKBGP_OFFSET))(this);
	}
};
