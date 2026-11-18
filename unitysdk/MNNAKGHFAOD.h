#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define MNNAKGHFAOD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16CABA50)
#define MNNAKGHFAOD_EEEMGLIPCDF_OFFSET UNITYSDK_OFFSET(0x16CAB990)
#define MNNAKGHFAOD_FBEGNPOHLKA_OFFSET UNITYSDK_OFFSET(0x16CAB9A0)
#define MNNAKGHFAOD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16CAB9C0)
#define MNNAKGHFAOD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16CAB8F0)
#define MNNAKGHFAOD_IDGHJKGHAMI_OFFSET UNITYSDK_OFFSET(0x16CAB9B0)
#define MNNAKGHFAOD_LAFMKKPIEIA_OFFSET UNITYSDK_OFFSET(0x16CAB980)
#define MNNAKGHFAOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CAB870)
#define MNNAKGHFAOD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAB8E0)

inline static constexpr unsigned int MNNAKGHFAOD_TypeDefinitionIndex = 57642;

class MNNAKGHFAOD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF; // 0x0
	::System::String* _AJHEBEPKDKB_k__BackingField; // 0x20
	::System::Int32 _EEFGPEEBJJK_k__BackingField; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNNAKGHFAOD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNAKGHFAOD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Int32 LAFMKKPIEIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_LAFMKKPIEIA_OFFSET))(this);
	}

	::System::Void EEEMGLIPCDF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_EEEMGLIPCDF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FBEGNPOHLKA(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_FBEGNPOHLKA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IDGHJKGHAMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_IDGHJKGHAMI_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* CJJAMDGADEN, ::System::Int32 CBIEJMBPAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MNNAKGHFAOD_CNHBDOMKKDE_OFFSET))(this, CJJAMDGADEN, CBIEJMBPAIC);
	}
};
