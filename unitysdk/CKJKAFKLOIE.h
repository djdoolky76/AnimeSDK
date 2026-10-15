#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CKJKAFKLOIE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CKJKAFKLOIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1F010)
#define CKJKAFKLOIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC1F020)
#define CKJKAFKLOIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC1EFE0)

	class CKJKAFKLOIE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NMBGNGMDJOM; // 0x18
		::RPG::GameCore::RtBehaviorFlag GLABDALNODL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJKAFKLOIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKJKAFKLOIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKJKAFKLOIE*))((::PBYTE)hIl2Cpp + CKJKAFKLOIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CKJKAFKLOIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKJKAFKLOIE*))((::PBYTE)hIl2Cpp + CKJKAFKLOIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
