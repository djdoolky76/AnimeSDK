#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDPGNMAGPDK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDPGNMAGPDK_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MDPGNMAGPDK_BDGCAOBNDHJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MDPGNMAGPDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDPGNMAGPDK_BJHHEEKEHDF_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MDPGNMAGPDK_CHNCEBEGEFL_OFFSET UNITYSDK_OFFSET(0x754970)
#define MDPGNMAGPDK_ELMAJBNJNDK_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MDPGNMAGPDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDPGNMAGPDK_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x754920)
#define MDPGNMAGPDK_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x757290)
#define MDPGNMAGPDK_HHDIHIAINHP_OFFSET UNITYSDK_OFFSET(0x755190)
#define MDPGNMAGPDK_IOHIHIFBFAN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MDPGNMAGPDK_KLCNIHEJMBF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MDPGNMAGPDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FC36F0)
#define MDPGNMAGPDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDPGNMAGPDK_TypeDefinitionIndex = 16422;

struct alignas(4) MDPGNMAGPDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDPGNMAGPDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IOHIHIFBFAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_IOHIHIFBFAN_OFFSET))(this);
	}

	::System::Int32 BDGCAOBNDHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_BDGCAOBNDHJ_OFFSET))(this);
	}

	::System::Int32 HHDIHIAINHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_HHDIHIAINHP_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 GIJGALKAMHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_GIJGALKAMHI_OFFSET))(this);
	}

	::System::Int32 CHNCEBEGEFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_CHNCEBEGEFL_OFFSET))(this);
	}

	::System::Int32 KLCNIHEJMBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_KLCNIHEJMBF_OFFSET))(this);
	}

	::System::Int32 ELMAJBNJNDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_ELMAJBNJNDK_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Int32 BJHHEEKEHDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_BJHHEEKEHDF_OFFSET))(this);
	}

	/*
	static ::MDPGNMAGPDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MDPGNMAGPDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MDPGNMAGPDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDPGNMAGPDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDPGNMAGPDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
