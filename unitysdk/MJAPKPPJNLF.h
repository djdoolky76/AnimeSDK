#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeTotalDamageToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MJAPKPPJNLF;
namespace RPG::GameCore { class DynamicFloat; }

#define MJAPKPPJNLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B55F0)
#define MJAPKPPJNLF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3B5600)
#define MJAPKPPJNLF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3B55B0)

inline static constexpr unsigned int MJAPKPPJNLF_TypeDefinitionIndex = 23036;

	class MJAPKPPJNLF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ElationTimeTotalDamageToastType GMPGDEINODK; // 0x24
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
