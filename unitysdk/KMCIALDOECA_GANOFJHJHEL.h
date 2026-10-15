#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_GANOFJHJHEL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5375A0)
#define KMCIALDOECA_GANOFJHJHEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB536970)
#define KMCIALDOECA_GANOFJHJHEL_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB537500)
#define KMCIALDOECA_GANOFJHJHEL_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB537460)

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
