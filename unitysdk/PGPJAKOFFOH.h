#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PGPJAKOFFOH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PGPJAKOFFOH_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754920)
#define PGPJAKOFFOH_BAMGDCHIGNM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PGPJAKOFFOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PGPJAKOFFOH_CAJIAKODIAP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define PGPJAKOFFOH_EHJOPAKIHKF_OFFSET UNITYSDK_OFFSET(0x755E40)
#define PGPJAKOFFOH_EHNCKKOBDBE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PGPJAKOFFOH_FNFKGGMBPOK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define PGPJAKOFFOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGPJAKOFFOH_ICEHJKCGACD_OFFSET UNITYSDK_OFFSET(0x757290)
#define PGPJAKOFFOH_JDJEAIJOEDK_OFFSET UNITYSDK_OFFSET(0x762B30)
#define PGPJAKOFFOH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0038E0)
#define PGPJAKOFFOH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PGPJAKOFFOH_TypeDefinitionIndex = 15554;

struct alignas(4) PGPJAKOFFOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGPJAKOFFOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ICEHJKCGACD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_ICEHJKCGACD_OFFSET))(this);
	}

	::System::Int32 BAMGDCHIGNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_BAMGDCHIGNM_OFFSET))(this);
	}

	::System::Int32 EHNCKKOBDBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_EHNCKKOBDBE_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	static ::PGPJAKOFFOH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PGPJAKOFFOH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 EHJOPAKIHKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_EHJOPAKIHKF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean JDJEAIJOEDK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_JDJEAIJOEDK_OFFSET))(this);
	}

	::System::Int32 FNFKGGMBPOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_FNFKGGMBPOK_OFFSET))(this);
	}

	/*
	::PGPJAKOFFOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGPJAKOFFOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CAJIAKODIAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPJAKOFFOH_CAJIAKODIAP_OFFSET))(this);
	}
};
