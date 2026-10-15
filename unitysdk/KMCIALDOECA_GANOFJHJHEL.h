#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_GANOFJHJHEL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53DF20)
#define KMCIALDOECA_GANOFJHJHEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D2F0)
#define KMCIALDOECA_GANOFJHJHEL_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53DE80)
#define KMCIALDOECA_GANOFJHJHEL_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53DDE0)

inline static constexpr unsigned int KMCIALDOECA_GANOFJHJHEL_TypeDefinitionIndex = 59834;

	class KMCIALDOECA_GANOFJHJHEL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_GANOFJHJHEL_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GANOFJHJHEL_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GANOFJHJHEL_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_GANOFJHJHEL_ACMKLFOMPFC_OFFSET))(this);
		}

	};
