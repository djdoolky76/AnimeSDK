#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LPMPNAHBIIO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPMPNAHBIIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPMPNAHBIIO_CABMDBCCLPC_OFFSET UNITYSDK_OFFSET(0x755890)
#define LPMPNAHBIIO_FKOIPAPHKGL_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define LPMPNAHBIIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPMPNAHBIIO_GJOIOLPPBGD_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define LPMPNAHBIIO_HINCMNGAALI_OFFSET UNITYSDK_OFFSET(0x760650)
#define LPMPNAHBIIO_JIGCIDPFIHP_OFFSET UNITYSDK_OFFSET(0x756D50)
#define LPMPNAHBIIO_JOKAKIMBIKB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LPMPNAHBIIO_NNAFCEMPEBA_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define LPMPNAHBIIO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FBEEA0)
#define LPMPNAHBIIO_PLNBBDEBIII_OFFSET UNITYSDK_OFFSET(0x761710)
#define LPMPNAHBIIO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPMPNAHBIIO_TypeDefinitionIndex = 11852;

struct alignas(4) LPMPNAHBIIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPMPNAHBIIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean GJOIOLPPBGD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_GJOIOLPPBGD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JIGCIDPFIHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_JIGCIDPFIHP_OFFSET))(this);
	}

	::System::Boolean NNAFCEMPEBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_NNAFCEMPEBA_OFFSET))(this);
	}

	/*
	static ::LPMPNAHBIIO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LPMPNAHBIIO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JOKAKIMBIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_JOKAKIMBIKB_OFFSET))(this);
	}

	::System::String* PLNBBDEBIII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_PLNBBDEBIII_OFFSET))(this);
	}

	::System::Int32 HINCMNGAALI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_HINCMNGAALI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 CABMDBCCLPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_CABMDBCCLPC_OFFSET))(this);
	}

	::System::String* FKOIPAPHKGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_FKOIPAPHKGL_OFFSET))(this);
	}

	/*
	::LPMPNAHBIIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPMPNAHBIIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPMPNAHBIIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
