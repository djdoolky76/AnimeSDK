#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHBOGGBEMFF;
namespace System { class String; }

#define PPLPPPCNCPP_AABIJAPKCAH_OFFSET UNITYSDK_OFFSET(0xC391C50)
#define PPLPPPCNCPP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC391BF0)
#define PPLPPPCNCPP_CTOR_OFFSET UNITYSDK_OFFSET(0xC391D70)
#define PPLPPPCNCPP_EDOGPEOFHBC_OFFSET UNITYSDK_OFFSET(0xC391CF0)
#define PPLPPPCNCPP_EKEMIJMLAKM_OFFSET UNITYSDK_OFFSET(0xC391D30)
#define PPLPPPCNCPP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC391B40)
#define PPLPPPCNCPP_KPNCMNLCKKM_OFFSET UNITYSDK_OFFSET(0xC391CA0)

inline static constexpr unsigned int PPLPPPCNCPP_TypeDefinitionIndex = 49091;

	class PPLPPPCNCPP : public ::System::Object
	{
	public:
		::DHBOGGBEMFF* JKJJEINDFMA; // 0x10
		::System::String* BDLCCJIEAED; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void AABIJAPKCAH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_AABIJAPKCAH_OFFSET))(this, a1);
		}

		::System::Void KPNCMNLCKKM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_KPNCMNLCKKM_OFFSET))(this, a1);
		}

		::System::Void EDOGPEOFHBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_EDOGPEOFHBC_OFFSET))(this);
		}

		::System::Void EKEMIJMLAKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLPPPCNCPP_EKEMIJMLAKM_OFFSET))(this);
		}

	};
