#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HPPJMGNELEG_AKJAILHOIEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define HPPJMGNELEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPPJMGNELEG_BJIHJLGINGC_OFFSET UNITYSDK_OFFSET(0x7EA0A0)
#define HPPJMGNELEG_DNNGOPHDEIK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPPJMGNELEG_FDGFFGLNNMI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HPPJMGNELEG_FKGHIGBMBEP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HPPJMGNELEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPPJMGNELEG_JADEALNPIFD_OFFSET UNITYSDK_OFFSET(0x756720)
#define HPPJMGNELEG_JLMFNGGMNPI_OFFSET UNITYSDK_OFFSET(0x754D50)
#define HPPJMGNELEG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4E7AC0)
#define HPPJMGNELEG_PDMDGHLHILJ_OFFSET UNITYSDK_OFFSET(0x7EA020)
#define HPPJMGNELEG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPPJMGNELEG_TypeDefinitionIndex = 11127;

struct alignas(4) HPPJMGNELEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPPJMGNELEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JLMFNGGMNPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_JLMFNGGMNPI_OFFSET))(this);
	}

	::System::Boolean BJIHJLGINGC(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + HPPJMGNELEG_BJIHJLGINGC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HPPJMGNELEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPPJMGNELEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPPJMGNELEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean PDMDGHLHILJ(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + HPPJMGNELEG_PDMDGHLHILJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DNNGOPHDEIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_DNNGOPHDEIK_OFFSET))(this);
	}

	::System::Int32 JADEALNPIFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_JADEALNPIFD_OFFSET))(this);
	}

	::System::Int32 FDGFFGLNNMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_FDGFFGLNNMI_OFFSET))(this);
	}

	::System::String* FKGHIGBMBEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_FKGHIGBMBEP_OFFSET))(this);
	}

	::System::Int32 AKJAILHOIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJMGNELEG_AKJAILHOIEC_OFFSET))(this);
	}

	/*
	static ::HPPJMGNELEG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HPPJMGNELEG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HPPJMGNELEG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
