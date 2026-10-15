#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class CONGPILMBPA;
class FCOEMCEDLNL;
class ICCKHJDEIJB;

#define CONGPILMBPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB170)
#define CONGPILMBPA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCBB180)
#define CONGPILMBPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCBB010)

inline static constexpr unsigned int CONGPILMBPA_TypeDefinitionIndex = 21062;

	class CONGPILMBPA : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::ICCKHJDEIJB*>* JFBLHELPACE; // 0x10
		::System::Single DEHNNOGKBJO; // 0x18
		::System::Boolean MHFNDIBPLKK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONGPILMBPA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CONGPILMBPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CONGPILMBPA*))((::PBYTE)hIl2Cpp + CONGPILMBPA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CONGPILMBPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CONGPILMBPA*))((::PBYTE)hIl2Cpp + CONGPILMBPA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
