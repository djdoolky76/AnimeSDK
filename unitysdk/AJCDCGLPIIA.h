#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AJCDCGLPIIA_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define AJCDCGLPIIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AJCDCGLPIIA_BILMAINIENH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AJCDCGLPIIA_CPHNNMBPFCG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AJCDCGLPIIA_EFDBOHLFNBM_OFFSET UNITYSDK_OFFSET(0x758780)
#define AJCDCGLPIIA_EPEABEOGEKO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define AJCDCGLPIIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AJCDCGLPIIA_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define AJCDCGLPIIA_HLAJLHJHHOA_OFFSET UNITYSDK_OFFSET(0x755190)
#define AJCDCGLPIIA_JBIDNNCLOFD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define AJCDCGLPIIA_PGOPHHBCJCI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AJCDCGLPIIA_PNBHJLJFLPB_OFFSET UNITYSDK_OFFSET(0x755E40)
#define AJCDCGLPIIA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AJCDCGLPIIA_TypeDefinitionIndex = 14427;

struct alignas(4) AJCDCGLPIIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCDCGLPIIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AJCDCGLPIIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AJCDCGLPIIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BILMAINIENH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_BILMAINIENH_OFFSET))(this);
	}

	::System::String* EPEABEOGEKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_EPEABEOGEKO_OFFSET))(this);
	}

	::System::Int32 CPHNNMBPFCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_CPHNNMBPFCG_OFFSET))(this);
	}

	::System::Int32 PNBHJLJFLPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_PNBHJLJFLPB_OFFSET))(this);
	}

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_ADBBCNFGHPJ_OFFSET))(this);
	}

	::System::String* JBIDNNCLOFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_JBIDNNCLOFD_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Int32 EFDBOHLFNBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_EFDBOHLFNBM_OFFSET))(this);
	}

	::System::Int32 PGOPHHBCJCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_PGOPHHBCJCI_OFFSET))(this);
	}

	::System::Int32 HLAJLHJHHOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCDCGLPIIA_HLAJLHJHHOA_OFFSET))(this);
	}
};
