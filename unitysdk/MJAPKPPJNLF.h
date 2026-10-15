#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MJAPKPPJNLF;
namespace RPG::GameCore { class DynamicFloat; }

#define MJAPKPPJNLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D186090)
#define MJAPKPPJNLF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1860A0)
#define MJAPKPPJNLF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D186050)

inline static constexpr unsigned int MJAPKPPJNLF_TypeDefinitionIndex = 22621;

	class MJAPKPPJNLF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
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
