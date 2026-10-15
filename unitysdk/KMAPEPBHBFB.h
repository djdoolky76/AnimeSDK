#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KMAPEPBHBFB;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define KMAPEPBHBFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AC9C0)
#define KMAPEPBHBFB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0AC9D0)
#define KMAPEPBHBFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0AC990)

	class KMAPEPBHBFB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesPosition* PGJJCGGBCKK; // 0x18
		::System::UInt32 CHMCOKAIMGH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAPEPBHBFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KMAPEPBHBFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KMAPEPBHBFB*))((::PBYTE)hIl2Cpp + KMAPEPBHBFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KMAPEPBHBFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KMAPEPBHBFB*))((::PBYTE)hIl2Cpp + KMAPEPBHBFB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
