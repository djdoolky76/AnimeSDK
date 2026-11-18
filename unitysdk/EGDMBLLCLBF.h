#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EGDMBLLCLBF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGDMBLLCLBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGDMBLLCLBF_FGOOBGIJFAD_OFFSET UNITYSDK_OFFSET(0x761360)
#define EGDMBLLCLBF_GBFJHDHODNC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EGDMBLLCLBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGDMBLLCLBF_NDHOEADNIDP_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define EGDMBLLCLBF_NOBFGNKPHKG_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define EGDMBLLCLBF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C10150)
#define EGDMBLLCLBF_OHKJHAOGDKD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define EGDMBLLCLBF_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EGDMBLLCLBF_PCKHPLEHAPA_OFFSET UNITYSDK_OFFSET(0x755790)
#define EGDMBLLCLBF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGDMBLLCLBF_TypeDefinitionIndex = 12960;

struct alignas(4) EGDMBLLCLBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGDMBLLCLBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean FGOOBGIJFAD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_FGOOBGIJFAD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NDHOEADNIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_NDHOEADNIDP_OFFSET))(this);
	}

	::System::String* OHKJHAOGDKD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_OHKJHAOGDKD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GBFJHDHODNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_GBFJHDHODNC_OFFSET))(this);
	}

	::System::Boolean NOBFGNKPHKG(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_NOBFGNKPHKG_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PCKHPLEHAPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_PCKHPLEHAPA_OFFSET))(this);
	}

	/*
	static ::EGDMBLLCLBF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EGDMBLLCLBF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_OKGKODNEICJ_OFFSET))(this);
	}

	/*
	::EGDMBLLCLBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGDMBLLCLBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGDMBLLCLBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
