#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IAELHJAONOP_ACNFKHBMFNE_OFFSET UNITYSDK_OFFSET(0x758780)
#define IAELHJAONOP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IAELHJAONOP_AJELONKLHNI_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define IAELHJAONOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IAELHJAONOP_COPBCPPAAEC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IAELHJAONOP_ECGHCKMALGK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IAELHJAONOP_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IAELHJAONOP_FHCNBPONPBD_OFFSET UNITYSDK_OFFSET(0x754970)
#define IAELHJAONOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAELHJAONOP_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IAELHJAONOP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x161017D0)
#define IAELHJAONOP_ODLMCNBDPHA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IAELHJAONOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IAELHJAONOP_TypeDefinitionIndex = 16020;

struct alignas(4) IAELHJAONOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAELHJAONOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AJELONKLHNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_AJELONKLHNI_OFFSET))(this);
	}

	::System::String* ECGHCKMALGK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_ECGHCKMALGK_OFFSET))(this);
	}

	/*
	static ::IAELHJAONOP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IAELHJAONOP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IAELHJAONOP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ODLMCNBDPHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_ODLMCNBDPHA_OFFSET))(this);
	}

	::System::Int32 FHCNBPONPBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_FHCNBPONPBD_OFFSET))(this);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_EHEDNGGDAKF_OFFSET))(this);
	}

	/*
	::IAELHJAONOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAELHJAONOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAELHJAONOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACNFKHBMFNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_ACNFKHBMFNE_OFFSET))(this);
	}

	::System::String* COPBCPPAAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_COPBCPPAAEC_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAELHJAONOP_LJNBIAFBMIL_OFFSET))(this);
	}
};
