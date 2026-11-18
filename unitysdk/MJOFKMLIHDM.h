#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MJOFKMLIHDM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MJOFKMLIHDM_AHDONBNGFMA_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define MJOFKMLIHDM_BFBFNMHFBKP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MJOFKMLIHDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MJOFKMLIHDM_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x7558E0)
#define MJOFKMLIHDM_BLIBADHDLJA_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define MJOFKMLIHDM_BOMJMLNABCH_OFFSET UNITYSDK_OFFSET(0x7EA2E0)
#define MJOFKMLIHDM_CJFILLGHDFE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MJOFKMLIHDM_DEFJGHDDPOB_OFFSET UNITYSDK_OFFSET(0x7AC220)
#define MJOFKMLIHDM_ECJAFMBCEOF_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define MJOFKMLIHDM_EEHEKEEDCKD_OFFSET UNITYSDK_OFFSET(0x7666A0)
#define MJOFKMLIHDM_EFDJKBNHPDC_OFFSET UNITYSDK_OFFSET(0x755790)
#define MJOFKMLIHDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJOFKMLIHDM_GJHBPCFIGAN_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define MJOFKMLIHDM_GNGBBFFOOND_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MJOFKMLIHDM_INOJAPOPGDE_OFFSET UNITYSDK_OFFSET(0x7E4710)
#define MJOFKMLIHDM_JJCAJFKEHEB_OFFSET UNITYSDK_OFFSET(0x763E10)
#define MJOFKMLIHDM_KLIKGMMILBA_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define MJOFKMLIHDM_KOHNOHDNGOK_OFFSET UNITYSDK_OFFSET(0x779440)
#define MJOFKMLIHDM_LDFGAJPLFHM_OFFSET UNITYSDK_OFFSET(0x754C20)
#define MJOFKMLIHDM_NDPLODJAKPE_OFFSET UNITYSDK_OFFSET(0x758320)
#define MJOFKMLIHDM_PPBIGCIDLNN_OFFSET UNITYSDK_OFFSET(0x761500)
#define MJOFKMLIHDM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MJOFKMLIHDM_TypeDefinitionIndex = 12800;

struct alignas(4) MJOFKMLIHDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJOFKMLIHDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single BOMJMLNABCH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_BOMJMLNABCH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Single INOJAPOPGDE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_INOJAPOPGDE_OFFSET))(this);
	}

	::System::Single EEHEKEEDCKD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_EEHEKEEDCKD_OFFSET))(this);
	}

	::System::Boolean KOHNOHDNGOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_KOHNOHDNGOK_OFFSET))(this);
	}

	::System::Int32 EFDJKBNHPDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_EFDJKBNHPDC_OFFSET))(this);
	}

	::System::Int32 CJFILLGHDFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_CJFILLGHDFE_OFFSET))(this);
	}

	/*
	::MJOFKMLIHDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJOFKMLIHDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BFBFNMHFBKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_BFBFNMHFBKP_OFFSET))(this);
	}

	::System::Boolean JJCAJFKEHEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_JJCAJFKEHEB_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_BHOCGBENING_OFFSET))(this);
	}

	::System::Int32 LDFGAJPLFHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_LDFGAJPLFHM_OFFSET))(this);
	}

	::System::String* BLIBADHDLJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_BLIBADHDLJA_OFFSET))(this);
	}

	::System::Boolean GJHBPCFIGAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_GJHBPCFIGAN_OFFSET))(this);
	}

	::System::Int32 ECJAFMBCEOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_ECJAFMBCEOF_OFFSET))(this);
	}

	::System::Int32 AHDONBNGFMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_AHDONBNGFMA_OFFSET))(this);
	}

	::System::Boolean PPBIGCIDLNN(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_PPBIGCIDLNN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* NDPLODJAKPE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_NDPLODJAKPE_OFFSET))(this);
	}

	::System::String* GNGBBFFOOND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_GNGBBFFOOND_OFFSET))(this);
	}

	::System::String* KLIKGMMILBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_KLIKGMMILBA_OFFSET))(this);
	}

	::System::Boolean DEFJGHDDPOB(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MJOFKMLIHDM_DEFJGHDDPOB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
