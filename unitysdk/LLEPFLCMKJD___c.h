#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IECNLPPHCHI;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LLEPFLCMKJD___C_BPGCANICOCM_OFFSET UNITYSDK_OFFSET(0x1A614980)
#define LLEPFLCMKJD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A614930)
#define LLEPFLCMKJD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A614970)

inline static constexpr unsigned int LLEPFLCMKJD___c_TypeDefinitionIndex = 49356;

class LLEPFLCMKJD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LLEPFLCMKJD___c_TypeDefinitionIndex)->GetStaticField(0x4D600);
	}
	static ::System::Action_2<::IECNLPPHCHI*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::IECNLPPHCHI*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LLEPFLCMKJD___c_TypeDefinitionIndex)->GetStaticField(0x4D608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLEPFLCMKJD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPFLCMKJD___C__CTOR_OFFSET))(this);
	}

	::System::Void BPGCANICOCM(::IECNLPPHCHI* ECKMPOAABAL, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::IECNLPPHCHI*, ::System::Int32))((::PBYTE)hIl2Cpp + LLEPFLCMKJD___C_BPGCANICOCM_OFFSET))(this, ECKMPOAABAL, HBJOLKHGGDD);
	}
};
