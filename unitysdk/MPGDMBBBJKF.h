#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;
class ELKANIHDJPJ;
class GKLHCBFPMJA;

#define MPGDMBBBJKF_DLAMDGHKNPK_OFFSET UNITYSDK_OFFSET(0x131AFB70)
#define MPGDMBBBJKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x131AFEA0)
#define MPGDMBBBJKF__CTOR_OFFSET UNITYSDK_OFFSET(0x131AFB60)

inline static constexpr unsigned int MPGDMBBBJKF_TypeDefinitionIndex = 91057;

class MPGDMBBBJKF : public ::System::Object
{
public:
	static ::MPGDMBBBJKF** StaticGet_NJLLMPCDOEB()
	{
		return (::MPGDMBBBJKF**)Il2CppClass::FromTypeDefinitionIndex(MPGDMBBBJKF_TypeDefinitionIndex)->GetStaticField(0x4C040);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGDMBBBJKF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPGDMBBBJKF__CCTOR_OFFSET))();
	}

	::System::Void DLAMDGHKNPK(::GKLHCBFPMJA* HBACECLFKLE, ::ELKANIHDJPJ* CGNAECOJPGO, ::ANAPNFPOMNG* HPABLLADBOO)
	{
		return ((::System::Void(*)(::PVOID, ::GKLHCBFPMJA*, ::ELKANIHDJPJ*, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + MPGDMBBBJKF_DLAMDGHKNPK_OFFSET))(this, HBACECLFKLE, CGNAECOJPGO, HPABLLADBOO);
	}
};
