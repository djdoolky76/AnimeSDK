#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BHPDOAEBLOH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BHPDOAEBLOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BHPDOAEBLOH_BNKFPOFEGOJ_OFFSET UNITYSDK_OFFSET(0x757330)
#define BHPDOAEBLOH_DCDNGIOFFCD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BHPDOAEBLOH_DCIMPJDHJAM_OFFSET UNITYSDK_OFFSET(0x760650)
#define BHPDOAEBLOH_DJELMNAKKAA_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define BHPDOAEBLOH_FEFMFOBKKNK_OFFSET UNITYSDK_OFFSET(0x757290)
#define BHPDOAEBLOH_FINICBBFFJJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BHPDOAEBLOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHPDOAEBLOH_IAJNANHGAJJ_OFFSET UNITYSDK_OFFSET(0x756D50)
#define BHPDOAEBLOH_IGGCHBOOLAC_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define BHPDOAEBLOH_IOJLLNIHBIF_OFFSET UNITYSDK_OFFSET(0x762D20)
#define BHPDOAEBLOH_JBJGPJLGHGJ_OFFSET UNITYSDK_OFFSET(0x756490)
#define BHPDOAEBLOH_LJFJINDFHHO_OFFSET UNITYSDK_OFFSET(0x76FE20)
#define BHPDOAEBLOH_MGKAEFEIGAM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BHPDOAEBLOH_OMDDIPHNCPL_OFFSET UNITYSDK_OFFSET(0x7553C0)
#define BHPDOAEBLOH_OMIJICCKJOK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BHPDOAEBLOH_PJEMINHAIEJ_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define BHPDOAEBLOH_PKBKBNCAMEC_OFFSET UNITYSDK_OFFSET(0x763920)
#define BHPDOAEBLOH_PLDHDOBACAN_OFFSET UNITYSDK_OFFSET(0x755440)
#define BHPDOAEBLOH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BHPDOAEBLOH_TypeDefinitionIndex = 11791;

struct alignas(4) BHPDOAEBLOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHPDOAEBLOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MGKAEFEIGAM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_MGKAEFEIGAM_OFFSET))(this);
	}

	::System::Int32 BNKFPOFEGOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_BNKFPOFEGOJ_OFFSET))(this);
	}

	::System::Boolean JBJGPJLGHGJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_JBJGPJLGHGJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 PLDHDOBACAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_PLDHDOBACAN_OFFSET))(this);
	}

	::System::String* FINICBBFFJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_FINICBBFFJJ_OFFSET))(this);
	}

	::System::String* FEFMFOBKKNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_FEFMFOBKKNK_OFFSET))(this);
	}

	::System::Boolean OMDDIPHNCPL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_OMDDIPHNCPL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* IAJNANHGAJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_IAJNANHGAJJ_OFFSET))(this);
	}

	::System::Int32 IOJLLNIHBIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_IOJLLNIHBIF_OFFSET))(this);
	}

	::System::Int32 IGGCHBOOLAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_IGGCHBOOLAC_OFFSET))(this);
	}

	::System::Int32 DCDNGIOFFCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_DCDNGIOFFCD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DCIMPJDHJAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_DCIMPJDHJAM_OFFSET))(this);
	}

	::System::Boolean PKBKBNCAMEC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_PKBKBNCAMEC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BHPDOAEBLOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHPDOAEBLOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PJEMINHAIEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_PJEMINHAIEJ_OFFSET))(this);
	}

	::System::Boolean DJELMNAKKAA(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_DJELMNAKKAA_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* OMIJICCKJOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_OMIJICCKJOK_OFFSET))(this);
	}

	::System::Boolean LJFJINDFHHO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BHPDOAEBLOH_LJFJINDFHHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
