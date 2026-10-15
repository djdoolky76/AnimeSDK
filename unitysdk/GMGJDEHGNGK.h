#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GMGJDEHGNGK;
namespace RPG::GameCore { class DynamicFloat; }

#define GMGJDEHGNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE68A70)
#define GMGJDEHGNGK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE68A80)
#define GMGJDEHGNGK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE68A40)

	class GMGJDEHGNGK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PMAKGKEKBFG; // 0x18
		::RPG::GameCore::DynamicFloat* LKOPNLLKPEK; // 0x20
		::System::Boolean OOMOFODFCBH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGJDEHGNGK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GMGJDEHGNGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMGJDEHGNGK*))((::PBYTE)hIl2Cpp + GMGJDEHGNGK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GMGJDEHGNGK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMGJDEHGNGK*))((::PBYTE)hIl2Cpp + GMGJDEHGNGK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
