#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BPCBGBDIFDE_HBAJCMPLBPB.h"

class GLAAJLGNEGP;

#define BPCBGBDIFDE___C_JIKEIFDAIBF_OFFSET UNITYSDK_OFFSET(0x10E1BF00)
#define BPCBGBDIFDE___C_MPHHKIIINFE_OFFSET UNITYSDK_OFFSET(0x10E1C250)
#define BPCBGBDIFDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E1BEB0)
#define BPCBGBDIFDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1BEF0)

inline static constexpr unsigned int BPCBGBDIFDE___c_TypeDefinitionIndex = 78657;

class BPCBGBDIFDE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE___c_TypeDefinitionIndex)->GetStaticField(0x4CC50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCBGBDIFDE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JIKEIFDAIBF(::GLAAJLGNEGP* HAAEBCOBKFF, ::GLAAJLGNEGP* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::GLAAJLGNEGP*, ::GLAAJLGNEGP*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE___C_JIKEIFDAIBF_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 MPHHKIIINFE(::BPCBGBDIFDE_HBAJCMPLBPB HAAEBCOBKFF, ::BPCBGBDIFDE_HBAJCMPLBPB BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::BPCBGBDIFDE_HBAJCMPLBPB, ::BPCBGBDIFDE_HBAJCMPLBPB))((::PBYTE)hIl2Cpp + BPCBGBDIFDE___C_MPHHKIIINFE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
