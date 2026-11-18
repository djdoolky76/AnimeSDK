#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BDBPPMMILJB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BDBPPMMILJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BDBPPMMILJB_FKHFJPCFKDF_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define BDBPPMMILJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDBPPMMILJB_HNJGGKCJIPM_OFFSET UNITYSDK_OFFSET(0x755790)
#define BDBPPMMILJB_LGLJKAMCOEK_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define BDBPPMMILJB_NFKDIAHLIJI_OFFSET UNITYSDK_OFFSET(0x756360)
#define BDBPPMMILJB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A16AD40)
#define BDBPPMMILJB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BDBPPMMILJB_TypeDefinitionIndex = 17620;

struct alignas(4) BDBPPMMILJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBPPMMILJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDBPPMMILJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NFKDIAHLIJI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BDBPPMMILJB_NFKDIAHLIJI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BDBPPMMILJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDBPPMMILJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDBPPMMILJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HNJGGKCJIPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBPPMMILJB_HNJGGKCJIPM_OFFSET))(this);
	}

	::System::Boolean FKHFJPCFKDF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BDBPPMMILJB_FKHFJPCFKDF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBPPMMILJB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LGLJKAMCOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBPPMMILJB_LGLJKAMCOEK_OFFSET))(this);
	}

	/*
	static ::BDBPPMMILJB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BDBPPMMILJB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BDBPPMMILJB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
