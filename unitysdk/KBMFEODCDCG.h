#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBMFEODCDCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBMFEODCDCG_CGJKMFFADCF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define KBMFEODCDCG_CMKEBKACHCN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KBMFEODCDCG_EDNBHBOGJAH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KBMFEODCDCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBMFEODCDCG_LBOBBPMJGPK_OFFSET UNITYSDK_OFFSET(0x758320)
#define KBMFEODCDCG_NNJGPDDCODM_OFFSET UNITYSDK_OFFSET(0x757290)
#define KBMFEODCDCG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15AB2710)
#define KBMFEODCDCG_OBHGKFGEAIF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KBMFEODCDCG_ODCKMBHKGHN_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KBMFEODCDCG_POGPOBGLDHL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KBMFEODCDCG_PPEHLAEBPBI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBMFEODCDCG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBMFEODCDCG_TypeDefinitionIndex = 10931;

struct alignas(4) KBMFEODCDCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBMFEODCDCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KBMFEODCDCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBMFEODCDCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBMFEODCDCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CGJKMFFADCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_CGJKMFFADCF_OFFSET))(this);
	}

	::System::String* OBHGKFGEAIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_OBHGKFGEAIF_OFFSET))(this);
	}

	::System::String* LBOBBPMJGPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_LBOBBPMJGPK_OFFSET))(this);
	}

	::System::String* ODCKMBHKGHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_ODCKMBHKGHN_OFFSET))(this);
	}

	::System::Int32 EDNBHBOGJAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_EDNBHBOGJAH_OFFSET))(this);
	}

	::System::String* CMKEBKACHCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_CMKEBKACHCN_OFFSET))(this);
	}

	::System::String* POGPOBGLDHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_POGPOBGLDHL_OFFSET))(this);
	}

	::System::String* NNJGPDDCODM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_NNJGPDDCODM_OFFSET))(this);
	}

	::System::Int32 PPEHLAEBPBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMFEODCDCG_PPEHLAEBPBI_OFFSET))(this);
	}

	/*
	static ::KBMFEODCDCG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KBMFEODCDCG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KBMFEODCDCG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
