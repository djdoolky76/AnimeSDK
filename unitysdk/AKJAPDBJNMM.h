#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AKJAPDBJNMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKJAPDBJNMM_EHGNPFCMDOI_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AKJAPDBJNMM_ENGHDKODHBF_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define AKJAPDBJNMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKJAPDBJNMM_IKLBGOFBILG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AKJAPDBJNMM_JAEDBDEDOGM_OFFSET UNITYSDK_OFFSET(0x758780)
#define AKJAPDBJNMM_JKAKDMKOLNJ_OFFSET UNITYSDK_OFFSET(0x757190)
#define AKJAPDBJNMM_KIMGDFJPAOA_OFFSET UNITYSDK_OFFSET(0x755A00)
#define AKJAPDBJNMM_LCAOBOODGJL_OFFSET UNITYSDK_OFFSET(0x755790)
#define AKJAPDBJNMM_LKFMLAFKGGB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKJAPDBJNMM_LKOMHMFEHIE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AKJAPDBJNMM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1774AD00)
#define AKJAPDBJNMM_OFLGFGIJLEE_OFFSET UNITYSDK_OFFSET(0x756360)
#define AKJAPDBJNMM_OOMCKOJIPNO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define AKJAPDBJNMM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKJAPDBJNMM_TypeDefinitionIndex = 16490;

struct alignas(4) AKJAPDBJNMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKJAPDBJNMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AKJAPDBJNMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKJAPDBJNMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KIMGDFJPAOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_KIMGDFJPAOA_OFFSET))(this);
	}

	::System::Int32 JAEDBDEDOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_JAEDBDEDOGM_OFFSET))(this);
	}

	::System::Boolean OFLGFGIJLEE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_OFLGFGIJLEE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LKOMHMFEHIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_LKOMHMFEHIE_OFFSET))(this);
	}

	::System::Int32 EHGNPFCMDOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_EHGNPFCMDOI_OFFSET))(this);
	}

	/*
	static ::AKJAPDBJNMM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKJAPDBJNMM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean ENGHDKODHBF(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_ENGHDKODHBF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LCAOBOODGJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_LCAOBOODGJL_OFFSET))(this);
	}

	::System::String* IKLBGOFBILG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_IKLBGOFBILG_OFFSET))(this);
	}

	::System::String* JKAKDMKOLNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_JKAKDMKOLNJ_OFFSET))(this);
	}

	::System::Int32 LKFMLAFKGGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_LKFMLAFKGGB_OFFSET))(this);
	}

	::System::Int32 OOMCKOJIPNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJAPDBJNMM_OOMCKOJIPNO_OFFSET))(this);
	}
};
