#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IFHFADIDGGD;

#define IFHFADIDGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF2620)
#define IFHFADIDGGD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEF2630)
#define IFHFADIDGGD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEF25E0)

	class IFHFADIDGGD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single PAPLHBDJLMM; // 0x18
		::System::Boolean EKGDOELGLFK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFADIDGGD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IFHFADIDGGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFHFADIDGGD*))((::PBYTE)hIl2Cpp + IFHFADIDGGD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IFHFADIDGGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFHFADIDGGD*))((::PBYTE)hIl2Cpp + IFHFADIDGGD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
