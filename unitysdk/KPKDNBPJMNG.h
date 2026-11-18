#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KPKDNBPJMNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KPKDNBPJMNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPKDNBPJMNG_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KPKDNBPJMNG_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x754920)
#define KPKDNBPJMNG_GLMIJCOEBKG_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KPKDNBPJMNG_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KPKDNBPJMNG_JFCODDJEMCK_OFFSET UNITYSDK_OFFSET(0x757190)
#define KPKDNBPJMNG_JGFCAAIFLFA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KPKDNBPJMNG_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KPKDNBPJMNG_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KPKDNBPJMNG_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KPKDNBPJMNG_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KPKDNBPJMNG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19588650)
#define KPKDNBPJMNG_PNJIPGKCIIK_OFFSET UNITYSDK_OFFSET(0x758780)
#define KPKDNBPJMNG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KPKDNBPJMNG_TypeDefinitionIndex = 9612;

struct alignas(4) KPKDNBPJMNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPKDNBPJMNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KPKDNBPJMNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPKDNBPJMNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_GKKEEOMPEGE_OFFSET))(this);
	}

	::System::String* JGFCAAIFLFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_JGFCAAIFLFA_OFFSET))(this);
	}

	::System::String* HKELPCLHLEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::String* JFCODDJEMCK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_JFCODDJEMCK_OFFSET))(this);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* GLMIJCOEBKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_GLMIJCOEBKG_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 PNJIPGKCIIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_PNJIPGKCIIK_OFFSET))(this);
	}

	/*
	static ::KPKDNBPJMNG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KPKDNBPJMNG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDNBPJMNG_GKBAJJACIEA_OFFSET))(this);
	}
};
