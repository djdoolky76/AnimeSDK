#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PHKBMFDEOOK;
namespace RPG::GameCore { class TargetEvaluator; }

#define PHKBMFDEOOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E9280)
#define PHKBMFDEOOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2E9290)
#define PHKBMFDEOOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2E9250)

inline static constexpr unsigned int PHKBMFDEOOK_TypeDefinitionIndex = 22917;

	class PHKBMFDEOOK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* KDCFNLFAKKN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKBMFDEOOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PHKBMFDEOOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHKBMFDEOOK*))((::PBYTE)hIl2Cpp + PHKBMFDEOOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PHKBMFDEOOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHKBMFDEOOK*))((::PBYTE)hIl2Cpp + PHKBMFDEOOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
