#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DKHCEFEIHPB_ABANMLKKPLA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define DKHCEFEIHPB_ADMHAOEEGEN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DKHCEFEIHPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DKHCEFEIHPB_CFCEHDCMAMA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DKHCEFEIHPB_EIODCOKHIOO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DKHCEFEIHPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKHCEFEIHPB_GINCCJPBDJJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DKHCEFEIHPB_HGJPGMLPJMO_OFFSET UNITYSDK_OFFSET(0x757190)
#define DKHCEFEIHPB_HNODPAOIBPP_OFFSET UNITYSDK_OFFSET(0x757290)
#define DKHCEFEIHPB_LHKNKEKPJHO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DKHCEFEIHPB_MPFFAILABIK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DKHCEFEIHPB_NLPAPMDCAFP_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DKHCEFEIHPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x177842A0)
#define DKHCEFEIHPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DKHCEFEIHPB_TypeDefinitionIndex = 14696;

struct alignas(4) DKHCEFEIHPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHCEFEIHPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MPFFAILABIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_MPFFAILABIK_OFFSET))(this);
	}

	::System::String* GINCCJPBDJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_GINCCJPBDJJ_OFFSET))(this);
	}

	/*
	static ::DKHCEFEIHPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DKHCEFEIHPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* EIODCOKHIOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_EIODCOKHIOO_OFFSET))(this);
	}

	::System::String* HNODPAOIBPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_HNODPAOIBPP_OFFSET))(this);
	}

	::System::Int32 CFCEHDCMAMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_CFCEHDCMAMA_OFFSET))(this);
	}

	::System::String* ABANMLKKPLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_ABANMLKKPLA_OFFSET))(this);
	}

	::System::String* HGJPGMLPJMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_HGJPGMLPJMO_OFFSET))(this);
	}

	::System::String* NLPAPMDCAFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_NLPAPMDCAFP_OFFSET))(this);
	}

	::System::String* LHKNKEKPJHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_LHKNKEKPJHO_OFFSET))(this);
	}

	::System::String* ADMHAOEEGEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_ADMHAOEEGEN_OFFSET))(this);
	}

	/*
	::DKHCEFEIHPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKHCEFEIHPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHCEFEIHPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
