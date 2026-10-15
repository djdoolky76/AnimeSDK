#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFHLAHIGGEB;

#define FFHLAHIGGEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE6A70)
#define FFHLAHIGGEB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE6A80)
#define FFHLAHIGGEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE69B0)

	class FFHLAHIGGEB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHLAHIGGEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFHLAHIGGEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFHLAHIGGEB*))((::PBYTE)hIl2Cpp + FFHLAHIGGEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFHLAHIGGEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFHLAHIGGEB*))((::PBYTE)hIl2Cpp + FFHLAHIGGEB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
