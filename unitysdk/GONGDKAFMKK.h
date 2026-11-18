#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GONGDKAFMKK_ABGNNDCIMMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GONGDKAFMKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GONGDKAFMKK_CDOEMMPOFHE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GONGDKAFMKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GONGDKAFMKK_GKABCLNGKBM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GONGDKAFMKK_GLICGBNGKBI_OFFSET UNITYSDK_OFFSET(0x754970)
#define GONGDKAFMKK_KGIOMOFOKCI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GONGDKAFMKK_KONJGHIBMGD_OFFSET UNITYSDK_OFFSET(0x754920)
#define GONGDKAFMKK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16652480)
#define GONGDKAFMKK_PFCOCMDMNIH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GONGDKAFMKK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GONGDKAFMKK_TypeDefinitionIndex = 10668;

struct alignas(4) GONGDKAFMKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONGDKAFMKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CDOEMMPOFHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_CDOEMMPOFHE_OFFSET))(this);
	}

	::System::Int32 KGIOMOFOKCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_KGIOMOFOKCI_OFFSET))(this);
	}

	::System::Int32 ABGNNDCIMMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_ABGNNDCIMMM_OFFSET))(this);
	}

	/*
	static ::GONGDKAFMKK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JNBKGLBPGHP, ::System::Int32 NOKAJLKHOFC, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GONGDKAFMKK(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GONGDKAFMKK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JNBKGLBPGHP, NOKAJLKHOFC, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GONGDKAFMKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GONGDKAFMKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GONGDKAFMKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KONJGHIBMGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_KONJGHIBMGD_OFFSET))(this);
	}

	::System::Int32 GKABCLNGKBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_GKABCLNGKBM_OFFSET))(this);
	}

	::System::Int32 GLICGBNGKBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_GLICGBNGKBI_OFFSET))(this);
	}

	::System::Int32 PFCOCMDMNIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GONGDKAFMKK_PFCOCMDMNIH_OFFSET))(this);
	}
};
