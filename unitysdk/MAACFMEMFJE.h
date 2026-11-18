#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MAACFMEMFJE_AINJPNNOHHC_OFFSET UNITYSDK_OFFSET(0x754BA0)
#define MAACFMEMFJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MAACFMEMFJE_DLCHPJHLKGO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MAACFMEMFJE_EBBINFPAMCG_OFFSET UNITYSDK_OFFSET(0x754D50)
#define MAACFMEMFJE_FNBOALOOFEL_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define MAACFMEMFJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MAACFMEMFJE_JBNFNCIBLAO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MAACFMEMFJE_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x754970)
#define MAACFMEMFJE_LGMGGHOHBHE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MAACFMEMFJE_LIKDBNJBNDF_OFFSET UNITYSDK_OFFSET(0x758200)
#define MAACFMEMFJE_LMDMNKPMOBO_OFFSET UNITYSDK_OFFSET(0x756720)
#define MAACFMEMFJE_MNHBMMJJMKD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MAACFMEMFJE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB03520)
#define MAACFMEMFJE_PAPJFHHPKDM_OFFSET UNITYSDK_OFFSET(0x757DA0)
#define MAACFMEMFJE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MAACFMEMFJE_TypeDefinitionIndex = 16871;

struct alignas(4) MAACFMEMFJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAACFMEMFJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* LGMGGHOHBHE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_LGMGGHOHBHE_OFFSET))(this);
	}

	::System::Boolean LIKDBNJBNDF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MAACFMEMFJE_LIKDBNJBNDF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EBBINFPAMCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_EBBINFPAMCG_OFFSET))(this);
	}

	::System::Boolean AINJPNNOHHC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MAACFMEMFJE_AINJPNNOHHC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean FNBOALOOFEL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MAACFMEMFJE_FNBOALOOFEL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_JBOIMNAPIKG_OFFSET))(this);
	}

	::System::Int32 PAPJFHHPKDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_PAPJFHHPKDM_OFFSET))(this);
	}

	/*
	static ::MAACFMEMFJE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MAACFMEMFJE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MAACFMEMFJE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DLCHPJHLKGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_DLCHPJHLKGO_OFFSET))(this);
	}

	::System::Int32 LMDMNKPMOBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_LMDMNKPMOBO_OFFSET))(this);
	}

	::System::Int32 JBNFNCIBLAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_JBNFNCIBLAO_OFFSET))(this);
	}

	/*
	::MAACFMEMFJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MAACFMEMFJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MAACFMEMFJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MNHBMMJJMKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAACFMEMFJE_MNHBMMJJMKD_OFFSET))(this);
	}
};
