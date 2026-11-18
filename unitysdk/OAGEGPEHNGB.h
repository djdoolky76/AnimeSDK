#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OAGEGPEHNGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OAGEGPEHNGB_BNLIHJGCLKF_OFFSET UNITYSDK_OFFSET(0x754C20)
#define OAGEGPEHNGB_CBECADKEHON_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define OAGEGPEHNGB_CMLDIOCJKFH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OAGEGPEHNGB_FOKNMMGHOMC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OAGEGPEHNGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAGEGPEHNGB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B336680)
#define OAGEGPEHNGB_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OAGEGPEHNGB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OAGEGPEHNGB_TypeDefinitionIndex = 17184;

struct alignas(4) OAGEGPEHNGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAGEGPEHNGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_ONFGLHFDEED_OFFSET))(this);
	}

	::System::Int32 BNLIHJGCLKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_BNLIHJGCLKF_OFFSET))(this);
	}

	::System::String* CMLDIOCJKFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_CMLDIOCJKFH_OFFSET))(this);
	}

	/*
	::OAGEGPEHNGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAGEGPEHNGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FOKNMMGHOMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_FOKNMMGHOMC_OFFSET))(this);
	}

	/*
	static ::OAGEGPEHNGB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OAGEGPEHNGB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean CBECADKEHON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OAGEGPEHNGB_CBECADKEHON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
