#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_EEFENDOLPKM_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBD88CF0)
#define KMCIALDOECA_EEFENDOLPKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD883D0)
#define KMCIALDOECA_EEFENDOLPKM_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xBD88C50)
#define KMCIALDOECA_EEFENDOLPKM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xBD88C00)

inline static constexpr unsigned int KMCIALDOECA_EEFENDOLPKM_TypeDefinitionIndex = 61116;

	class KMCIALDOECA_EEFENDOLPKM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_EEFENDOLPKM_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_EEFENDOLPKM_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_EEFENDOLPKM_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_EEFENDOLPKM_ACMKLFOMPFC_OFFSET))(this);
		}

	};
