#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BAPBPEMFLLF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BAPBPEMFLLF_BEGNOHGILAP_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define BAPBPEMFLLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BAPBPEMFLLF_CACBFNMPGAF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BAPBPEMFLLF_DDBDHGJHNLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define BAPBPEMFLLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAPBPEMFLLF_MADMIKPGMFG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BAPBPEMFLLF_NBDFMCKADJE_OFFSET UNITYSDK_OFFSET(0x755790)
#define BAPBPEMFLLF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BDF650)
#define BAPBPEMFLLF_PFAGDBICMAO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BAPBPEMFLLF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BAPBPEMFLLF_TypeDefinitionIndex = 14172;

struct alignas(4) BAPBPEMFLLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPBPEMFLLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 CACBFNMPGAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_CACBFNMPGAF_OFFSET))(this);
	}

	::System::Boolean BEGNOHGILAP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_BEGNOHGILAP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 MADMIKPGMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_MADMIKPGMFG_OFFSET))(this);
	}

	/*
	::BAPBPEMFLLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAPBPEMFLLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PFAGDBICMAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_PFAGDBICMAO_OFFSET))(this);
	}

	::System::Int32 NBDFMCKADJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_NBDFMCKADJE_OFFSET))(this);
	}

	/*
	static ::BAPBPEMFLLF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BAPBPEMFLLF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DDBDHGJHNLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPBPEMFLLF_DDBDHGJHNLH_OFFSET))(this);
	}
};
