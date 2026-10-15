#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_PAFHAKMECGC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53EC40)
#define KMCIALDOECA_PAFHAKMECGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D2E0)
#define KMCIALDOECA_PAFHAKMECGC_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53EAE0)
#define KMCIALDOECA_PAFHAKMECGC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53E9C0)
#define KMCIALDOECA_PAFHAKMECGC_MCKCCPIBIIP_OFFSET UNITYSDK_OFFSET(0xB53EA80)

inline static constexpr unsigned int KMCIALDOECA_PAFHAKMECGC_TypeDefinitionIndex = 59833;

	class KMCIALDOECA_PAFHAKMECGC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_PAFHAKMECGC_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_PAFHAKMECGC_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_PAFHAKMECGC_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_PAFHAKMECGC_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void MCKCCPIBIIP(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KMCIALDOECA_PAFHAKMECGC_MCKCCPIBIIP_OFFSET))(this, a1, a2, a3);
		}

	};
