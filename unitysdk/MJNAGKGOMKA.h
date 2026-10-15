#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MJNAGKGOMKA;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define MJNAGKGOMKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6430)
#define MJNAGKGOMKA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1B6440)
#define MJNAGKGOMKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1B6400)

	class MJNAGKGOMKA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LittleGameFireEffectParams* EKKGNJDOANO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNAGKGOMKA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MJNAGKGOMKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJNAGKGOMKA*))((::PBYTE)hIl2Cpp + MJNAGKGOMKA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MJNAGKGOMKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJNAGKGOMKA*))((::PBYTE)hIl2Cpp + MJNAGKGOMKA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
