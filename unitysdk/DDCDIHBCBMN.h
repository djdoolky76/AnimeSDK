#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DDCDIHBCBMN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DDCDIHBCBMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DDCDIHBCBMN_CAEGHBNHMAO_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DDCDIHBCBMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDCDIHBCBMN_HEIGFJBNCIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DDCDIHBCBMN_HOPJDJAPEMM_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define DDCDIHBCBMN_KJEOJODPOIJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define DDCDIHBCBMN_LBLEAJLAKDG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DDCDIHBCBMN_LFEKOGDFPAO_OFFSET UNITYSDK_OFFSET(0x754970)
#define DDCDIHBCBMN_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DDCDIHBCBMN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19507F20)
#define DDCDIHBCBMN_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define DDCDIHBCBMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DDCDIHBCBMN_TypeDefinitionIndex = 10026;

struct alignas(4) DDCDIHBCBMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDCDIHBCBMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DDCDIHBCBMN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DDCDIHBCBMN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KJEOJODPOIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_KJEOJODPOIJ_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 LFEKOGDFPAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_LFEKOGDFPAO_OFFSET))(this);
	}

	/*
	::DDCDIHBCBMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDCDIHBCBMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LBLEAJLAKDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_LBLEAJLAKDG_OFFSET))(this);
	}

	::System::Int32 HEIGFJBNCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_HEIGFJBNCIJ_OFFSET))(this);
	}

	::System::String* HOPJDJAPEMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_HOPJDJAPEMM_OFFSET))(this);
	}

	::System::Int32 CAEGHBNHMAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCDIHBCBMN_CAEGHBNHMAO_OFFSET))(this);
	}
};
