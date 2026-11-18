#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CONDKPCPPHF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CONDKPCPPHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CONDKPCPPHF_CABGACKAEBA_OFFSET UNITYSDK_OFFSET(0x756440)
#define CONDKPCPPHF_FONCPNEEPDL_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define CONDKPCPPHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CONDKPCPPHF_GPDNKLDAMLH_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CONDKPCPPHF_HALHLNEEFCO_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define CONDKPCPPHF_HMENKIPEPMA_OFFSET UNITYSDK_OFFSET(0x757E20)
#define CONDKPCPPHF_IICBEDGHECO_OFFSET UNITYSDK_OFFSET(0x757690)
#define CONDKPCPPHF_ILGJMGDFGPG_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define CONDKPCPPHF_IOCNEHIGCOA_OFFSET UNITYSDK_OFFSET(0x758320)
#define CONDKPCPPHF_KBAIIJFBOBB_OFFSET UNITYSDK_OFFSET(0x757760)
#define CONDKPCPPHF_KMIEBBLGOJI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CONDKPCPPHF_KPDGMKDDMAM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CONDKPCPPHF_MANALEJOPPB_OFFSET UNITYSDK_OFFSET(0x757290)
#define CONDKPCPPHF_MHDHBKEGFJB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CONDKPCPPHF_MINLGIEBMOD_OFFSET UNITYSDK_OFFSET(0x755710)
#define CONDKPCPPHF_NGOMHPJNHHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CONDKPCPPHF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A93600)
#define CONDKPCPPHF_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x757190)
#define CONDKPCPPHF_OKKJHFMHANH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CONDKPCPPHF_PFAGKFHJIDG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CONDKPCPPHF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CONDKPCPPHF_TypeDefinitionIndex = 14117;

struct alignas(4) CONDKPCPPHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CONDKPCPPHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ILGJMGDFGPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_ILGJMGDFGPG_OFFSET))(this);
	}

	::System::String* OKKJHFMHANH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_OKKJHFMHANH_OFFSET))(this);
	}

	::System::String* HMENKIPEPMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_HMENKIPEPMA_OFFSET))(this);
	}

	::System::String* IOCNEHIGCOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_IOCNEHIGCOA_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Int32 CABGACKAEBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_CABGACKAEBA_OFFSET))(this);
	}

	::System::String* MANALEJOPPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_MANALEJOPPB_OFFSET))(this);
	}

	::System::String* KMIEBBLGOJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_KMIEBBLGOJI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PFAGKFHJIDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_PFAGKFHJIDG_OFFSET))(this);
	}

	::System::String* GPDNKLDAMLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_GPDNKLDAMLH_OFFSET))(this);
	}

	::System::Int32 FONCPNEEPDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_FONCPNEEPDL_OFFSET))(this);
	}

	/*
	static ::CONDKPCPPHF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CONDKPCPPHF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CONDKPCPPHF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MHDHBKEGFJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_MHDHBKEGFJB_OFFSET))(this);
	}

	/*
	::CONDKPCPPHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CONDKPCPPHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CONDKPCPPHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NGOMHPJNHHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_NGOMHPJNHHB_OFFSET))(this);
	}

	::System::String* MINLGIEBMOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_MINLGIEBMOD_OFFSET))(this);
	}

	::System::Int32 KPDGMKDDMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_KPDGMKDDMAM_OFFSET))(this);
	}

	::System::String* HALHLNEEFCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_HALHLNEEFCO_OFFSET))(this);
	}

	::System::String* IICBEDGHECO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_IICBEDGHECO_OFFSET))(this);
	}

	::System::String* KBAIIJFBOBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDKPCPPHF_KBAIIJFBOBB_OFFSET))(this);
	}
};
