#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHLEMDMCDDH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHLEMDMCDDH_BHFNKHLLIFK_OFFSET UNITYSDK_OFFSET(0x755E40)
#define LHLEMDMCDDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHLEMDMCDDH_CIGBKHHPJLA_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define LHLEMDMCDDH_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x758320)
#define LHLEMDMCDDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHLEMDMCDDH_HAGJDOINEPL_OFFSET UNITYSDK_OFFSET(0x755190)
#define LHLEMDMCDDH_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x758780)
#define LHLEMDMCDDH_JIGCIDPFIHP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LHLEMDMCDDH_LEHJFMAMFJO_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define LHLEMDMCDDH_LHBICAJDDMM_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define LHLEMDMCDDH_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LHLEMDMCDDH_MGOKNDCGOEI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define LHLEMDMCDDH_MLOBPDJFAJJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LHLEMDMCDDH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B3022E0)
#define LHLEMDMCDDH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHLEMDMCDDH_TypeDefinitionIndex = 12006;

struct alignas(4) LHLEMDMCDDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLEMDMCDDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DFIGOHGIDJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_DFIGOHGIDJN_OFFSET))(this);
	}

	/*
	static ::LHLEMDMCDDH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHLEMDMCDDH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LHBICAJDDMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_LHBICAJDDMM_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::String* JIGCIDPFIHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_JIGCIDPFIHP_OFFSET))(this);
	}

	::System::Int32 MGOKNDCGOEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_MGOKNDCGOEI_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Int32 HAGJDOINEPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_HAGJDOINEPL_OFFSET))(this);
	}

	::System::Int32 MLOBPDJFAJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_MLOBPDJFAJJ_OFFSET))(this);
	}

	/*
	::LHLEMDMCDDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHLEMDMCDDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BHFNKHLLIFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_BHFNKHLLIFK_OFFSET))(this);
	}

	::System::Int32 CIGBKHHPJLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_CIGBKHHPJLA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LEHJFMAMFJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEMDMCDDH_LEHJFMAMFJO_OFFSET))(this);
	}
};
