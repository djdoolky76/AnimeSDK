#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_AACBDKJPJBP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB536AF0)
#define KMCIALDOECA_AACBDKJPJBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB536A10)
#define KMCIALDOECA_AACBDKJPJBP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB536AA0)
#define KMCIALDOECA_AACBDKJPJBP_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB536A50)

inline static constexpr unsigned int KMCIALDOECA_AACBDKJPJBP_TypeDefinitionIndex = 59845;

	class KMCIALDOECA_AACBDKJPJBP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_AACBDKJPJBP_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_AACBDKJPJBP_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_AACBDKJPJBP_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_AACBDKJPJBP_ACMKLFOMPFC_OFFSET))(this);
		}

	};
