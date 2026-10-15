#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_FPLHPGEAPLL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5373D0)
#define KMCIALDOECA_FPLHPGEAPLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB536990)
#define KMCIALDOECA_FPLHPGEAPLL_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB537380)
#define KMCIALDOECA_FPLHPGEAPLL_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB537330)

inline static constexpr unsigned int KMCIALDOECA_FPLHPGEAPLL_TypeDefinitionIndex = 59836;

	class KMCIALDOECA_FPLHPGEAPLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_FPLHPGEAPLL_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_FPLHPGEAPLL_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_FPLHPGEAPLL_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_FPLHPGEAPLL_ACMKLFOMPFC_OFFSET))(this);
		}

	};
