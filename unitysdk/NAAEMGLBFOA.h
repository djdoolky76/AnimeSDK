#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NAAEMGLBFOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NAAEMGLBFOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAAEMGLBFOA_GGFFBJIJMMG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NAAEMGLBFOA_MGMAAJNANAN_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define NAAEMGLBFOA_NBBLLFANODL_OFFSET UNITYSDK_OFFSET(0x755520)
#define NAAEMGLBFOA_NCMALMMKMAF_OFFSET UNITYSDK_OFFSET(0x7C46B0)
#define NAAEMGLBFOA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FCDF20)
#define NAAEMGLBFOA_OOOKBEFEKPF_OFFSET UNITYSDK_OFFSET(0x757E20)
#define NAAEMGLBFOA_PPIMLIGJNFO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define NAAEMGLBFOA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NAAEMGLBFOA_TypeDefinitionIndex = 11760;

struct alignas(4) NAAEMGLBFOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAAEMGLBFOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GGFFBJIJMMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_GGFFBJIJMMG_OFFSET))(this);
	}

	/*
	::NAAEMGLBFOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAAEMGLBFOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* OOOKBEFEKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_OOOKBEFEKPF_OFFSET))(this);
	}

	::System::Int32 NBBLLFANODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_NBBLLFANODL_OFFSET))(this);
	}

	::System::Boolean NCMALMMKMAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_NCMALMMKMAF_OFFSET))(this);
	}

	::System::String* PPIMLIGJNFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_PPIMLIGJNFO_OFFSET))(this);
	}

	::System::Int32 MGMAAJNANAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_MGMAAJNANAN_OFFSET))(this);
	}

	/*
	static ::NAAEMGLBFOA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NAAEMGLBFOA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAAEMGLBFOA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
