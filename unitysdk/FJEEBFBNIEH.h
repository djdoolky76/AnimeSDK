#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FJEEBFBNIEH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FJEEBFBNIEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FJEEBFBNIEH_DHNOLPMMNCN_OFFSET UNITYSDK_OFFSET(0x756060)
#define FJEEBFBNIEH_DPPKBEIHNKJ_OFFSET UNITYSDK_OFFSET(0x7587D0)
#define FJEEBFBNIEH_EEJDEMHHALB_OFFSET UNITYSDK_OFFSET(0x763D90)
#define FJEEBFBNIEH_ENJKLGGNENJ_OFFSET UNITYSDK_OFFSET(0x762A90)
#define FJEEBFBNIEH_GEADINPIDDE_OFFSET UNITYSDK_OFFSET(0x755140)
#define FJEEBFBNIEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJEEBFBNIEH_GMPMNMEJKCG_OFFSET UNITYSDK_OFFSET(0x761BD0)
#define FJEEBFBNIEH_KNBJCODGFCJ_OFFSET UNITYSDK_OFFSET(0x761C30)
#define FJEEBFBNIEH_LCOILJEGAGP_OFFSET UNITYSDK_OFFSET(0x757190)
#define FJEEBFBNIEH_LHGGFEPADED_OFFSET UNITYSDK_OFFSET(0x757A30)
#define FJEEBFBNIEH_LPFHBOMNFPE_OFFSET UNITYSDK_OFFSET(0x756510)
#define FJEEBFBNIEH_NIKHNJEDBMK_OFFSET UNITYSDK_OFFSET(0x757D20)
#define FJEEBFBNIEH_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x761E00)
#define FJEEBFBNIEH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A76970)
#define FJEEBFBNIEH_PFDCDOJNEGD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FJEEBFBNIEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FJEEBFBNIEH_TypeDefinitionIndex = 15037;

struct alignas(4) FJEEBFBNIEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJEEBFBNIEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DPPKBEIHNKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_DPPKBEIHNKJ_OFFSET))(this);
	}

	::System::String* NIKHNJEDBMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_NIKHNJEDBMK_OFFSET))(this);
	}

	::System::Boolean DHNOLPMMNCN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_DHNOLPMMNCN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* ENJKLGGNENJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_ENJKLGGNENJ_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Boolean EEJDEMHHALB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_EEJDEMHHALB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean KNBJCODGFCJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_KNBJCODGFCJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LPFHBOMNFPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_LPFHBOMNFPE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::FJEEBFBNIEH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FJEEBFBNIEH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::FJEEBFBNIEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJEEBFBNIEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* PFDCDOJNEGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_PFDCDOJNEGD_OFFSET))(this);
	}

	::System::String* LCOILJEGAGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_LCOILJEGAGP_OFFSET))(this);
	}

	::System::Int32 GMPMNMEJKCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_GMPMNMEJKCG_OFFSET))(this);
	}

	::System::Int32 GEADINPIDDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_GEADINPIDDE_OFFSET))(this);
	}

	::System::Int32 LHGGFEPADED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEEBFBNIEH_LHGGFEPADED_OFFSET))(this);
	}
};
