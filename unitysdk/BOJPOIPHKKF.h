#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BOJPOIPHKKF_AKHLPKCMLBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BOJPOIPHKKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOJPOIPHKKF_BOJFMNNKCIG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BOJPOIPHKKF_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BOJPOIPHKKF_EIDNICKDKDG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BOJPOIPHKKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOJPOIPHKKF_JIEGLCCHLBE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BOJPOIPHKKF_MEMIAIGAKFL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOJPOIPHKKF_NAIOEBIMGMB_OFFSET UNITYSDK_OFFSET(0x754970)
#define BOJPOIPHKKF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F24260)
#define BOJPOIPHKKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOJPOIPHKKF_TypeDefinitionIndex = 13829;

struct alignas(4) BOJPOIPHKKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJPOIPHKKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BOJFMNNKCIG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_BOJFMNNKCIG_OFFSET))(this);
	}

	::System::Int32 EIDNICKDKDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_EIDNICKDKDG_OFFSET))(this);
	}

	/*
	static ::BOJPOIPHKKF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOJPOIPHKKF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 NAIOEBIMGMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_NAIOEBIMGMB_OFFSET))(this);
	}

	::System::Int32 MEMIAIGAKFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_MEMIAIGAKFL_OFFSET))(this);
	}

	::System::String* JIEGLCCHLBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_JIEGLCCHLBE_OFFSET))(this);
	}

	::System::Int32 AKHLPKCMLBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_AKHLPKCMLBM_OFFSET))(this);
	}

	/*
	::BOJPOIPHKKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOJPOIPHKKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJPOIPHKKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
