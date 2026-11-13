#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_AACBDKJPJBP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x17B93F20)
#define KMCIALDOECA_AACBDKJPJBP_CTOR_OFFSET UNITYSDK_OFFSET(0x17B93E40)
#define KMCIALDOECA_AACBDKJPJBP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x17B93ED0)
#define KMCIALDOECA_AACBDKJPJBP_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x17B93E80)

inline static constexpr unsigned int KMCIALDOECA_AACBDKJPJBP_TypeDefinitionIndex = 61126;

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
