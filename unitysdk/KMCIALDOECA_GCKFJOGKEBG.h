#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_GCKFJOGKEBG_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53E050)
#define KMCIALDOECA_GCKFJOGKEBG_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D330)
#define KMCIALDOECA_GCKFJOGKEBG_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53E000)
#define KMCIALDOECA_GCKFJOGKEBG_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53DFB0)

inline static constexpr unsigned int KMCIALDOECA_GCKFJOGKEBG_TypeDefinitionIndex = 59838;

	class KMCIALDOECA_GCKFJOGKEBG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_GCKFJOGKEBG_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GCKFJOGKEBG_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GCKFJOGKEBG_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_GCKFJOGKEBG_ACMKLFOMPFC_OFFSET))(this);
		}

	};
