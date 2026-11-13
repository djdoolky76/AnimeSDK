#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeTotalDamageToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MJAPKPPJNLF;
namespace RPG::GameCore { class DynamicFloat; }

#define MJAPKPPJNLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F58ABC0)
#define MJAPKPPJNLF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F58ABD0)
#define MJAPKPPJNLF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F58AB80)

inline static constexpr unsigned int MJAPKPPJNLF_TypeDefinitionIndex = 23036;

	class MJAPKPPJNLF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x18
		::RPG::GameCore::ElationTimeTotalDamageToastType GMPGDEINODK; // 0x20
		::System::Boolean GNDCCBNILML; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAPKPPJNLF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MJAPKPPJNLF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJAPKPPJNLF*))((::PBYTE)hIl2Cpp + MJAPKPPJNLF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MJAPKPPJNLF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJAPKPPJNLF*))((::PBYTE)hIl2Cpp + MJAPKPPJNLF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
