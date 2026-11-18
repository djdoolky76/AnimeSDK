#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IPAJKKJCBLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPAJKKJCBLD_CGIDFONADHI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IPAJKKJCBLD_EBEJDACAIKM_OFFSET UNITYSDK_OFFSET(0x754970)
#define IPAJKKJCBLD_EMAKOGMEJAK_OFFSET UNITYSDK_OFFSET(0x757190)
#define IPAJKKJCBLD_EPMAEAFFFAD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IPAJKKJCBLD_FEDMIGCABBA_OFFSET UNITYSDK_OFFSET(0x756440)
#define IPAJKKJCBLD_FFGOLAOGOEK_OFFSET UNITYSDK_OFFSET(0x755190)
#define IPAJKKJCBLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPAJKKJCBLD_GGBLGGHOCKO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IPAJKKJCBLD_GGLIPIEACHH_OFFSET UNITYSDK_OFFSET(0x754920)
#define IPAJKKJCBLD_HHMPALFBDPH_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IPAJKKJCBLD_JAAIEIBPNOA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define IPAJKKJCBLD_JHMOFONBLPL_OFFSET UNITYSDK_OFFSET(0x757290)
#define IPAJKKJCBLD_KOAOOFGDAHD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPAJKKJCBLD_MFNKADOBJOO_OFFSET UNITYSDK_OFFSET(0x755890)
#define IPAJKKJCBLD_MHKKHHBADPD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define IPAJKKJCBLD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B890130)
#define IPAJKKJCBLD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPAJKKJCBLD_TypeDefinitionIndex = 14135;

struct alignas(4) IPAJKKJCBLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPAJKKJCBLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JAAIEIBPNOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_JAAIEIBPNOA_OFFSET))(this);
	}

	::System::String* HHMPALFBDPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_HHMPALFBDPH_OFFSET))(this);
	}

	::System::Int32 EPMAEAFFFAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_EPMAEAFFFAD_OFFSET))(this);
	}

	::System::Int32 EBEJDACAIKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_EBEJDACAIKM_OFFSET))(this);
	}

	::System::Int32 CGIDFONADHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_CGIDFONADHI_OFFSET))(this);
	}

	::System::Int32 FFGOLAOGOEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_FFGOLAOGOEK_OFFSET))(this);
	}

	/*
	::IPAJKKJCBLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPAJKKJCBLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JHMOFONBLPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_JHMOFONBLPL_OFFSET))(this);
	}

	::System::Int32 MFNKADOBJOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_MFNKADOBJOO_OFFSET))(this);
	}

	::System::Int32 GGBLGGHOCKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_GGBLGGHOCKO_OFFSET))(this);
	}

	::System::Int32 FEDMIGCABBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_FEDMIGCABBA_OFFSET))(this);
	}

	/*
	static ::IPAJKKJCBLD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 GEKJHKKDIOH, ::System::Int32 IMDIPJPAFDG, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IPAJKKJCBLD(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, GEKJHKKDIOH, IMDIPJPAFDG, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MHKKHHBADPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_MHKKHHBADPD_OFFSET))(this);
	}

	::System::Int32 GGLIPIEACHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_GGLIPIEACHH_OFFSET))(this);
	}

	::System::String* EMAKOGMEJAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_EMAKOGMEJAK_OFFSET))(this);
	}

	::System::Int32 KOAOOFGDAHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAJKKJCBLD_KOAOOFGDAHD_OFFSET))(this);
	}
};
