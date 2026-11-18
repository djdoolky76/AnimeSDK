#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EEGNIAOPEMM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EEGNIAOPEMM_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754970)
#define EEGNIAOPEMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EEGNIAOPEMM_CPPMMKLJJOP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EEGNIAOPEMM_EDEJBBDHHAC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define EEGNIAOPEMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EEGNIAOPEMM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define EEGNIAOPEMM_MOHPPPHBEGN_OFFSET UNITYSDK_OFFSET(0x754E10)
#define EEGNIAOPEMM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F46A50)
#define EEGNIAOPEMM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EEGNIAOPEMM_TypeDefinitionIndex = 10316;

struct alignas(4) EEGNIAOPEMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEGNIAOPEMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::EEGNIAOPEMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EEGNIAOPEMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CPPMMKLJJOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_CPPMMKLJJOP_OFFSET))(this);
	}

	::System::Boolean MOHPPPHBEGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_MOHPPPHBEGN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 EDEJBBDHHAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_EDEJBBDHHAC_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	static ::EEGNIAOPEMM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EEGNIAOPEMM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EEGNIAOPEMM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
