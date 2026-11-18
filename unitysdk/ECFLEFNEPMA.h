#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ECFLEFNEPMA_AGCFAOIHNBM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ECFLEFNEPMA_BBIJOEIOHBE_OFFSET UNITYSDK_OFFSET(0x766400)
#define ECFLEFNEPMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ECFLEFNEPMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECFLEFNEPMA_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ECFLEFNEPMA_MFGPMPHMGBD_OFFSET UNITYSDK_OFFSET(0x754970)
#define ECFLEFNEPMA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157AB500)
#define ECFLEFNEPMA_OGIIJONKICH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ECFLEFNEPMA_PDCILMNLHDD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ECFLEFNEPMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ECFLEFNEPMA_TypeDefinitionIndex = 17740;

struct alignas(4) ECFLEFNEPMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECFLEFNEPMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OGIIJONKICH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_OGIIJONKICH_OFFSET))(this);
	}

	/*
	static ::ECFLEFNEPMA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ECFLEFNEPMA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MFGPMPHMGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_MFGPMPHMGBD_OFFSET))(this);
	}

	::System::Int32 AGCFAOIHNBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_AGCFAOIHNBM_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::ECFLEFNEPMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECFLEFNEPMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PDCILMNLHDD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_PDCILMNLHDD_OFFSET))(this);
	}

	::System::Boolean BBIJOEIOHBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFLEFNEPMA_BBIJOEIOHBE_OFFSET))(this);
	}
};
