#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OGKBNNNOOMA_BDBCMANEEOJ_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define OGKBNNNOOMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OGKBNNNOOMA_BODLMKHCEHO_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define OGKBNNNOOMA_CBKNDGBGBOL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OGKBNNNOOMA_CLBILICFJGA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OGKBNNNOOMA_EDBMOEDLAFN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OGKBNNNOOMA_FDHPFPGOJGG_OFFSET UNITYSDK_OFFSET(0x757190)
#define OGKBNNNOOMA_FMGHGEBDAGJ_OFFSET UNITYSDK_OFFSET(0x757290)
#define OGKBNNNOOMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGKBNNNOOMA_HIGCACCDNLP_OFFSET UNITYSDK_OFFSET(0x755890)
#define OGKBNNNOOMA_KKBHHBGNJEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OGKBNNNOOMA_LEBBNHLFIMN_OFFSET UNITYSDK_OFFSET(0x755710)
#define OGKBNNNOOMA_LMNIJBIKKED_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define OGKBNNNOOMA_MMCFJKABHEC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define OGKBNNNOOMA_NEOGCFOEMCB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define OGKBNNNOOMA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B33C820)
#define OGKBNNNOOMA_OGMEGINBMCP_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OGKBNNNOOMA_PLGKNJJPCFO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OGKBNNNOOMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OGKBNNNOOMA_TypeDefinitionIndex = 15877;

struct alignas(4) OGKBNNNOOMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGKBNNNOOMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EDBMOEDLAFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_EDBMOEDLAFN_OFFSET))(this);
	}

	::System::String* FDHPFPGOJGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_FDHPFPGOJGG_OFFSET))(this);
	}

	::System::String* CLBILICFJGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_CLBILICFJGA_OFFSET))(this);
	}

	::System::String* CBKNDGBGBOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_CBKNDGBGBOL_OFFSET))(this);
	}

	/*
	::OGKBNNNOOMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGKBNNNOOMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NEOGCFOEMCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_NEOGCFOEMCB_OFFSET))(this);
	}

	::System::String* OGMEGINBMCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_OGMEGINBMCP_OFFSET))(this);
	}

	::System::Int32 HIGCACCDNLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_HIGCACCDNLP_OFFSET))(this);
	}

	::System::String* FMGHGEBDAGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_FMGHGEBDAGJ_OFFSET))(this);
	}

	::System::Int32 KKBHHBGNJEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_KKBHHBGNJEB_OFFSET))(this);
	}

	::System::String* BDBCMANEEOJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_BDBCMANEEOJ_OFFSET))(this);
	}

	::System::String* LMNIJBIKKED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_LMNIJBIKKED_OFFSET))(this);
	}

	::System::String* PLGKNJJPCFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_PLGKNJJPCFO_OFFSET))(this);
	}

	::System::String* LEBBNHLFIMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_LEBBNHLFIMN_OFFSET))(this);
	}

	::System::String* MMCFJKABHEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_MMCFJKABHEC_OFFSET))(this);
	}

	::System::String* BODLMKHCEHO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_BODLMKHCEHO_OFFSET))(this);
	}

	/*
	static ::OGKBNNNOOMA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OGKBNNNOOMA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OGKBNNNOOMA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
