#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MAHKAGLDOIJ_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x151B9B00)
#define MAHKAGLDOIJ_KPDDMCCJGKM_OFFSET UNITYSDK_OFFSET(0x151B9B90)
#define MAHKAGLDOIJ_MNLJMEOLHJP_OFFSET UNITYSDK_OFFSET(0x151B9C90)
#define MAHKAGLDOIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151B9E80)

inline static constexpr unsigned int MAHKAGLDOIJ_TypeDefinitionIndex = 55833;

class MAHKAGLDOIJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHKAGLDOIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FCFOEJGPDNO(::System::String* PJMAELIAHGH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MAHKAGLDOIJ_FCFOEJGPDNO_OFFSET))(this, PJMAELIAHGH);
	}

	static ::System::Int32 MNLJMEOLHJP()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MAHKAGLDOIJ_MNLJMEOLHJP_OFFSET))();
	}

	static ::System::Boolean KPDDMCCJGKM(::System::String* HIBNGHMDFKL, ::System::Int32& GDBANLBHNJK, ::System::Int32& DNFNKBNBJHM)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MAHKAGLDOIJ_KPDDMCCJGKM_OFFSET))(HIBNGHMDFKL, GDBANLBHNJK, DNFNKBNBJHM);
	}
};
