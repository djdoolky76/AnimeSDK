#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CIJAOPJPHDK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define CIJAOPJPHDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC16140)
#define CIJAOPJPHDK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC16150)
#define CIJAOPJPHDK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC16110)

	class CIJAOPJPHDK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJAOPJPHDK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIJAOPJPHDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIJAOPJPHDK*))((::PBYTE)hIl2Cpp + CIJAOPJPHDK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CIJAOPJPHDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIJAOPJPHDK*))((::PBYTE)hIl2Cpp + CIJAOPJPHDK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
