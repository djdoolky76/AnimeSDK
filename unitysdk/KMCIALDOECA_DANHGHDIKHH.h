#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_DANHGHDIKHH_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53DAA0)
#define KMCIALDOECA_DANHGHDIKHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D360)
#define KMCIALDOECA_DANHGHDIKHH_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53DA40)
#define KMCIALDOECA_DANHGHDIKHH_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53D9F0)

inline static constexpr unsigned int KMCIALDOECA_DANHGHDIKHH_TypeDefinitionIndex = 59842;

	class KMCIALDOECA_DANHGHDIKHH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANHGHDIKHH_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANHGHDIKHH_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANHGHDIKHH_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANHGHDIKHH_ACMKLFOMPFC_OFFSET))(this);
		}

	};
