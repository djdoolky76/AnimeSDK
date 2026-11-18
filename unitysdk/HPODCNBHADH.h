#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HPODCNBHADH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPODCNBHADH_BNGDGNKLFJL_OFFSET UNITYSDK_OFFSET(0x757190)
#define HPODCNBHADH_ELHJOMPHFNM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPODCNBHADH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPODCNBHADH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754970)
#define HPODCNBHADH_JIHMHDBKOAC_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HPODCNBHADH_JPOCPKEJDNA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HPODCNBHADH_LKENAJNOHIF_OFFSET UNITYSDK_OFFSET(0x757290)
#define HPODCNBHADH_LKPCKNFDFAD_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HPODCNBHADH_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HPODCNBHADH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B8832E0)
#define HPODCNBHADH_PIMOAKCCPNH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HPODCNBHADH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPODCNBHADH_TypeDefinitionIndex = 16316;

struct alignas(4) HPODCNBHADH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPODCNBHADH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JPOCPKEJDNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_JPOCPKEJDNA_OFFSET))(this);
	}

	::System::String* BNGDGNKLFJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_BNGDGNKLFJL_OFFSET))(this);
	}

	/*
	static ::HPODCNBHADH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HPODCNBHADH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HPODCNBHADH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::String* PIMOAKCCPNH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_PIMOAKCCPNH_OFFSET))(this);
	}

	::System::Int32 ELHJOMPHFNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_ELHJOMPHFNM_OFFSET))(this);
	}

	::System::String* JIHMHDBKOAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_JIHMHDBKOAC_OFFSET))(this);
	}

	::System::String* LKENAJNOHIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_LKENAJNOHIF_OFFSET))(this);
	}

	/*
	::HPODCNBHADH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPODCNBHADH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPODCNBHADH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* LKPCKNFDFAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPODCNBHADH_LKPCKNFDFAD_OFFSET))(this);
	}
};
