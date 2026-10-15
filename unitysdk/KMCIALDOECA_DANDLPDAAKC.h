#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_DANDLPDAAKC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB536F20)
#define KMCIALDOECA_DANDLPDAAKC_CACKKMHDLCL_OFFSET UNITYSDK_OFFSET(0xB536EC0)
#define KMCIALDOECA_DANDLPDAAKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB5369A0)
#define KMCIALDOECA_DANDLPDAAKC_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB536DB0)
#define KMCIALDOECA_DANDLPDAAKC_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB536D60)

inline static constexpr unsigned int KMCIALDOECA_DANDLPDAAKC_TypeDefinitionIndex = 59837;

	class KMCIALDOECA_DANDLPDAAKC : public ::System::Object
	{
	public:
		// static const ::System::Object FGEDFKIGMFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANDLPDAAKC_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANDLPDAAKC_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANDLPDAAKC_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANDLPDAAKC_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Single CACKKMHDLCL(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_DANDLPDAAKC_CACKKMHDLCL_OFFSET))(this, a1);
		}

	};
