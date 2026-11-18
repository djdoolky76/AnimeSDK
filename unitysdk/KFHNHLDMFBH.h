#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLJHBPHFFAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KFHNHLDMFBH_BEGKGMLMJHP_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define KFHNHLDMFBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFHNHLDMFBH_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KFHNHLDMFBH_DPINPMONDFE_OFFSET UNITYSDK_OFFSET(0x761360)
#define KFHNHLDMFBH_EHEDNGGDAKF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KFHNHLDMFBH_GCOFLHJIKGH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KFHNHLDMFBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFHNHLDMFBH_GNLGMBJPHKF_OFFSET UNITYSDK_OFFSET(0x755CC0)
#define KFHNHLDMFBH_HGIMAIOJDKB_OFFSET UNITYSDK_OFFSET(0x757190)
#define KFHNHLDMFBH_JDBEHEKAGJA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KFHNHLDMFBH_KKKCCOCOFMD_OFFSET UNITYSDK_OFFSET(0x7588B0)
#define KFHNHLDMFBH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KFHNHLDMFBH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17494F90)
#define KFHNHLDMFBH_ONNFAIPMNKM_OFFSET UNITYSDK_OFFSET(0x77A300)
#define KFHNHLDMFBH_PKMBIDCNEDL_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define KFHNHLDMFBH_PLEHKCHOIDD_OFFSET UNITYSDK_OFFSET(0x760650)
#define KFHNHLDMFBH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFHNHLDMFBH_TypeDefinitionIndex = 10440;

struct alignas(4) KFHNHLDMFBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFHNHLDMFBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HGIMAIOJDKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_HGIMAIOJDKB_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 GNLGMBJPHKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_GNLGMBJPHKF_OFFSET))(this);
	}

	/*
	static ::KFHNHLDMFBH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 FPCEGDFJDPO, ::System::Int32 DADIDBMHLOI, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFHNHLDMFBH(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, FPCEGDFJDPO, DADIDBMHLOI, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 PLEHKCHOIDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_PLEHKCHOIDD_OFFSET))(this);
	}

	::System::String* BEGKGMLMJHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_BEGKGMLMJHP_OFFSET))(this);
	}

	::System::String* GCOFLHJIKGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_GCOFLHJIKGH_OFFSET))(this);
	}

	::System::Boolean DPINPMONDFE(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_DPINPMONDFE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean ONNFAIPMNKM(::System::Int32 HPMEONKHFGG, ::CLJHBPHFFAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLJHBPHFFAP&))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_ONNFAIPMNKM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EHEDNGGDAKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_EHEDNGGDAKF_OFFSET))(this);
	}

	::System::String* JDBEHEKAGJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_JDBEHEKAGJA_OFFSET))(this);
	}

	/*
	::KFHNHLDMFBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFHNHLDMFBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BLFKNELJFFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 PKMBIDCNEDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_PKMBIDCNEDL_OFFSET))(this);
	}

	::System::Boolean KKKCCOCOFMD(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + KFHNHLDMFBH_KKKCCOCOFMD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
