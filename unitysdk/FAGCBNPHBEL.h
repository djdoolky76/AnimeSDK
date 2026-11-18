#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FAGCBNPHBEL_ADBHBMIAKEA_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FAGCBNPHBEL_BFEBMEPBJBJ_OFFSET UNITYSDK_OFFSET(0x758320)
#define FAGCBNPHBEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FAGCBNPHBEL_ELPEKNOONFK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define FAGCBNPHBEL_FNMDENCMAEC_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define FAGCBNPHBEL_GAFONDJLAHC_OFFSET UNITYSDK_OFFSET(0x758780)
#define FAGCBNPHBEL_GEBJFIDELPN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FAGCBNPHBEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FAGCBNPHBEL_HNELJAOJGPJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FAGCBNPHBEL_INAJCOOJHJL_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FAGCBNPHBEL_JBENENJICOE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FAGCBNPHBEL_LMPOCMBMIEM_OFFSET UNITYSDK_OFFSET(0x755190)
#define FAGCBNPHBEL_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FAGCBNPHBEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FAGCBNPHBEL_TypeDefinitionIndex = 15546;

struct alignas(4) FAGCBNPHBEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAGCBNPHBEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_ONFGLHFDEED_OFFSET))(this);
	}

	::System::String* GEBJFIDELPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_GEBJFIDELPN_OFFSET))(this);
	}

	/*
	::FAGCBNPHBEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FAGCBNPHBEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ADBHBMIAKEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_ADBHBMIAKEA_OFFSET))(this);
	}

	::System::Int32 JBENENJICOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_JBENENJICOE_OFFSET))(this);
	}

	::System::String* FNMDENCMAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_FNMDENCMAEC_OFFSET))(this);
	}

	::System::Int32 ELPEKNOONFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_ELPEKNOONFK_OFFSET))(this);
	}

	::System::Int32 GAFONDJLAHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_GAFONDJLAHC_OFFSET))(this);
	}

	::System::String* HNELJAOJGPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_HNELJAOJGPJ_OFFSET))(this);
	}

	::System::String* BFEBMEPBJBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_BFEBMEPBJBJ_OFFSET))(this);
	}

	::System::Int32 LMPOCMBMIEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_LMPOCMBMIEM_OFFSET))(this);
	}

	::System::String* INAJCOOJHJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGCBNPHBEL_INAJCOOJHJL_OFFSET))(this);
	}
};
