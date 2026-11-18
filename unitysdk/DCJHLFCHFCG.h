#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DCJHLFCHFCG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DCJHLFCHFCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DCJHLFCHFCG_BPECCOOFDAO_OFFSET UNITYSDK_OFFSET(0x755790)
#define DCJHLFCHFCG_DEKDKKMHIGI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DCJHLFCHFCG_GCEENMLJGDN_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define DCJHLFCHFCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCJHLFCHFCG_IOIOBHKGCDN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DCJHLFCHFCG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A58E120)
#define DCJHLFCHFCG_PHFBMNLKDKG_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DCJHLFCHFCG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DCJHLFCHFCG_TypeDefinitionIndex = 13377;

struct alignas(4) DCJHLFCHFCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCJHLFCHFCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DEKDKKMHIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_DEKDKKMHIGI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DCJHLFCHFCG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DCJHLFCHFCG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PHFBMNLKDKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_PHFBMNLKDKG_OFFSET))(this);
	}

	/*
	::DCJHLFCHFCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCJHLFCHFCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BPECCOOFDAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_BPECCOOFDAO_OFFSET))(this);
	}

	::System::Boolean IOIOBHKGCDN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_IOIOBHKGCDN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean GCEENMLJGDN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DCJHLFCHFCG_GCEENMLJGDN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
