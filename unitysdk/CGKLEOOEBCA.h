#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CGKLEOOEBCA_BIPBBLBDHLF_OFFSET UNITYSDK_OFFSET(0x359150)
#define CGKLEOOEBCA_IKFLMMKHENO_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGKLEOOEBCA_JNEHJOPGDJP_OFFSET UNITYSDK_OFFSET(0x388A60)
#define CGKLEOOEBCA_JNNIOGKJIMO_OFFSET UNITYSDK_OFFSET(0x359320)
#define CGKLEOOEBCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1479BD60)
#define CGKLEOOEBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int CGKLEOOEBCA_TypeDefinitionIndex = 59793;

struct alignas(8) CGKLEOOEBCA
{
	static ::CGKLEOOEBCA* StaticGet_FDJHEBHLJLD()
	{
		return (::CGKLEOOEBCA*)Il2CppClass::FromTypeDefinitionIndex(CGKLEOOEBCA_TypeDefinitionIndex)->GetStaticField(0x47C40);
	}
	::System::Int32 _KBLFJPPLJND_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* _IMIGDCEBDLM_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 LFDNAFIMEBI, ::System::String* LEMGENOOECP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CGKLEOOEBCA__CTOR_OFFSET))(this, LFDNAFIMEBI, LEMGENOOECP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKLEOOEBCA__CCTOR_OFFSET))();
	}

	::System::Int32 JNNIOGKJIMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKLEOOEBCA_JNNIOGKJIMO_OFFSET))(this);
	}

	::System::Void BIPBBLBDHLF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGKLEOOEBCA_BIPBBLBDHLF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IKFLMMKHENO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKLEOOEBCA_IKFLMMKHENO_OFFSET))(this);
	}

	::System::Void JNEHJOPGDJP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGKLEOOEBCA_JNEHJOPGDJP_OFFSET))(this, EGEGIMGMJHN);
	}
};
