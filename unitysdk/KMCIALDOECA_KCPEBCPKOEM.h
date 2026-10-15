#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_KCPEBCPKOEM_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53E460)
#define KMCIALDOECA_KCPEBCPKOEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D3A0)
#define KMCIALDOECA_KCPEBCPKOEM_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53E410)
#define KMCIALDOECA_KCPEBCPKOEM_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53E3C0)

	class KMCIALDOECA_KCPEBCPKOEM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_KCPEBCPKOEM_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_KCPEBCPKOEM_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_KCPEBCPKOEM_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_KCPEBCPKOEM_ACMKLFOMPFC_OFFSET))(this);
		}

	};
