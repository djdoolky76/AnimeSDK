#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_OENBBCHIHLN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB537FC0)
#define KMCIALDOECA_OENBBCHIHLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5369F0)
#define KMCIALDOECA_OENBBCHIHLN_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB537F40)
#define KMCIALDOECA_OENBBCHIHLN_JJCBBJNFANH_OFFSET UNITYSDK_OFFSET(0xB537EF0)
#define KMCIALDOECA_OENBBCHIHLN_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB537E70)

inline static constexpr unsigned int KMCIALDOECA_OENBBCHIHLN_TypeDefinitionIndex = 59843;

	class KMCIALDOECA_OENBBCHIHLN : public ::System::Object
	{
	public:
		// static const ::System::Object NACFMGAHKEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_OENBBCHIHLN_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_OENBBCHIHLN_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_OENBBCHIHLN_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_OENBBCHIHLN_ACMKLFOMPFC_OFFSET))(this);
		}

		::RPG::CustomRP::Quality JJCBBJNFANH(::System::UInt32 a1)
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_OENBBCHIHLN_JJCBBJNFANH_OFFSET))(this, a1);
		}

	};
