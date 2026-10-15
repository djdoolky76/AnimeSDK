#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OPGCGKNDLOE;

#define OPGCGKNDLOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BC600)
#define OPGCGKNDLOE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2BC610)
#define OPGCGKNDLOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2BC5D0)

	class OPGCGKNDLOE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KKJLMNLCMBK; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 EBJKJAGJGPK; // 0x1C
		::System::Int32 GAOAMKBNDPN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGCGKNDLOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OPGCGKNDLOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OPGCGKNDLOE*))((::PBYTE)hIl2Cpp + OPGCGKNDLOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OPGCGKNDLOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OPGCGKNDLOE*))((::PBYTE)hIl2Cpp + OPGCGKNDLOE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
