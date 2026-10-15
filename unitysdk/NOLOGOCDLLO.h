#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NOLOGOCDLLO;
namespace System { class String; }

#define NOLOGOCDLLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D241610)
#define NOLOGOCDLLO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D241620)
#define NOLOGOCDLLO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2415D0)

	class NOLOGOCDLLO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GJKFNFEBDKJ; // 0x18
		::System::String* HIJAJMAFHKA; // 0x20
		::System::Single AHGHKEIDBLN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLOGOCDLLO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOLOGOCDLLO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOLOGOCDLLO*))((::PBYTE)hIl2Cpp + NOLOGOCDLLO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NOLOGOCDLLO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOLOGOCDLLO*))((::PBYTE)hIl2Cpp + NOLOGOCDLLO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
