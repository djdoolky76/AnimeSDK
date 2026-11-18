#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HNFADNMADCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JKNHEAAMEHI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JKNHEAAMEHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JKNHEAAMEHI_CODNDPHGOGI_OFFSET UNITYSDK_OFFSET(0x755320)
#define JKNHEAAMEHI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JKNHEAAMEHI_DMLPEFAMFBB_OFFSET UNITYSDK_OFFSET(0x755440)
#define JKNHEAAMEHI_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x755710)
#define JKNHEAAMEHI_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x758780)
#define JKNHEAAMEHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKNHEAAMEHI_GGNBIMFNOEH_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define JKNHEAAMEHI_HCCNJNBJIAO_OFFSET UNITYSDK_OFFSET(0x761710)
#define JKNHEAAMEHI_HMDBGCAFJOG_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JKNHEAAMEHI_JIOBIMIKJLN_OFFSET UNITYSDK_OFFSET(0x76FBF0)
#define JKNHEAAMEHI_NFBICDDOCEB_OFFSET UNITYSDK_OFFSET(0x76FC40)
#define JKNHEAAMEHI_NIFCDDGDILA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JKNHEAAMEHI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15AABD50)
#define JKNHEAAMEHI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JKNHEAAMEHI_TypeDefinitionIndex = 14553;

struct alignas(4) JKNHEAAMEHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKNHEAAMEHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HMDBGCAFJOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_HMDBGCAFJOG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JKNHEAAMEHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKNHEAAMEHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HCCNJNBJIAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_HCCNJNBJIAO_OFFSET))(this);
	}

	::System::Boolean JIOBIMIKJLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_JIOBIMIKJLN_OFFSET))(this);
	}

	::System::Boolean GGNBIMFNOEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_GGNBIMFNOEH_OFFSET))(this);
	}

	/*
	static ::JKNHEAAMEHI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JKNHEAAMEHI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NIFCDDGDILA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_NIFCDDGDILA_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Boolean NFBICDDOCEB(::System::Int32 HPMEONKHFGG, ::HNFADNMADCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HNFADNMADCK&))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_NFBICDDOCEB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 CODNDPHGOGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_CODNDPHGOGI_OFFSET))(this);
	}

	::System::Int32 FFKHDOBKMDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::Int32 DMLPEFAMFBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_DMLPEFAMFBB_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNHEAAMEHI_DECMGICKDLH_OFFSET))(this);
	}
};
