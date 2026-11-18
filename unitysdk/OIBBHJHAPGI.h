#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OIBBHJHAPGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OIBBHJHAPGI_BIKHGBLJEDK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OIBBHJHAPGI_EDGEEEKBICM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OIBBHJHAPGI_FOOCIGIBCMC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OIBBHJHAPGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIBBHJHAPGI_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OIBBHJHAPGI_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OIBBHJHAPGI_JHHPOALCJJP_OFFSET UNITYSDK_OFFSET(0x758780)
#define OIBBHJHAPGI_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OIBBHJHAPGI_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OIBBHJHAPGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OIBBHJHAPGI_TypeDefinitionIndex = 13584;

struct alignas(4) OIBBHJHAPGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIBBHJHAPGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* FOOCIGIBCMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_FOOCIGIBCMC_OFFSET))(this);
	}

	::System::String* EDGEEEKBICM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_EDGEEEKBICM_OFFSET))(this);
	}

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::String* BIKHGBLJEDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_BIKHGBLJEDK_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::OIBBHJHAPGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIBBHJHAPGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JHHPOALCJJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBBHJHAPGI_JHHPOALCJJP_OFFSET))(this);
	}
};
