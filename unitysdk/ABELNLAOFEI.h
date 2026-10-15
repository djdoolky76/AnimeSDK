#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ABELNLAOFEI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define ABELNLAOFEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9F260)
#define ABELNLAOFEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC9F270)
#define ABELNLAOFEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC9F230)

	class ABELNLAOFEI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GJCPNEECKPA; // 0x18
		::RPG::GameCore::DynamicFloat* JEDCEAGNOAI; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicFloat* HDJIPJCNGFG; // 0x30
		::RPG::GameCore::DynamicFloat* IBAMEPMGLPO; // 0x38
		::RPG::GameCore::DynamicFloat* GBBDAJLLLOA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABELNLAOFEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ABELNLAOFEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABELNLAOFEI*))((::PBYTE)hIl2Cpp + ABELNLAOFEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ABELNLAOFEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABELNLAOFEI*))((::PBYTE)hIl2Cpp + ABELNLAOFEI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
