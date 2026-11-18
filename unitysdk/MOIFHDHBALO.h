#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MOIFHDHBALO_BACLNPHNDDP_OFFSET UNITYSDK_OFFSET(0x754970)
#define MOIFHDHBALO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOIFHDHBALO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOIFHDHBALO_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOIFHDHBALO_GLMIJCOEBKG_OFFSET UNITYSDK_OFFSET(0x757190)
#define MOIFHDHBALO_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x758780)
#define MOIFHDHBALO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C181DA0)
#define MOIFHDHBALO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOIFHDHBALO_TypeDefinitionIndex = 17369;

struct alignas(4) MOIFHDHBALO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIFHDHBALO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIFHDHBALO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GLMIJCOEBKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIFHDHBALO_GLMIJCOEBKG_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIFHDHBALO_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIFHDHBALO_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 BACLNPHNDDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIFHDHBALO_BACLNPHNDDP_OFFSET))(this);
	}

	/*
	::MOIFHDHBALO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOIFHDHBALO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIFHDHBALO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MOIFHDHBALO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MOIFHDHBALO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOIFHDHBALO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
