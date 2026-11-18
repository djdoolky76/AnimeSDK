#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IPAAAGBJIEC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPAAAGBJIEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPAAAGBJIEC_FEMCJBMAPNE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IPAAAGBJIEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPAAAGBJIEC_GGCDNOMPJKE_OFFSET UNITYSDK_OFFSET(0x758780)
#define IPAAAGBJIEC_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IPAAAGBJIEC_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IPAAAGBJIEC_KGHFAJMMFNI_OFFSET UNITYSDK_OFFSET(0x754920)
#define IPAAAGBJIEC_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x756D50)
#define IPAAAGBJIEC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5E6C20)
#define IPAAAGBJIEC_OBFEHCALNPG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define IPAAAGBJIEC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPAAAGBJIEC_TypeDefinitionIndex = 10074;

struct alignas(4) IPAAAGBJIEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPAAAGBJIEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FEMCJBMAPNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_FEMCJBMAPNE_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Int32 GGCDNOMPJKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_GGCDNOMPJKE_OFFSET))(this);
	}

	/*
	::IPAAAGBJIEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPAAAGBJIEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OBFEHCALNPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_OBFEHCALNPG_OFFSET))(this);
	}

	::System::Int32 KGHFAJMMFNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_KGHFAJMMFNI_OFFSET))(this);
	}

	/*
	static ::IPAAAGBJIEC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IPAAAGBJIEC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAAGBJIEC_HKELPCLHLEC_OFFSET))(this);
	}
};
