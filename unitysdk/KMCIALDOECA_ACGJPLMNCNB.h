#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_ACGJPLMNCNB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x17B940F0)
#define KMCIALDOECA_ACGJPLMNCNB_CTOR_OFFSET UNITYSDK_OFFSET(0x17B93E00)
#define KMCIALDOECA_ACGJPLMNCNB_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x17B94000)
#define KMCIALDOECA_ACGJPLMNCNB_GLMCIIPHEDE_OFFSET UNITYSDK_OFFSET(0x17B94090)
#define KMCIALDOECA_ACGJPLMNCNB_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x17B93FB0)

inline static constexpr unsigned int KMCIALDOECA_ACGJPLMNCNB_TypeDefinitionIndex = 61121;

	class KMCIALDOECA_ACGJPLMNCNB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_ACGJPLMNCNB_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_ACGJPLMNCNB_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_ACGJPLMNCNB_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_ACGJPLMNCNB_ACMKLFOMPFC_OFFSET))(this);
		}

		::RPG::CustomRP::Quality GLMCIIPHEDE(::System::UInt32 a1)
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_ACGJPLMNCNB_GLMCIIPHEDE_OFFSET))(this, a1);
		}

	};
