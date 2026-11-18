#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NPNNNNKFEDK_ABNJABLFOGN_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define NPNNNNKFEDK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NPNNNNKFEDK_APPLPLEAMOC_OFFSET UNITYSDK_OFFSET(0x757190)
#define NPNNNNKFEDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NPNNNNKFEDK_BKJOAIDFIJD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NPNNNNKFEDK_BNEABBFIGDH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define NPNNNNKFEDK_CHKNDAFOHDD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define NPNNNNKFEDK_EILEAONDPMM_OFFSET UNITYSDK_OFFSET(0x757690)
#define NPNNNNKFEDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPNNNNKFEDK_IADOCGJDKCM_OFFSET UNITYSDK_OFFSET(0x7575F0)
#define NPNNNNKFEDK_IOLKAONPBNB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define NPNNNNKFEDK_JNPGGCLFAAI_OFFSET UNITYSDK_OFFSET(0x755190)
#define NPNNNNKFEDK_LEPAFHIMGMM_OFFSET UNITYSDK_OFFSET(0x757760)
#define NPNNNNKFEDK_LLOPADDHAKP_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define NPNNNNKFEDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1735D280)
#define NPNNNNKFEDK_PMOHIJLCINN_OFFSET UNITYSDK_OFFSET(0x758780)
#define NPNNNNKFEDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NPNNNNKFEDK_TypeDefinitionIndex = 17201;

struct alignas(4) NPNNNNKFEDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPNNNNKFEDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IOLKAONPBNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_IOLKAONPBNB_OFFSET))(this);
	}

	::System::String* CHKNDAFOHDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_CHKNDAFOHDD_OFFSET))(this);
	}

	::System::Int32 PMOHIJLCINN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_PMOHIJLCINN_OFFSET))(this);
	}

	::System::Int32 ABNJABLFOGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_ABNJABLFOGN_OFFSET))(this);
	}

	::System::String* BNEABBFIGDH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_BNEABBFIGDH_OFFSET))(this);
	}

	::System::Int32 LLOPADDHAKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_LLOPADDHAKP_OFFSET))(this);
	}

	::System::String* BKJOAIDFIJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_BKJOAIDFIJD_OFFSET))(this);
	}

	::System::Int32 JNPGGCLFAAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_JNPGGCLFAAI_OFFSET))(this);
	}

	/*
	static ::NPNNNNKFEDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NPNNNNKFEDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NPNNNNKFEDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPNNNNKFEDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean IADOCGJDKCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_IADOCGJDKCM_OFFSET))(this);
	}

	::System::String* APPLPLEAMOC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_APPLPLEAMOC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LEPAFHIMGMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_LEPAFHIMGMM_OFFSET))(this);
	}

	::System::String* EILEAONDPMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNNNNKFEDK_EILEAONDPMM_OFFSET))(this);
	}
};
