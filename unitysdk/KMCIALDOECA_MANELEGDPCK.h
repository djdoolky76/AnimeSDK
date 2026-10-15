#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_MANELEGDPCK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB537DF0)
#define KMCIALDOECA_MANELEGDPCK_BOOJLPOIIAP_OFFSET UNITYSDK_OFFSET(0xB537D20)
#define KMCIALDOECA_MANELEGDPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB536A30)
#define KMCIALDOECA_MANELEGDPCK_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB537D70)
#define KMCIALDOECA_MANELEGDPCK_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB537CA0)

inline static constexpr unsigned int KMCIALDOECA_MANELEGDPCK_TypeDefinitionIndex = 59847;

	class KMCIALDOECA_MANELEGDPCK : public ::System::Object
	{
	public:
		// static const ::System::Object FMNJNPCHIJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_MANELEGDPCK_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_MANELEGDPCK_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_MANELEGDPCK_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_MANELEGDPCK_ACMKLFOMPFC_OFFSET))(this);
		}

		::RPG::CustomRP::Quality BOOJLPOIIAP(::System::UInt32 a1)
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_MANELEGDPCK_BOOJLPOIIAP_OFFSET))(this, a1);
		}

	};
