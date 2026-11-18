#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ADPGMLIMDDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ADPGMLIMDDP_DGKJIONLIFH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ADPGMLIMDDP_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ADPGMLIMDDP_GBMIOBCNIGO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define ADPGMLIMDDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADPGMLIMDDP_JIGHNBBJKFE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ADPGMLIMDDP_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ADPGMLIMDDP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B981A60)
#define ADPGMLIMDDP_OKAFCIGHPDM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ADPGMLIMDDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ADPGMLIMDDP_TypeDefinitionIndex = 16127;

struct alignas(4) ADPGMLIMDDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADPGMLIMDDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LGMMAGPFDMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_LGMMAGPFDMC_OFFSET))(this);
	}

	::System::String* GBMIOBCNIGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_GBMIOBCNIGO_OFFSET))(this);
	}

	::System::String* DGKJIONLIFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_DGKJIONLIFH_OFFSET))(this);
	}

	::System::String* OKAFCIGHPDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_OKAFCIGHPDM_OFFSET))(this);
	}

	/*
	static ::ADPGMLIMDDP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ADPGMLIMDDP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::ADPGMLIMDDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADPGMLIMDDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JIGHNBBJKFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_JIGHNBBJKFE_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPGMLIMDDP_DNKLBHKEDEM_OFFSET))(this);
	}
};
